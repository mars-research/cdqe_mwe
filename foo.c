#include "foo_helper.h"
#include <stdlib.h>
#include <stdio.h>

struct foo *foo_ptr;

struct foo *get_foo(void)
{
	foo_ptr = calloc(sizeof(struct foo), 1);	
	printf("%s, foop %p\n", __func__, foo_ptr);
	return foo_ptr;
}

