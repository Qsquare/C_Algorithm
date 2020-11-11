#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef int ElementQueueType;
typedef struct QNode *PtrToQNode;
struct QNode {
	ElementQueueType *Data;
	int front;
	int rear;
	int size;
};
typedef PtrToQNode Queue;

int IsFull(Queue PtrQ);
int IsEmpty(Queue PtrQ);
void EnQueue(ElementQueueType item, Queue PtrQ);
ElementQueueType DeQueue(Queue PtrQ);
Queue CreateQueue(int Size);

#endif 
