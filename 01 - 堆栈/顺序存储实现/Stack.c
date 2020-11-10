#include <malloc.h>
#include "Stack.h"

int IsEmpty(Stack PtrS) {
	return PtrS->Top == -1;
}


int IsFull(Stack PtrS) {
	return PtrS->Top == PtrS->Size;
}


void Push(ElementStackType item, Stack PtrS) {
	if (IsFull(PtrS)) return;	//堆栈已满 
	PtrS->Data[++PtrS->Top] = item;
	return; 
}

ElementStackType Pop(Stack PtrS) {
	//注意，这里默认使用前先判断是否空的
	return PtrS->Data[PtrS->Top--]; 
}


Stack CreateStack(int Size) {
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Data = (ElementStackType *)malloc(sizeof(ElementStackType)*Size);
	S->Size = Size;
	S->Top = -1;
	return S;
}


