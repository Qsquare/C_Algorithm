#include <stdio.h>
#include <malloc.h>
#include "Queue.h"

/* 
	注意，我们这里只用数组的size-1个，因为判断为空的时候
	只需要front=rear就行，如果数组所有的位置都用的话就不好
	判断 
*/ 
int IsFull(Queue PtrQ) {
	return (PtrQ->rear+1)%(PtrQ->size) == PtrQ->front;
}

int IsEmpty(Queue PtrQ) {
	return PtrQ->front == PtrQ->rear; 
} 

void EnQueue(ElementQueueType item, Queue PtrQ) {
	if (IsFull(PtrQ)) return;
	PtrQ->rear = (PtrQ->rear+1)%PtrQ->size;
	PtrQ->Data[PtrQ->rear] = item;  
}

ElementQueueType DeQueue(Queue PtrQ) {
	//注意，这里默认是出队前先判断是否为空的
	PtrQ->front = (PtrQ->front+1)%PtrQ->size;
	return PtrQ->Data[PtrQ->front]; 
}

Queue CreateQueue(int Size) {
	Queue Q = (Queue)malloc(sizeof(struct QNode));
	Q->Data = (ElementQueueType *)malloc(sizeof(ElementQueueType)*Size);
	Q->front = -1;
	Q->rear = -1;
	Q->size = Size;
	return Q;
}


