#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int cnt1=0, cnt2=0;
    int n; 
    int blank, tag;
    scanf("%d",&n);
    

    for( int i = 0; i<n; i++){
        
        blank = (n-1)-i;
        tag = i+1; 
        
        while(cnt1 < blank)
        {
            printf(" ");
            cnt1++;
        }
        while( cnt2 < tag )
        {
            printf("#");
            cnt2++;
        }
        printf("\n");
        
        cnt1 = 0;
        cnt2 = 0;
    }
    return 0;
}

