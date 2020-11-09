#ifndef _LIST_H_
#define _LIST_H_

typedef int ElementListType;	//列表的基本元素类型
typedef struct LNode *PtrToLNode;  
struct LNode {
	ElementListType *Data;
	int Last;	//最后一个元素的位置 
	int Size;	//表的大小 
}; 
typedef PtrToLNode List;

List CreateList(int Size);
int Find(ElementListType item, List PtrL);
int Insert(ElementListType item, int index, List PtrL);
int Delete(int index, List PtrL);

#endif

