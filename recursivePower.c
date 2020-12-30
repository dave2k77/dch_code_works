#include<stdio.h>
#include<stdlib.h>

int powerFunction(int x, int y){
    if (y < 1){
        return 1; // set the base case for the recursive process; the terminating condition.
    } else {
        return x * powerFunction(x, y-1); // invoke the recursive call.
    }
}

int main(){
    int p = powerFunction(5, 5);
    printf("%d\n", p);
    return 0;
}