#include <stdio.h>
#include "Stack.h"


int main(void) {
	Stack S = CreateStack(10);
	Push(1, S);
	Push(3, S);
	Push(4, S);
	Push(6, S);
	while (!IsEmpty(S)) {
		printf("pop=%d\n", Pop(S));
	}
}
