#include "main.h"

/**
 * main - the program that checks upper case letter 
 *
 * Return: Always  
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
