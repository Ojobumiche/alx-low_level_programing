[06:28, 10/12/2022] Awolabi_alx: #include <stdio.h>

/**
 * Description: main - A program that prints all possible combinations digits
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int num1 = 48;
int num2 = 44;
while (num1 <= 57)
{
putchar(num1);
if (num1 != 57)
{
putchar(num2);
putchar(32);
}
num1 += 1;
}
putchar('\n');
return (0);
}
[06:40, 10/12/2022] Awolabi_alx: #include <stdio.h>

/**
 * Description: main - program that prints all possible different combs
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */

int main(void)
{
int num1 = 48;
int num2;
int com = 44;
while (num1 <= 57)
{
num2 = num1 + 1;
while (num2 <= 57)
{
putchar(num1);
putchar(num2);
if (num1 != 56 || num2 != 57)
{
putchar(com);
putchar(32);
}
num2 += 1;
}
num1 += 1;
}
putchar('\n');
return (0);
}
