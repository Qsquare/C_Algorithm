#include <stdio.h>
#include "List.h"


int main(void) {
	List p = NULL;
	printf("length before insert = %d\n", Length(p));
	p = Insert(3, 0, p);
	p = Insert(4, 0, p);
	printf("length after insert = %d\n", Length(p));
	printf("find 3 = %d", Find(3, p)->Data);
	return 0;
}
