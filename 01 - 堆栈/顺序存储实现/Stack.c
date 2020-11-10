#include <malloc.h>
#include "Stack.h"

int IsEmpty(Stack PtrS) {
	return PtrS->Top == -1;
}


int IsFull(Stack PtrS) {
	return PtrS->Top == PtrS->Size;
}


void Push(ElementStackType item, Stack PtrS) {
	if (IsFull(PtrS)) return;	//��ջ���� 
	PtrS->Data[++PtrS->Top] = item;
	return; 
}

ElementStackType Pop(Stack PtrS) {
	//ע�⣬����Ĭ��ʹ��ǰ���ж��Ƿ�յ�
	return PtrS->Data[PtrS->Top--]; 
}


Stack CreateStack(int Size) {
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Data = (ElementStackType *)malloc(sizeof(ElementStackType)*Size);
	S->Size = Size;
	S->Top = -1;
	return S;
}


