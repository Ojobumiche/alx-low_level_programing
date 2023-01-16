#include <stdio.h>

/**
 * main - a program that prints the name of the file it was
 * compiled from, followed by a new line.
 *
 * Return: EXIT_SUCCESS.
 */

int main(_attribute_((unused)))
{
	printf("%s\n", _FILE_);
		return (0);
}
