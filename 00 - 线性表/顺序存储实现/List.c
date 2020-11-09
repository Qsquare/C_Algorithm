#include <stdio.h>
#include <malloc.h>
#include "List.h"


List CreateList(int Size) {
	List PtrL = (List)malloc(sizeof(struct LNode)*Size);
	PtrL->Last = -1;
	PtrL->Size = Size;
	return PtrL;
}


int Find(ElementListType item, List PtrL) {
	int index = 0;
	while (index<=PtrL->Last&&PtrL->Data[index]!=item) {
		index++;
	}
	if (index>PtrL->Last) return -1;	//û���ҵ� 
	else return index;
}


int Insert(ElementListType item, int index, List PtrL) {
	/*
	���ص�ֵ�����˲����������
	1���ɹ�
	-1��indexλ��Խ�� 
	0: ���Ѿ�����	
	*/
	int i;
	if (PtrL->Last==PtrL->Size-1) return 0;	//���Ѿ�����
	else if (index<0||index>PtrL->Last+2) return -1;
	else {
		for (i=++PtrL->Last; i>index; i--) {
			PtrL->Data[i] = PtrL->Data[i-1];
		}
		PtrL->Data[index] = item;
		return 1;
	}
} 

int Delete(int index, List PtrL) {
	/*
	���ص�ֵ������ɾ����������
	1���ɹ�
	-1��indexλ��Խ�� 
	0: ���Ѿ�����	
	*/
	int i; 
	if (PtrL->Last==-1) return 0;	//���Ѿ�Ϊ��
	else if (index<0||index>PtrL->Last) return -1;
	else {
		for (i=index; i<PtrL->Last--; i++) {
			PtrL->Data[i+1] = PtrL->Data[i];
		}
		return 1;
	}
}





