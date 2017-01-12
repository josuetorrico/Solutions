#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int len = 0;
    int rot = 0;
    int temp = 0;

    
    scanf("%i", &len);
//    printf("%i", len);
    scanf("%i", &rot);
//    printf("%i", rot);
    
    int *arr = malloc(sizeof(int)*len);  
    for (int i=0 ;i < len; i++){
        scanf("%i", &arr[i]);
    }
    //printf("%i\n", arr[len-1]);
    for (int ii=0; ii < rot; ii++){
        temp = arr[0];
        for (int j = 0;j < len-1;j++){
            arr[j] = arr[j+1];
        }
        arr[len-1] = temp;
    }
    //printf("%i\n", arr[0]);
    
    for (int i=0 ;i < len; i++){
        printf("%i ", arr[i]);
    }
    
    return 0;
}
