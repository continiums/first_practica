#include <stdio.h>
int main()
{
	int k, i;
	int e = 0;
	int a[20];
a1:printf("\nenter count of elements");
	scanf_s("%d", &k);
	if (k < 5 || k>20)
	{
		printf("error");
		goto a1;
	}
	for (i = 0; i < k; i++)
	{
	a3: printf(" \nenter the element a[%d]", i);
		scanf_s("%d", &a[i]);
		if (a[i] < -50 || a[i] > 50)
		{
			printf("\nerror");
			goto a3;
		}

	}
	for (int n = 0; n < k - 1; n++)
	{
		if (a[n] * a[n + 1] <= 0)
		{
			e = e + 1;
		}
	}
	printf("%d", e);
}