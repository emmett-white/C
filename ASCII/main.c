#include <stdio.h>

int main() 
{
    int i, asc = 65;
    char alpha [27];
    
    for(i = 0; i < 26; ++i) {
        alpha[i] = asc;
        asc = (asc + 1);
    }
    
    alpha [i] = '\0';
    printf ("The alphabets are: %s\n", alpha);
    return 0;
}
