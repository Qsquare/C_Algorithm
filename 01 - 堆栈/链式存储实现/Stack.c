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
	//����Ĭ�ϵ���ʹ��ǰ���ж��Ƿ�Ϊ��
	PtrToStack FrontCell = PtrS->Next;	//�ҳ�Top���ڵ�Ԫ�� 
	ElementStackType out = PtrS->Next->Data;
	PtrS->Next = PtrS->Next->Next;
	free(FrontCell);  //�ͷ��ڴ�
	return out; 
}


Stack CreateStack(void) {//����ͷ�ڵ� 
	Stack S = (Stack)malloc(sizeof(struct SNode));
	S->Next = NULL; 
	return S;
}

