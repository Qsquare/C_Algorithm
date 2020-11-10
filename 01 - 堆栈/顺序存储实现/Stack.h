#ifndef _STACK_H_
#define _STACK_H_

typedef int ElementStackType;

typedef struct SNode *PtrToStack;
struct SNode {
	ElementStackType *Data;
	int Top;
	int Size;
};
typedef PtrToStack Stack;

int IsEmpty(Stack PtrS);
int IsFull(Stack PtrS);
void Push(ElementStackType item, Stack PtrS);
ElementStackType Pop(Stack PtrS);
Stack CreateStack(int Size);

#endif 
