#include <stdio.h>
#include <math.h>

int main() {

    

    float y, i;

    printf("x, sin(x)");

    for (i = 0.0; i <= 628.0; i++){
    printf(" %f  ",i/100.0);
    y=sin(i/100.0);
    printf(" %f \n", y);
  }

}