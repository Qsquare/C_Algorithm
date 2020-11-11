#include <stdio.h>
#include <malloc.h>
#include "Queue.h"

int IsEmpty(Queue PtrQ) {
	return PtrQ->front == NULL;
} 

void EnQueue(ElementQueueType item, Queue PtrQ) {
	PtrToNode Temp = (PtrToNode)malloc(sizeof(struct Node));
	Temp->Data = item;
	Temp->Next = NULL;
	if (IsEmpty(PtrQ)) {
		PtrQ->front = Temp;
		PtrQ->rear = Temp;
	} else {
		PtrQ->rear->Next = Temp;
		PtrQ->rear = Temp;
	}
}


ElementQueueType DeQueue(Queue PtrQ) {
	//����Ĭ��ʹ��ǰ���ж��Ƿ�Ϊ��
	PtrToNode Temp = PtrQ->front;
	ElementQueueType out = Temp->Data; 
	if (PtrQ->front==PtrQ->rear) { //ֻʣ��һ��Ԫ�� 
		PtrQ->front = NULL;
		PtrQ->rear = NULL;
	} else {
		PtrQ->front = PtrQ->front->Next;
	}
	free(Temp);
	return out;
}

Queue CreateQueue(void) {
	Queue Q = (Queue)malloc(sizeof(struct QNode));
	Q->front = NULL;
	Q->rear = NULL;
	return Q;
}


