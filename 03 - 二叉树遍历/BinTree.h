#ifndef _BINTREE_H_
#define _BINTREE_H_

typedef int ElementTreeType;

typedef struct TreeNode *PtrToTreeNode; 
struct TreeNode {
	ElementTreeType Data;
	struct TreeNode *Left;
	struct TreeNode *Right;
};
typedef PtrToTreeNode BinTree;

BinTree CreatBinTree(void);
void PreOrderTraversal(BinTree BT);
void InOrderTraversal(BinTree BT);
void PostOrderTraversal(BinTree BT);
void LevelOrderTraversal(BinTree BT);

#endif  
