#include <stdio.h>

int main(){
    int i = 1;

    /*
       While - Enquanto a condição for verdadeira, ou seja, 
       enquanto a variavel i for menor ou = a 5 será executado o bloco de codigo do while.
       Do momento que a condição não for mais verdaderia, ou seja, ao testar a condição e o valor da variavel i passar do limite estabelecido na condicção
       o bloco de codigo do While não será mais executado e sairá do loop.
    */

    while (i<=5)
    {
        printf("%d\n", i);
        i++; // A variavel i será incrementada e assim não haverá o loop infinito
    }

    //printf ("\n\nSo para demonstrar, a variavel i terminou seu valor estabelecido na condiçao do While: valor %d\n\n");  


    return 0;
}