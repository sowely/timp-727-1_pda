#include <stdio.h>

int part (int * arr, int down, int top)
{
    int p = arr[top], k = (down - 1);

    for (int i = down; i <= top - 1; i++) {
        if (arr[i] <= p)
        {
            k++;
            int t = arr[k];
            arr[k] = arr[i];
            arr[i] = t;
        }
    }
    
    int t = arr[k + 1];
    arr[k + 1] = arr[top];
    arr[top] = t;
    return (k + 1);
}

int quick_sort(int *arr, int down, int top)
{
    if (down < top)
    {
        int t = part(arr, down, top);
        quick_sort(arr, down, t - 1);
        quick_sort(arr, t + 1, top);
    }
    return 0;
}

int sorting_function(int *arr, int arr_len){
    
    quick_sort(arr, 0, arr_len-1);

    printf("%d", arr[0]);
    for (int i = 1; i < arr_len; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
       
	return 0;
}

int main (){
    int n = 0;
    int a[1000];

    // n = 5;
    // a[0] = 5;
    // a[1] = 3;
    // a[2] = 7;
    // a[3] = 1;
    // a[4] = 4;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    sorting_function(a, n);
    
    return 0;
}

