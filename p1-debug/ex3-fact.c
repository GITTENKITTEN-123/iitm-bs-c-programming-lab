#include<stdio.h>
int fact(int n)
{
    int factorial = 1;
    for(; n > 0; n--)
    {
        factorial *= n;
    }
    return factorial;
}

int main()
{
    int n = fact(5);
    printf("%d", n);
    return 0;
}

