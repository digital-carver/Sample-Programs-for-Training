#include<stdio.h>

int main()
{
int i = 100;
printf("%d", fact(i));
}

int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n-1);
	}
	else
	{
		return 1;
	}
}
