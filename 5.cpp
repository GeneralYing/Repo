#include<stdio.h>

int f(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if(n==2)
	{
		return 2;
	}
	else
	{
		return f(n - 1) + f(n - 2);

	}
}

int main()
{
	int n;
	printf("Please enter n:\n");
	scanf_s("%d", &n);
	printf("%d", f(n));
	return 0;
}