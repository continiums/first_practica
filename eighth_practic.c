#include <iostream>
#include <iostream>
#include <stdio.h>
#define z 5
#define q 20
#define вц "%d"
#define прибавить_к_К k++
#define ar 50
#define input1(x1,x2) scanf_s("%d", &x2);
#define if_razmer if ((f < z) or (f > q))
#define for_i(f)  for (i = 0; i < f; i++) 
#define input2(x1,x2) scanf_s("%d", &A[i]);
#define	if_vvod_mass if ((A[i] < -ar) or (A[i] > ar))
#define for_uslovie1 for (i = 0; i < f - 1; i++)
#define	if_uslovie1 if ((A[i] < 0 && A[i + 1] >= 0) || (A[i] >= 0 && A[i + 1] < 0))
#define вывод(x1) printf_s(x1)
#define ИДТИ_НА goto
#define выводчисла(x1) printf_s("%d",x1)
#define выводи printf("enter the element #%d ", i)
int main() {
	int i, f, k = 0, A[q];
a1:	вывод("enter the count of elements");
	input1(вц, f);
	if_razmer{
		вывод("Error\n");
		ИДТИ_НА a1;
	}
		for_i(f) {
	a2: выводи;
		input2(вц, A[i]);
		if_vvod_mass{
			вывод("\nError");
			ИДТИ_НА a2;
		}
	}
	for_uslovie1{
		if_uslovie1 {
			прибавить_к_К;
		}
	}
	вывод("k");

}