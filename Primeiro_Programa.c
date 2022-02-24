#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int num,cont,par;
    par=0;

    setlocale(LC_ALL,"portuguese");

    printf("\n Digite um número n inteiro positivo: \n");
    scanf("%d",&num);
    
    // O programa imprimirá os n primeiros naturais pares;
    // Zero será considerado um número natural par;
    
    
        if(num == 0){
            printf("\n O primeiro número natural par é o %d \n",num);
        }else{
            printf("\n Os %d primeiros números naturais são:",num);
            for(cont=0; cont<num; cont++){
                printf("\n %d",par);
                par = par + 2;
            }
        }
return 0;
}
