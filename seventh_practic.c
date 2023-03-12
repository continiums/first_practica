#include <iostream>
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], f[1000], l[1000], l2[1000];
    int i, n, n1, c = 0, k = 0, count = 0;
    gets_s(a, 1000);
    printf("%s\n", a);
    n = strlen(a);
    for (i = 0; i < 1000; i++) f[i] = 0;
    for (i = 0; i < 1000; i++) l[i] = 0;
    for (i = 0; i < 1000; i++) l2[i] = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == ' ' || a[i] == ',' || a[i] == '.')
        {
            c += 1;
        }
        else { goto a1; }
    }
a1: for (i = c; i < n; i++)
{
    if (a[i] != ' ' & a[i] != ',' & a[i] != '.')
    {
        f[i - c] = a[i];
    }
    else { goto a2; }
}
a2:  printf_s("first word=%s\n", f);
for (i = 0; i < n; i++)
{
    if (a[n - 1 - i] == ' ' || a[n - 1 - i] == ',' || a[n - 1 - i] == '.')
    {
        k += 1;
    }
    else { goto b1; }
}
b1: for (i = 0; i < n - k; i++)
{
    if ((a[n - k - i - 1] != ' ') & (a[n - k - i - 1] != ',') & (a[n - k - i - 1] != '.'))
    {
        l[count] = a[n - k - i - 1];
        count++;
    }
    else { goto b2; }
}
b2: n1 = strlen(l);
for (i = 0; i < n1; i++)
{
    l2[i] = l[n1 - 1 - i];
}
printf_s("last word=%s\n", l2);
}