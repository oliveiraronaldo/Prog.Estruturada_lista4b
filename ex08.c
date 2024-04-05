#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n = 5;
    // printf("Altura do triangulo: ");
    // scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }

        for(int k = 1; k <= i; k++){
            printf("*");
        }

        printf(" ");

        for(int k = 1; k <= i; k++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
