#include <stdio.h>
#include "List.h"


int main(void) {
	int i;
	List PtrL = CreateList(3);
	printf("find 3 before insert data = %d\n", Find(3, PtrL));
	Insert(3, 0, PtrL);
	Insert(1, 0, PtrL);
	Insert(5, 0, PtrL);
	printf("find 3 after insert data = %d\n", Find(3, PtrL));
	Delete(2, PtrL);
	printf("find 3 after delete data = %d\n", Find(3, PtrL));
	return 0;
}

