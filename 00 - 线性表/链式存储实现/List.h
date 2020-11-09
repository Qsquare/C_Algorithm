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
List FindKth(int K, List PtrL);	//��λ�ò���
List Find(ElementListType item, List PtrL); //��ֵ����
List Insert(ElementListType item, int index, List PtrL); 
List Delete(int index, List PtrL); 

#endif

