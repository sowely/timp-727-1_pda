#include <stdio.h>

int heap_sort(int * arr, int index, int arr_len){
    int p = 10000;
    if ((arr[index * 2 + 1] <= arr[index * 2 + 2]) && 
    (arr[index * 2 + 1] <= arr[index])){
        p = index * 2 + 1;
        if (p < arr_len){
            int t = arr[index];
            arr[index] = arr[index * 2 + 1];
            arr[index * 2 + 1] = t;
        }
    } else if (arr[index * 2 + 2] <= arr[index]){
        p = index * 2 + 2;
        
        if (p < arr_len){
            int t = arr[index];
            arr[index] = arr[index * 2 + 2];
            arr[index * 2 + 2] = t;
        }
        
    }
    
    if ((p * 2 + 1) < arr_len || (p * 2 + 2 ) < arr_len){
        heap_sort(arr, p, arr_len);
    }
    
    return 0;
}

int sorting_function(int *arr, int arr_len){
    

    for (int i = (arr_len/2-1); i >= 0; i--){
        heap_sort(arr, i, arr_len);
        
        //printf("%d", arr[0]);
        //for (int r = 1; r < arr_len; r++){
        //    printf(" %d", arr[r]);
        //}
        //printf("\n");
    }
    
    for (int i = arr_len-1; i >= 0; i--){
        // swap
        int t = arr[i];
        arr[i] = arr[0];
        arr[0] = t;
        
        
        heap_sort(arr, 0, i);
        
    }
    
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
    int b[1000];
    
    int max = 9001;

    for (int i = 0; i < 1000; i++){
        a[i] = max;
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &b[i]);
    }
    
    int k = 0;
    a[0] = b[k];
    for (int i = 0; i <= (n / 2 - 1); i++){
        k++;
        if (k >= n){
            b[k] = max;
        }
        a[2 * i + 1] = b[k];
        k++;
        
        if (k >= n){
            b[k] = max;
        }
        a[2 * i + 2] = b[k];
    }
    
    sorting_function(a, n);
    
    return 0;
}

