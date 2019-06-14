#include <stdio.h>

int main()
{
    int n, mult = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        int a;
        scanf("%d", &a);
        mult = mult * (a - i);
    }

    printf("%d\n", mult);

    return 0;
}

