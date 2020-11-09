#ifndef _LIST_H_
#define _LIST_H_

typedef int ElementListType;
typedef struct LNode *PtrToLNode;
struct LNode {
	ElementListType Data;
	struct LNode *Next;
};
typedef PtrToLNode List;

int Length(List PtrL);
List FindKth(int K, List PtrL);	//按位置查找
List Find(ElementListType item, List PtrL); //按值查找
List Insert(ElementListType item, int index, List PtrL); 
List Delete(int index, List PtrL); 

#endif

