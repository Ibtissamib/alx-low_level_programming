#include "main.h"
/**
 * _islower- checks for lowercase character
 * @c: character
 *
 * Retun: 1 if c is lowecase, 0 othewise
 */
int _islower(int c)
{
	char al;

	al = 'a';
       while ((c != al)&&(al <= 'z'))
	       al++;
       if (c == al) return (1);
       else return (0);
}
