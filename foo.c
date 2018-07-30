#include "foo_helper.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

struct foo *foo_ptr;

struct foo *get_foo(void)
{
	foo_ptr = calloc(sizeof(struct foo), 1);	
	printf("%s, foop %p\n", __func__, foo_ptr);
	return foo_ptr;
}

uint64_t get_fooval(void)
{
	uint64_t fooval = 0xbeefdeadbeef;
	printf("%s, fooval %" PRIx64 "\n", __func__, fooval);
	return fooval;
}
