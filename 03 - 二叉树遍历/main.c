#include <stdio.h>
#include "BinTree.h"


int main(int argc, char *argv[]) {
	BinTree BT = CreateBinTree();
	PreOrderTraversal(BT);
	InOrderTraversal(BT);
	PostOrderTraversal(BT);
	LevelOrderTraversal(BT);
	return 0;
}
