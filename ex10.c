#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int n = 9;
    int mediana;
    printf("Altura do triangulo: ");
    scanf("%d", &n);
    if(n % 2 == 0){
        mediana =  n / 2;
    }else{
        mediana = n / 2 + 1;
    }

    for(int i = 1; i <= mediana; i++){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        
        printf("\n");
    }
    
    if(n % 2 != 0){
        mediana = mediana - 1;
    }

    for(int i = mediana; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("%d", i);
        }
        
        printf("\n");
    }

    return 0;
}
