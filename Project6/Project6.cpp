#include<stdio.h>

int sum(int* p)
{
	int s = 0;
	for (int i=1; i <=5 ; i++)
	{
		s += p[i - 1];
	}
	return s;
}

int main()
{
	int a[] = { 1,2,3,4,5 };
	printf("数组如下：\n");
	for (int i = 1; i <= 5; i++)
	{
		printf("%d  ", a[i - 1]);

	}
	printf("和为：%d", sum(a));
	return 0;

}