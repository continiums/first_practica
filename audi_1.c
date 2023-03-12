#include <stdio.h>
int main()
{
	int i = 0, min = 0, a[100], r = 0;
a1: printf("vvedite razmer massiva 2<r<30 ");
	scanf_s("%d", &r);
	if (r > 30 || r < 2) { printf("error"); goto a1; }
	for (i = 0; i < r; i++) { printf("vvedite chislo %d  ", i); scanf_s("%d", &a[i]); }
	for (i = 0; i < r; i++) { printf("%d ", a[i]); }
	min = a[0];
	printf("\n");
	for (i = 0; i < r; i++)
	{
		if (min > a[i]) { min = a[i]; }
	}
	if (a[0] == 0) { a[0] = min; }
	if (a[r] == 0) { a[r] = min; }
	for (i = 1; i < r - 1; i++)
	{
		if (a[i] == 0) { a[i] = a[i - 1] - a[i + 1]; } //из предыдущего вычитается последующий
	}
	for (i = 0; i < r; i++) { printf("%d ", a[i]); }
}