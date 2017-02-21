#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#pragma warning(disable:4996)

int gcd(int m, int n)
{
	if(n==0)
	{
		return m;
	}
	else {
		return gcd(n, m%n);
	}
}

int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	int temp;

	scanf("%d %d", &n, &m);

	int d = gcd(m, n);

	printf("%d %d = %d", n, m, d);

	return 0;
}
