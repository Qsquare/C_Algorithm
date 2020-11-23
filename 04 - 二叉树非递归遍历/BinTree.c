#include <stdio.h>
#include <malloc.h>
#include "BinTree.h"
#include "Stack.h"


BinTree CreateBinTree(void) {
	int N;	//�ڵ���
	scanf("%d", &N);
	int left, right;	//���ҽڵ�
	int flag[N];
	struct TreeNode* Temp = (struct TreeNode*)malloc(sizeof(struct TreeNode)*N);
	int i;
	BinTree Root;
	for (i=0; i<N; i++) flag[i] = 1;
	for (i=0; i<N; i++) Temp[i].visited = 0;
	for (i=0; i<N; i++) {
		scanf("%d %d %d", &Temp[i].Data, &left, &right);
		//�������ӽڵ�
		if (left==-1) {
			Temp[i].Left = NULL;
		} else {
			Temp[i].Left = &Temp[left];
			flag[left] = 0; 
		}
		//�������ӽڵ�
		if (right==-1) {
			Temp[i].Right = NULL;
		} else {
			Temp[i].Right = &Temp[right];
			flag[right] = 0;
		}
	}
	//�ҳ����ڵ� 
	for (i=0; i<N&&!flag[i]; i++); 	//����Ĭ��ֻ��һ�����ڵ�
	Root = &Temp[i];
	return Root; 
}


void PreOrderTraversal(BinTree BT) {
	Stack S = CreateStack();
	while (BT||!IsEmpty(S)) {
		while (BT) {
			printf("pre order = %d\n", BT->Data);
			Push(BT, S);
			BT = BT->Left;
		}
		BT = Pop(S);
		BT = BT->Right;
	}
}


void InOrderTraversal(BinTree BT) {
	Stack S = CreateStack();
	while (BT||!IsEmpty(S)) {
		while (BT) {
			Push(BT, S);
			BT = BT->Left;
		}
		BT = Pop(S);
		printf("in order = %d\n", BT->Data);
		BT = BT->Right;
	}
}


void PostOrderTraversal(BinTree BT) {
	Stack S = CreateStack();
	while (BT||!IsEmpty(S)) {
		if (BT) {//��һ�η��� 
			BT->visited++;
			Push(BT, S); 
			BT = BT->Left;
		} else {
		 	BT = Pop(S);
		 	if (BT->visited==1) {//�ڶ��η��� 
		 		BT->visited++;
				Push(BT, S);
				BT = BT->Right; 
			 }
			else {//�����η��ʣ���ӡ
				printf("post order = %d\n", BT->Data);
				BT = NULL; 
			}
		}
	}
} 
