#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ARRAY_MAX 100

/* 
input
6
16 13 7 2 1 12 

output
51
*/

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // initialize them, otherwise you gonna get garbage   
    int n = 0, a = 0, sum = 0;
    
    scanf("%d",&n);
    
    // dinamically alocate the array with the size of &n
    int *arr = (int*)malloc(n * sizeof(int));
    
    // while a(number inserted) is less than n(array size)
    // read from STDIN and append a(number inserted) into array
    // then gets its value and sums with the previous number
    // and then increment the array size
    while (a < n) {
        scanf("%d", &arr[a]);
        sum += arr[a];
        a++;
    }
    
    // dealocate array memory
    free(arr);
    
    // prints the sum
    printf("%d", sum);
    
    return 0;
}