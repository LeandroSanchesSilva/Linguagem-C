#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    
    int num,cont,par;
    par=0;

    setlocale(LC_ALL,"portuguese");

    printf("\n Digite um n√∫mero n inteiro positivo: \n");
    scanf("%d",&num);
    
    // Este programa foi o primeiro exercicio realizado;
    // O programa imprimir· os n primeiros naturais pares;
    // Zero ser· considerado um n˙mero natural par;
    
    
        if(num == 0){
            printf("\n O primeiro n√∫mero natural par √© o %d \n",num);
        }else{
            printf("\n Os %d primeiros n√∫meros naturais s√£o:",num);
            for(cont=0; cont<num; cont++){
                printf("\n %d",par);
                par = par + 2;
            }
        }
return 0;
}
