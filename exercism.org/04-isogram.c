/*
#Problema 4 - isograma;
Determinar se a palavra ou frase é um isograma;
Isograma = palavra ou frase sem letra repetida (hífens e espaços são permitidos);
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    
    char palavra[100];
    int a=1;

    loop: 
    while(a>0){

        printf("palavra: ");
        gets(palavra);

        int j,k;

        for(j=0;j<strlen(palavra);j++){
            for(k=j+1;k<strlen(palavra);k++){    
                //Se o código comparar hífens ou espaços, ignora e segue a iteração
                if (((palavra[j] == '-') && (palavra[k] == '-')) || ((isspace(palavra[j]) && (isspace(palavra[k])) ) ) )  continue;
                
                if(palavra[j]==palavra[k]) {//Se achar caracteres iguais, indica e volta pro loop pra pedir outra palavra
                    printf("%s não é um isograma!\n",palavra);
                    /*
                    Usando GoTo porque:
                    1)Se usar "return 0", o programa encerra, então só aceitaria uma palavra por execução
                    2)Se usar 'break', o programa sai da condicional, mas cai na linha 41, que não está em nenhum "else", 
                        porém, caso a palavra não caia dentro do laço, significa que se trata de um isograma, por isso cai na linha 41
                    */
                    goto loop;
                }
            }
        }
            printf("%s é um isograma!\n",palavra);
}
    return 0;
}
