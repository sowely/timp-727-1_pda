#include <stdio.h>


int sorting_function(int *arr, int arr_len){
    
    int k = 0;
    double fakt = 1.2473309;
    
    double step = arr_len - 1;
    
//    printf("%d", arr[0]);
  //  for (int i = 1; i < arr_len; i++){
    //    printf(" %d", arr[i]);
   // }
    //printf("\n");
       
   	while (step >= 1)
	{
		for (int i = 0; i + step < arr_len; ++i)
		{
		    int t = i + step;
			if (arr[i] > arr[t])
			{
			    int d = arr[i];
			    arr[i] = arr[t];
			    arr[t] = d;
			    
				k++;
			}
		}
		step = step / fakt;
	}
	
	for (int i = 0; i < arr_len - 1; i++)
	{
		int swapped = 0;
		for (int j = 0; j < arr_len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
			    
			    int d = arr[j];
			    arr[j] = arr[j + 1];
			    arr[j + 1] = d;
			    
				swapped = 1;
				++k;
			}
		}

		if (swapped == 0){
		    break;
		}
	}
    
    printf("%d", arr[0]);
    for (int i = 1; i < arr_len; i++){
        printf(" %d", arr[i]);
    }
    printf("\n");
       
       
	return k;
}

int main (){
    int n = 0;
    int a[1000];
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
        sorting_function(a, n);
    
    return 0;
}
