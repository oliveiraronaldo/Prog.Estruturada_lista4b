#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int n;
    printf("Altura do triangulo: ");
    scanf("%d", &n);

    int x = 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }

        for(int k = 1; k <= i; k++){
            if(x < 10){
                printf("%d ", x);
            }else{
                printf("%d ", x);
            }
            x++;
        }
        printf("\n");
    }

    return 0;
}
