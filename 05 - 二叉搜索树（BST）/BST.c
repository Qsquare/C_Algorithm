#include <stdio.h>
#include <malloc.h>
#include "BST.h"

Position Find(ElementTreeType X, BinTree BST) {
	if (!BST) return NULL;
	if (BST->Data<X) {
		return Find(X, BST->Right);
	} else if (BST->Data>X) {
		return Find(X, BST->Left);
	} else {
		return BST;
	}
}

Position IterFind(ElementTreeType X, BinTree BST) {
	while (BST) {
		if (X<BST->Data) BST = BST->Left;
		else if (X>BST->Data) BST = BST->Right;
		else return BST;
	} 
	return NULL;
}

Position FindMin(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Left) return BST;
	else return FindMin(BST->Left);
}

Position IterFindMin(BinTree BST) {
	if (BST) {
		while (BST->Left) BST = BST->Left;
	}
	return BST;
}

Position FindMax(BinTree BST) {
	if (!BST) return NULL;
	else if (!BST->Right) return BST;
	else return FindMax(BST->Right);
}

Position IterFindMax(BinTree BST) {
	if (BST) {
		while (BST->Right) BST = BST->Right;
	}
	return BST;
}

BinTree Insert(ElementTreeType X, BinTree BST) {
	if (!BST) {
		BST = (BinTree)malloc(sizeof(struct TreeNode));
		BST->Left = NULL;
		BST->Right = NULL;
		BST->Data = X;
	} else {
		if (BST->Data<X) {
			BST->Right = Insert(X, BST->Right);
		} else {
			BST->Left = Insert(X, BST->Left);
		}
	}
	return BST;
}


BinTree Delete(ElementTreeType X, BinTree BST) {
	Position Temp;
	if (!BST) return NULL;
	else if (X>BST->Data) BST->Right = Delete(X, BST->Right);
	else if (X<BST->Data) BST->Left = Delete(X, BST->Left);
	else {
		if (BST->Left&&BST->Right) {//有两个子节点 
			Temp = FindMin(BST->Right); //从右子节点中选择出最小的那个，替换之后再删除即可 
			BST->Data = Temp->Data;
			BST->Right = Delete(BST->Data, BST->Right);
		} else {//有一个子节点 或者没有 
			Temp = BST;
			if (!BST->Left) BST = BST->Right;
			else if (!BST->Right) BST = BST->Left;
			free(Temp);
		}
	}
	return BST; 
}
