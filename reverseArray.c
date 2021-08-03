#include <stdio.h>
#include <stdlib.h>

/* this is one of my favorites and yet one of the 
// worst ones to do at 2AM
//
// input
// 3 5 6 7
//
// output
// 7 6 5 3

// The complete algorithm for reverse an array is

vfor (i = 0; i < num / 2; i++) {
        temp = (int) *(arr + num - i - 1);
        *(arr + num - i - 1) = *(arr + i);
        *(arr + i) = temp;
    } 

but in this case we can get along with just 

vfor (i = 0; i < num; i++) {
        temp = (int) *(arr + num - i - 1);
        printf("%d ", temp);
    } 

*/

int main()
{
    int num, *arr, i, temp;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    
    
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    
    /* Write the logic to reverse the array. */
    for (i = 0; i < num; i++) {
        temp = (int) *(arr + num - i - 1);
        printf("%d ", temp);
    } 
          
    return 0;
}