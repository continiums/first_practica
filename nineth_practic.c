#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<locale.h>
#include <Windows.h>

void print1(char name_1[20], char vid_1[3], int* psh_1, int* col_1) {
	printf("1. Введите: Наименование, производитель, кол-во сост. частей, цена ($)");
	scanf("%s %s %d %d", name_1, vid_1, psh_1, col_1);
}

void print2(char name_2[20], char vid_2[3], int* psh_2, int* col_2) {
	printf("2. Введите: Наименование, производитель, кол-во сост. частей, цена ($) >");
	scanf("%s %s %d %d", name_2, vid_2, psh_2, col_2);
}

void print3(char name_3[20], char vid_3[3], int* psh_3, int* col_3) {
	printf("3.  Введите: Наименование, производитель, кол-во сост. частей, цена ($) >");
	scanf("%s %s %d %d", name_3, vid_3, psh_3, col_3);
}

void print4(char x[6][150]) {
	for (int i = 0; i < 6; i++)
		printf("%s", x[i]);
}

void print5(const char* c1, char name[20], char vid[3], int psh, char col) {
	printf(c1, name, vid, psh, col);
}

int main(void) {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char name[3][20] = { 0 };
	char vid[3][3] = { 0 };
	int psh[3] = { 0 };
	int col[3] = { 0 };
	char c[6][150] = {
				"|---------------------------------------------------------------------------|\n",
				"| Офисные пакеты                                                            |\n",
				"|---------------------------------------------------------------------------|\n",
				"| Наименование  |Производитель| кол-во сост. частей |    цена ($)           |\n",
				"|---------------|-------------|---------------------|-----------------------|\n"
	};

	const char* c1 = "|%15s|%13s|   %5d             | %8d              |\n";


	char c2[6][150] = {
				"|---------------------------------------------------------------------------|\n",
				"| Примечание: Возможно бесплатно получить продукт StarOffice через интернет |\n",
				"|---------------------------------------------------------------------------|\n"
	"",
	"",
	"" };

	print1(name[0], vid[0], &psh[0], &col[0]);
	print2(name[1], vid[1], &psh[1], &col[1]);
	print3(name[2], vid[2], &psh[2], &col[2]);
	print4(c);


	for (int i = 0; i < 3; i++)
		print5(c1, name[i], vid[i], psh[i], col[i]);

	print4(c2);

}