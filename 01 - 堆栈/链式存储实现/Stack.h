#ifndef _STACK_H_
#define _STACK_H_

typedef int ElementStackType;
typedef struct SNode *PtrToStack;
struct SNode {
	ElementStackType Data;
	struct SNode *Next;
};
typedef PtrToStack Stack;

//因为是链表，所以就不会满 
int IsEmpty(Stack PtrS);
void Push(ElementStackType item, Stack PtrS);
ElementStackType Pop(Stack PtrS);
Stack CreateStack(void);

#endif  
