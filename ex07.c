#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n;
    printf("Altura do triangulo: ");
    scanf("%d", &n);

    int x = 1;

    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            printf("%d ", j);
            x++;
        }
        printf("\n");
    }

    return 0;
}
