#include <stdio.h>

int main(){    
    int c, i, nwhite, nother, ndigit[10];
    nwhite = nother = 0;
    for(i=0; i<10; i++){
        ndigit[i]=0;
        printf("%d\n", ndigit[i]);
    }

    while (c=getchar()!=EOF)
    {
        switch (c)
        {
        case '0': case '1': case '2': case '3': case '4': case '5':
        case '6': case '7': case '8': case '9':
        ndigit[c-'0']++;
            break;
        case ' ' :
        case '\t':
        case '\n':
        nwhite++;
            break;       
        default:
        nother++;
            break;
        }
    }

    printf("Digits = ");

    for(i=0; i<10; i++){
        printf(" %d", ndigit[i]);
    } 

    printf(", white cpase = %d, other = %d\n", nwhite, nother);    

    return 0;
}