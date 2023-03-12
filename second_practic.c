#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main(void)
{
	double x, y, z;
	scanf("%lf %lf %lf", &x, &y, &z);
	float a = log(pow(y, -sqrt(fabs(x)))) * (x - (y / 2)) + pow(sin(atan(z)), 2);
	printf("a = %lf", a);

}