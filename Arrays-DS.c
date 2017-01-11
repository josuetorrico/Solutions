#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int rev = 0;
    rev = n - 1;
    
    int *arr = malloc(sizeof(int) * n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d", &arr[arr_i]);;
    }
    
    for(int arr_i = 0; arr_i < n; arr_i++){
        printf("%i ", arr[rev - arr_i]);
    }
    
    return 0;
}
