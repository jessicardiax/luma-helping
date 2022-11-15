//Escreva uma função que peça dois números inteiros ao usuário e exibe o valor soma seguido pelo maior deles.
#include <stdio.h>
int main (){
    soma_MaiorEle();
 return 0;   
}

void soma_MaiorEle(int n1, int n2, int maior){
    printf("digite um numero:\n");
    scanf("%d",&n1);
    printf("digite outro numero:\n");
    scanf("%d",&n2);
    
    int valor=n1+n2;
    
    printf("Soma dos valores: %d\n", valor);
    
    if(n2>n1){
        printf("O maior é %d\n", n2);
    }
    else{
        printf("O maior é %d\n", n1);
    }
}
