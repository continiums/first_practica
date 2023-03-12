#include <stdio.h>

int main(void)
{
	double x, y;
m1:
	printf(" x >");
	scanf("%lf", &x);
	printf(" y >");
	scanf("%lf", &y);
	if (((x >= -2) && (x <= 2) && (y <= 1) && (y >= -1)) && (((y <= -0.5 * x) && (y <= 0.5 * x + 1) && (y >= 0.5 * x) && (y >= -0.5 * x - 1))
		|| ((y >= 0.5 * x) && (y >= 1 - 0.5 * x))
		|| ((y >= 0.5 * x + 1) && (y >= -0.5 * x))
		|| ((y <= 0.5 * x) && (y <= -0.5 * x + 1) && (y >= -0.5 * x) && (y >= 0.5 * x - 1))
		|| ((y <= 0.5 * x) && (y <= -0.5 * x))
		|| ((y <= 0.5 * x - 1) && (y <= -0.5 * x))))
		printf("point in the area\n");
	else printf("point not in the area\n");
	goto m1;

}