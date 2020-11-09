#ifndef _LIST_H_
#define _LIST_H_

typedef int ElementListType;	//�б�Ļ���Ԫ������
typedef struct LNode *PtrToLNode;  
struct LNode {
	ElementListType *Data;
	int Last;	//���һ��Ԫ�ص�λ�� 
	int Size;	//��Ĵ�С 
}; 
typedef PtrToLNode List;

List CreateList(int Size);
int Find(ElementListType item, List PtrL);
int Insert(ElementListType item, int index, List PtrL);
int Delete(int index, List PtrL);

#endif

