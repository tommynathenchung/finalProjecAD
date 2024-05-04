#include "minmax.h"
#include <stdlib.h>
#include <stdio.h>

struct min_max maxmin(void) {
	struct min_max r;
	//RAND_MAX;
	srand(time(NULL));
	r.min = rand() % 16-10; // 0-15 -10
	r.max = rand() % 31 + 15; //0-30 +15
	return r;
}