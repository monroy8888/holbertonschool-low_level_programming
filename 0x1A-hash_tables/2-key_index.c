#include "hash_tables.h"
/**
 *key_index - generate hash code
 *@size: size.
 *@key: key hash table
 *Return: index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int  hash_code;

	hash_code = hash_djb2(key);

	return ((hash_code) % size);
}
