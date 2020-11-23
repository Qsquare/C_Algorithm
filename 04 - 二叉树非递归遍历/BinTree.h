#ifndef _BINTREE_H_
#define _BINTREE_H_


typedef int ElementTreeType;
typedef struct TreeNode *PtrToTreeNode;
struct TreeNode {
	ElementTreeType Data;
	struct TreeNode *Left;
	struct TreeNode *Right;
	int visited;	//������Ҫ�Ǻ��������Ҫ�õ� 
};
typedef PtrToTreeNode BinTree;

BinTree CreateBinTree(void);
void PreOrderTraversal(BinTree BT);
void InOrderTraversal(BinTree BT);
void PostOrderTraversal(BinTree BT);

#endif 
