#ifndef _STACK_H_
#define _STACK_H_
#include "BinTree.h"
#define ElementStackType BinTree

//typedef BinTree ElementStackType;
typedef struct SNode *PtrToStack;
struct SNode {
	ElementStackType Data;
	struct SNode *Next;
};
typedef PtrToStack Stack;

//��Ϊ���������ԾͲ����� 
int IsEmpty(Stack PtrS);
void Push(ElementStackType item, Stack PtrS);
ElementStackType Pop(Stack PtrS);
Stack CreateStack(void);

#endif  
