#include <stdio.h>
#include <pthread.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdlib.h>

#include "foo_helper.h"

void* func (void *arg)
{
	struct foo* foop = get_foo();
	printf("%s, foo pointer %p\n", __func__, foop);
	return NULL;
}

int main()
{
	uint64_t fooval = get_fooval();
	pthread_t *p = malloc(sizeof(pthread_t));
	pthread_create(p, NULL, func, NULL);
	pthread_join(*p, NULL);
	printf("%s, foo value %" PRIx64 "\n", __func__, fooval);
	return 0;
}
