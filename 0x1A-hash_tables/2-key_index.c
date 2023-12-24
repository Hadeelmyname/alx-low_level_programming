#include "hash_tables.h"

/**
 * key_index - get the index at which a key should be
 * syored in array of a hash table
 *
 * @key: the keyy to get the index
 * @size: the size of the array
 * Return: the index of the key
 * Description: uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
