#include <stdio.h>
#include <malloc.h>
#include "BinTree.h"
#include "Queue.h"	//层次遍历需要用到 


BinTree CreateBinTree(void) {
	int N;	//节点数
	scanf("%d", &N);
	struct TreeNode *Tmp = (struct TreeNode *)malloc(sizeof(struct TreeNode)*N);
	BinTree Root;
	int check[N];
	int left,right;	//左右节点
	int i;
	for (i=0; i<N; i++) check[i] = 1;
	for (i=0; i<N; i++) {
		scanf("%d %d %d", &Tmp[i].Data, &left, &right);
		//处理左节点
		if (left==-1) {
			Tmp[i].Left = NULL;
		} else {
			Tmp[i].Left = &Tmp[left];
			check[i] = 0;
		}
		// 处理右节点
		if (right==-1) {
			Tmp[i].Right = NULL;
		} else {
			Tmp[i].Right = &Tmp[right];
			check[i] = 0;
		}
	} 
	//寻找出根节点
	for (i=0; i<N&&check[i]!=0; i++);
	Root = &Tmp[i];
	return Root; 
}


//前序遍历 
void PreOrderTraversal(BinTree BT) {
	if (BT) {
		printf("pre order = %d\n", BT->Data);
		PreOrderTraversal(BT->Left);
		PreOrderTraversal(BT->Right);
	} 
}


//中序遍历
void InOrderTraversal(BinTree BT) {
	if (BT) {
		InOrderTraversal(BT->Left);
		printf("in order = %d\n", BT->Data);
		InOrderTraversal(BT->Right);
	}
} 



//后序遍历
void PostOrderTraversal(BinTree BT) {
	if (BT) {
		PostOrderTraversal(BT->Left);
		PostOrderTraversal(BT->Right);
		printf("post order = %d\n", BT->Data);
	}
} 


//层次遍历 
void LevelOrderTraversal(BinTree BT) {
	if (!BT) return;
	Queue Q = CreateQueue();
	EnQueue(BT, Q);
	PtrToTreeNode temp;
	while (!IsEmpty(Q)) {
		temp = DeQueue(Q);
		printf("level order = %d\n", temp->Data);
		if (temp->Left) EnQueue(temp->Left, Q);
		if (temp->Right) EnQueue(temp->Right, Q);
	}
}
