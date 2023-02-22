#include <stdio.h>

int main(void ) {
    int i;
    int j;
    for (i = 0; i < 6; ++i) {
        printf("%d", i);
        for (j = 6; j > 0; --j) {
            if(j > 1)
                printf(" ");
                else
                printf("*");
        }
        printf("\n");
    }
 return 0;
}