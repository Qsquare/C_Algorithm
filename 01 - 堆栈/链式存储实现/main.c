#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main(void) {
	Stack S = CreateStack();
	Push(1, S);
	Push(3, S);
	Push(4, S);
	Push(2, S);
	while (!IsEmpty(S)) {
		printf("pop = %d\n", Pop(S));
	}
	return 0;
}
