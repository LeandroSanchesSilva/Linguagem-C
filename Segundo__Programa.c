#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Protótipo da função

int fn(int x);

// Programa principal

int main (){

int n,resposta;

setlocale(LC_ALL,"portuguese");

printf("\n Digite o n-ésimo termo da sequência desejado: \n");
scanf("%d",&n);

resposta = fn(n);
printf("\n O valor de f(%d) da sequência será igual a %d", n,resposta);

return 0;
}

// Declaração da função

int fn(int x){
    if(x == 0){
        return 0;
    }else if(x == 1){
        return 1;
    }else{
        return 2 * (fn(x-1) + fn(x-2));
    }
}
