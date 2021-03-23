#include <stdio.h>
#include <stdlib.h>

int exponencial(int x, int y){
    if(y==0){
        return 1;
    }else{
        return x * exponencial(x, y-1);
    }

}

int main(){

    int x, y, res;
    printf("Digite a Base:");
    scanf("%d", &x);

    printf("Digite o Expoente: ");
    scanf("%d", &y);
    res = exponencial(x, y);
    printf("rresultado: %d", res);
    return 0;
}
