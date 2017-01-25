#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    float pos=0, neg=0, zer=0;
    float posfrac, negfrac, zerfrac;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
        scanf("%d",&arr[arr_i]);
        if (arr[arr_i] > 0)
        pos += 1;
        else if (arr[arr_i] < 0)
            neg += 1;
        else
            zer += 1;
    }
    
    posfrac = pos/n;
    negfrac = neg/n;
    zerfrac = zer/n;
    
    printf("%f\n%f\n%f", posfrac, negfrac, zerfrac);

    return 0;
}
