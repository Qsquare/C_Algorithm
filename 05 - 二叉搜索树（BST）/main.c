#include <stdio.h>
#include "BST.h"

int main(void) {
	int test[] = {1, 2, 6, 3, 4, 5};
	int i;
	BinTree BST = NULL;
	for (i=0; i<sizeof(test)/sizeof(test[0]); i++) BST = Insert(test[i], BST);
	printf("Find 3 = %d\n", Find(3, BST)->Data);
	printf("Iter Find 3 = %d\n", Find(3, BST)->Data);
	printf("Find Min = %d\n", FindMin(BST)->Data);
	printf("Iter Find min = %d\n", IterFindMin(BST)->Data);
	printf("Find Max = %d\n", FindMax(BST)->Data);
	printf("Iter Find Max = %d\n", IterFindMax(BST)->Data);
	
	BST = Delete(6, BST);
	printf("Find Max After Delete = %d\n", FindMax(BST)->Data);
	printf("Iter Find Max After Delete = %d\n", IterFindMax(BST)->Data);
	return 0;
}
