#include <stdio.h>
#include <malloc.h>
#include "List.h"


int Length(List PtrL) {
	List temp = PtrL;
	int cnt = 0;
	while (temp) {
		cnt ++;
		temp = temp->Next;
	}
	return cnt;
}


List FindKth(int K, List PtrL) {
	int cnt = 0;
	List temp = PtrL;
	while (temp&&cnt<K) {
		cnt ++;
		temp = temp->Next;
	}
	if (cnt<K) {
		return NULL;
	} else {
		return temp;
	}
}


List Find(ElementListType item, List PtrL) {
	List temp = PtrL;
	while (temp&&temp->Data!=item) {
		temp = temp->Next;
	}
	return temp;
}


List Insert(ElementListType item, int index, List PtrL) {
	List p,s;
	if (index==0) {	//第一个位置 
		s = (List)malloc(sizeof(struct LNode));
		s->Data = item;
		s->Next = PtrL;
		return s;
	}
	p = FindKth(index-1, PtrL);
	if (p==NULL) return NULL;	//找不到K-1的位置 
	else {
		s = (List)malloc(sizeof(struct LNode));
		s->Data = item;
		s->Next = p->Next;
		p->Next = s;
		return PtrL;
	}
}


List Delete(int index, List PtrL) {
	List p, s;
	if (index==0) {	//删除的是第一个 
		s = PtrL;
		if (!PtrL) {
			return NULL;
		} else {
			PtrL = PtrL->Next;
		}
		free(s);
		return PtrL;
	} 
	p = FindKth(index-1, PtrL); 
	if (p==NULL) return NULL;	//没有第K-1个元素 
	else if (p->Next==NULL) return NULL; //没有第K个元素
	else {
		s = p->Next;
		p->Next = s->Next;
		free(s);
		return PtrL;
	} 	 
} 
