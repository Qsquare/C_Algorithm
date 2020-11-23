#include <stdio.h>
#include <malloc.h>
#include "BinTree.h"
#include "Stack.h"


BinTree CreateBinTree(void) {
	int N;	//节点数
	scanf("%d", &N);
	int left, right;	//左右节点
	int flag[N];
	struct TreeNode* Temp = (struct TreeNode*)malloc(sizeof(struct TreeNode)*N);
	int i;
	BinTree Root;
	for (i=0; i<N; i++) flag[i] = 1;
	for (i=0; i<N; i++) Temp[i].visited = 0;
	for (i=0; i<N; i++) {
		scanf("%d %d %d", &Temp[i].Data, &left, &right);
		//处理左子节点
		if (left==-1) {
			Temp[i].Left = NULL;
		} else {
			Temp[i].Left = &Temp[left];
			flag[left] = 0; 
		}
		//处理右子节点
		if (right==-1) {
			Temp[i].Right = NULL;
		} else {
			Temp[i].Right = &Temp[right];
			flag[right] = 0;
		}
	}
	//找出根节点 
	for (i=0; i<N&&!flag[i]; i++); 	//这里默认只有一个根节点
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
		if (BT) {//第一次访问 
			BT->visited++;
			Push(BT, S); 
			BT = BT->Left;
		} else {
		 	BT = Pop(S);
		 	if (BT->visited==1) {//第二次访问 
		 		BT->visited++;
				Push(BT, S);
				BT = BT->Right; 
			 }
			else {//第三次访问，打印
				printf("post order = %d\n", BT->Data);
				BT = NULL; 
			}
		}
	}
} 
