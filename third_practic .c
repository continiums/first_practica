#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main(void)
{
	double x, y, z;
	int c;
	float a;
	scanf("%lf %lf %lf", &x, &y, &z);
	scanf("%d", &c);

	switch (c)
	{
	case 21: case 22:
		a = log(pow(y, -sqrt(fabs(x)))) * (x - (y / 2)) + pow(sin(atan(z)), 2);
		printf("a = %lf", a); break;
	case 33: case 44: return 0;
	case 5: printf("finish"); return 2004;

	default:  a = log(pow(y, -sqrt(fabs(x)))) * (x - (y / 2)) + pow(sin(atan(z)), 2);
		printf("a = %lf", a); break;
	}


}