#include "main.h"
/**
 * _isupper- Checks for uppercase character.
 * @c: Character to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _isupper(int c)
{
	char it = 'A';
	int find = 0;

	while (it <= 'Z')
	{
		if (it == c)
		{
			find = 1;
			break;
		}
		else
			it++;
	}
	return (find);
}



