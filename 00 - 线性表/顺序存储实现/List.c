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
	if (index>PtrL->Last) return -1;	//没有找到 
	else return index;
}


int Insert(ElementListType item, int index, List PtrL) {
	/*
	返回的值代表了插入的完成情况
	1：成功
	-1：index位置越界 
	0: 表已经满了	
	*/
	int i;
	if (PtrL->Last==PtrL->Size-1) return 0;	//表已经满了
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
	返回的值代表了删除的完成情况
	1：成功
	-1：index位置越界 
	0: 表已经空了	
	*/
	int i; 
	if (PtrL->Last==-1) return 0;	//表已经为空
	else if (index<0||index>PtrL->Last) return -1;
	else {
		for (i=index; i<PtrL->Last--; i++) {
			PtrL->Data[i+1] = PtrL->Data[i];
		}
		return 1;
	}
}





