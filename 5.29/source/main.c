#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n;
	printf("¿é¤J¨â¼Æ¡G");
	scanf_s("%d %d", &m, &n);
	printf("Lcm¡G%d\n", lcm(m, n));
	return 0;
}

int gcd(int m, int n)
{
	while (n != 0)
	{
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int lcm(int m, int n)
{
	return m * n / gcd(m, n);
}