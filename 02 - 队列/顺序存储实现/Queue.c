#include <stdio.h>
#include <malloc.h>
#include "Queue.h"

/* 
	ע�⣬��������ֻ�������size-1������Ϊ�ж�Ϊ�յ�ʱ��
	ֻ��Ҫfront=rear���У�����������е�λ�ö��õĻ��Ͳ���
	�ж� 
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
	//ע�⣬����Ĭ���ǳ���ǰ���ж��Ƿ�Ϊ�յ�
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


