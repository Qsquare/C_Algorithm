#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


int main(void) {
	Queue Q = CreateQueue();
	EnQueue(3, Q);
	EnQueue(4, Q);
	EnQueue(1, Q);
	EnQueue(5, Q);
	while (!IsEmpty(Q)) {
		printf("DeQueue = %d\n", DeQueue(Q));
	}
	return 0;
}
