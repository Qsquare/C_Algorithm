#include <stdlib.h>
#include <malloc.h>
#include "Stack.h"

int IsEmpty(Stack PtrS) {
	return PtrS->Next == NULL;
}


void Push(ElementStackType item, Stack PtrS) {
	PtrToStack temp = (PtrToStack)malloc(sizeof(struct SNode));
	temp->Data = item;
	temp->Next = PtrS->Next;
	PtrS->Next = temp; 
}


ElementStackType Pop(Stack PtrS) {
	//这里默认的是使用前先判断是否为空
	PtrToStack FrontCell = PtrS->Next;	//找出Top所在的元素 
	ElementStackType out = PtrS->Next->Data;
	PtrS->Next = PtrS->Next->Next;
	free(FrontCell);  //释放内存
	return out; 
}


Stack CreateStack(void) {//创建头节点 
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL; 
	return S;
}

