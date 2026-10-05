// wcp to print a tribonaci series //
#include <stdio.h>

int main()
{
    int n, i;
    int a = 0, b = 1, c = 1, next;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Tribonacci Series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", a);
        next = a + b + c;
        a = b;
        b = c;
        c = next;
    }

    return 0;
}

