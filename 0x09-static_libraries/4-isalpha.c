#include "main.h"
/**
 * _isalpha - this function checks for alphabets
 *
 * @c:  the alpabet being checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));

}
