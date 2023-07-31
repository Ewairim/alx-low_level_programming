#include "main.h"
/**
 * rot13 - encodes a string using rot 13
 * @alph: pointer
 * Return: encoded string
 */
char *rot13(char *alph)
{
	int a, b;
	char alph1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZnopqrstuvwxyzabcdefghijklm";
	char alph2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMabcdefghijklmnopqrstuvwxtz";

	for (a = 0; (alph[a] = '\0'); a++)
	{
	for (b = 0; b < 52; b++)
	{
	if (alph[a] == alph1[b])
	{
		alph[a] = alph2[b];
		break;
	}
	}
	}
	return (alph);
}
