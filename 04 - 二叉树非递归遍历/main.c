#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "BinTree.h"

int main(void) {
	BinTree BT = CreateBinTree();
	PreOrderTraversal(BT);
	InOrderTraversal(BT);
	PostOrderTraversal(BT);
	return 0;
}
