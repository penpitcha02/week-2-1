#include <stdio.h>
int main() 
{
    int x, n = 2;
    scanf_s("%d", &x);
    while (x != 1) 
    {
        while (x % n == 0) 
        {
            printf("%d\n", n);
            x = x / n;
        }
        n++;
    }
    return 0;
}
