#ifndef QUEUE_H
#define QUEUE_H

#include <stddef.h>

typedef struct queue_node
{
    void *data;
    struct queue_node *next;
} queue_node_t;

typedef struct queue
{
    queue_node_t *front;
    queue_node_t *rear;
} queue_t;

queue_t *queue_create(void);
void queue_push(queue_t **queue, void *data);
void *queue_peek(const queue_t *queue);
void queue_pop(queue_t **queue);
int queue_is_empty(const queue_t *queue);
void queue_delete(queue_t **queue);

#endif /* QUEUE_H */

