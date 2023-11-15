#include "shell.h"
/**
  * bfree - frees a pointer and NULL address
  * @ptr: address of pionter to be freed
  * Return: 1 if pointer is freed and 0 if viseverser
  */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (1);
}
