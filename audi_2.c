/*вариант 4*/

/*Дан двумерный массив, размером (n⋅на⋅m). Найти минимальный элемент в каждой строке матрицы.
Затем все отрицательные элементы каждой строки заменить на соответствующий найденный
минимальный элемент, в случае отсутствия в строке отрицательных элементов данную строку
заменить строкой, содержащую максимальный элемент из найденных минимальных*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Russian");
    int m, n, i, j, f, imax, in;
a1: printf("\nвведите количество строк\n");
    scanf("%d", &m);
    printf("введите количество столбцов\n");
    scanf("%d", &n);
    if (m < 1 || n < 1)
    {
        printf("ошибка ввода размера массива\n");
        goto a1;
    }
    int a[100][100];
    int min[100];
    int line_of_min[100];
    for (i = 0; i < n; i++) line_of_min[i] = 0;
    for (i = 0; i < m; i++) min[i] = 0;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++) a[i][j] = 0;
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("исходный массив");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        min[i] = a[i][0];
        for (j = 0; j < n; j++)
        {
            if (min[i] > a[i][j]) min[i] = a[i][j];
        }
    }
    printf("минимум каждой строки\n");
    for (i = 0; i < m; i++) printf("%5d", min[i]);
    imax = min[0];
    in = 0;
    for (i = 0; i < m; i++)
    {
        if (imax < min[i])
        {
            imax = min[i];
            in = i;
        }
    }
    printf("\n");
    for (i = 0; i < n; i++) line_of_min[i] = a[in][i];
    printf("строка с максимальным из минимальных массива:\n");
    for (i = 0; i < n; i++) printf("%5d", line_of_min[i]);

    for (i = 0; i < m; i++)
    {
        f = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
            {
                f += 1;
                a[i][j] = min[i];
            }
        }
        if (f == 0)
        {
            for (j = 0; j < n; j++) a[i][j] = line_of_min[j];
        }
    }
    printf("\n новый массив");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
    }
    goto a1;
}