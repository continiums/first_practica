#include <stdio.h>
int main()
{
	unsigned short d;
	unsigned short r;
	unsigned short a;
	unsigned short y = 57856;
	unsigned short temp;
	printf(" \ninput direction of delivery 0-register/ 1-memoy(0-1)"); scanf_s("%hu", &d);
	printf("\ninput 1-st operand - register (0-15)"); scanf_s("%hu", &r);
	printf(" \ninput register adress of 2-nd operand (0-15)"); scanf_s("%hu", &a);
	temp = d & 1;
	y = y | (temp << 8);
	temp = r & 31;
	y = y | (temp << 4);
	temp = a & 31;
	y = y | temp;
	printf("\n packed value is decimal = %hu hexadecimal = %x", y, y);
}