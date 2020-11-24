#ifndef _BST_H_
#define _BST_H_	

typedef int ElementTreeType;
typedef struct TreeNode *PtrToTreeNode;
struct TreeNode {
	ElementTreeType Data;
	struct TreeNode *Left;
	struct TreeNode *Right;
};
typedef PtrToTreeNode Position;
typedef PtrToTreeNode BinTree;

Position Find(ElementTreeType X, BinTree BST);
Position IterFind(ElementTreeType X, BinTree BST);
Position FindMin(BinTree BST);
Position IterFindMin(BinTree BST);
Position FindMax(BinTree BST);
Position IterFindMax(BinTree BST);

BinTree Insert(ElementTreeType X, BinTree BST);
BinTree Delete(ElementTreeType X, BinTree BST);

#endif
