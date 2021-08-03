#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
INPUT
8
11


OUTPUT
eight
nine
even
odd
*/

int main() 
{
    int a, b, logic;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    static const char *strings[] = {"one","two","three","four","five","six","seven","eight","nine","even", "odd"};
    
    for (int i = a; i<= b; i++) {
        logic = (i <= 9 ? i - 1 : 9 + i % 2);
        printf("%s\n", strings[logic]);
    }
    
    return 0;
}