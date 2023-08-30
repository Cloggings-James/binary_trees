#include "queue.h"
#include <stdlib.h>

queue_t *queue_create(void)
{
    queue_t *queue = malloc(sizeof(queue_t));
    if (queue == NULL)
        return NULL;

    queue->front = NULL;
    queue->rear = NULL;
    return queue;
}

void queue_push(queue_t **queue, void *data)
{
    if (*queue == NULL || data == NULL)
        return;

    queue_node_t *new_node = malloc(sizeof(queue_node_t));
    if (new_node == NULL)
        return;

    new_node->data = data;
    new_node->next = NULL;

    if ((*queue)->rear == NULL)
    {
        (*queue)->front = new_node;
        (*queue)->rear = new_node;
    }
    else
    {
        (*queue)->rear->next = new_node;
        (*queue)->rear = new_node;
    }
}

void *queue_peek(const queue_t *queue)
{
    if (queue == NULL || queue->front == NULL)
        return NULL;
    return queue->front->data;
}

void queue_pop(queue_t **queue)
{
    if (*queue == NULL || (*queue)->front == NULL)
        return;

    queue_node_t *temp = (*queue)->front;
    (*queue)->front = (*queue)->front->next;

    if ((*queue)->front == NULL)
        (*queue)->rear = NULL;

    free(temp);
}

int queue_is_empty(const queue_t *queue)
{
    return (queue == NULL || queue->front == NULL);
}

void queue_delete(queue_t **queue)
{
    if (*queue == NULL)
        return;

    while (!queue_is_empty(*queue))
        queue_pop(queue);

    free(*queue);
    *queue = NULL;
}

