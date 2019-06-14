#include <stdio.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a;
        scanf("%d", &a);
        if (a > 0)
            count++;
    }

    printf("%d\n", count);

    return 0;
}

