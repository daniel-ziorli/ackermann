#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
function is a copy of ackermanns functio. Has 3 if statments and 
acts as ackemanns function would. Takes 2 ints and returns ackermanns number
*/
int A(int m, int n){
    if(m == 0 && n >= 0)
        return (n + 1);
    else if(m > 0 && n == 0){
        return A(m - 1, 1);
    }
    else if (m > 0 && n > 0){
        return A(m - 1, A(m, n - 1));
    }

    return 0;
}


