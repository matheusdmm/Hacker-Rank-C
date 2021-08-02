//
//  Basically print a square with the size of the biggest
//  Number and decrease as it goes like:
//
//  7 7 7 7 7 7 7 7 7 7 7 7 7 
//  7 6 6 6 6 6 6 6 6 6 6 6 7 
//  7 6 5 5 5 5 5 5 5 5 5 6 7 
//  7 6 5 4 4 4 4 4 4 4 5 6 7 
//  7 6 5 4 3 3 3 3 3 4 5 6 7 
//  7 6 5 4 3 2 2 2 3 4 5 6 7 
//  7 6 5 4 3 2 1 2 3 4 5 6 7 
//  7 6 5 4 3 2 2 2 3 4 5 6 7 
//  7 6 5 4 3 3 3 3 3 4 5 6 7 
//  7 6 5 4 4 4 4 4 4 4 5 6 7 
//  7 6 5 5 5 5 5 5 5 5 5 6 7 
//  7 6 6 6 6 6 6 6 6 6 6 6 7 
//  7 7 7 7 7 7 7 7 7 7 7 7 7 
//

#include <stdio.h>
#include <math.h>

int MAX(int a, int b) {
    if(a > b) return a;
    else return b;
}

void square(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            printf("%d ", MAX(abs(i - n), abs(j - n)) + 1);
        }
        printf("\n");
    } 
}

int main() 
{

    int a;
    scanf("%d", &a);
  	// Complete the code to print the pattern.
    square(a);
        
    return 0;
}
