#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a0,a1,a2,b0,b1,b2;
    int alice = 0, bob = 0,i = 0;
    
    scanf("%d %d %d",&a0,&a1,&a2);
    scanf("%d %d %d",&b0,&b1,&b2);
    
    int a[3] = {a0, a1, a2};
    int b[3] = {b0, b1, b2};
    
    while (i < 3){
        if (a[i] > b[i]){
                alice = alice + 1;}
        else if (a[i] < b[i]){
                bob = bob + 1;}
        else{
               alice = alice;
                bob = bob;
            }
        i += 1;
    }
    
    printf("%i %i", alice, bob);
    
    return 0;
}
