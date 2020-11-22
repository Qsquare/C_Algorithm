#ifndef _QUEUE_H_
#define _QUEUE_H_
#include "BinTree.h"
#define ElementQueueType BinTree

//typedef int ElementQueueType;
typedef struct Node *PtrToNode;
struct Node {
	ElementQueueType Data;
	PtrToNode Next;
};
typedef struct QNode *PtrToQNode;
struct QNode {
	struct Node *rear;
	struct Node *front;
};
typedef PtrToQNode Queue;

//��ʽ�洢�Ļ�����һ�㲻���� 
int IsEmpty(Queue PtrQ);
void EnQueue(ElementQueueType item, Queue PtrQ);
ElementQueueType DeQueue(Queue PtrQ);
Queue CreateQueue(void);

#endif
