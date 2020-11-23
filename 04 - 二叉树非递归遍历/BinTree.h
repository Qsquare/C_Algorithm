#ifndef _BINTREE_H_
#define _BINTREE_H_


typedef int ElementTreeType;
typedef struct TreeNode *PtrToTreeNode;
struct TreeNode {
	ElementTreeType Data;
	struct TreeNode *Left;
	struct TreeNode *Right;
	int visited;	//这里主要是后序遍历需要用到 
};
typedef PtrToTreeNode BinTree;

BinTree CreateBinTree(void);
void PreOrderTraversal(BinTree BT);
void InOrderTraversal(BinTree BT);
void PostOrderTraversal(BinTree BT);

#endif 
