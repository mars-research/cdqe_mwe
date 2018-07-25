#include <stdio.h>
#include <pthread.h>
#include <stdint.h>
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
	pthread_t *p = malloc(sizeof(pthread_t));
	pthread_create(p, NULL, func, NULL);
	pthread_join(*p, NULL);
	return 0;
}
