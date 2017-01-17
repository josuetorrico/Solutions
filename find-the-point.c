#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 
    //To solve this problem, I am going to use the midpoint formula to obtain the point r
    
    //We need a variable n for the # of points
    int n;
    //now some variables for the input
    int px,py,qx,qy,rx,ry;
    
    //let's take the inputs from STDIN
    scanf("%i",&n);
    
    for (int i;i < n;i++){
        scanf("%i %i %i %i",&px,&py,&qx,&qy);
        rx = (2 * qx) - px;
        ry = (2 * qy) - py;
        printf("%i %i\n",rx,ry);
    }

    
    return 0;
}
