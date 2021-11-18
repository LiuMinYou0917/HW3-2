#include <stdio.h>
#include <stdlib.h>

char recursive_factorial(char b);

void main(void)
{
	char a, c;
	printf("¿é¤J¤@­Ó¦r¥À\n");
	scanf_s("%c", &a);
	c = recursive_factorial(a);
	printf("%c", c);
	system("pause");

}

char recursive_factorial(char b)
{
	if (b >= 'A' && b <= 'Z')
	{
		b = b + 32;
		return b;
	}
	else if (b >= 'a' && b <= 'z')
	{
		b = b - 32;
		return b;
	}
}