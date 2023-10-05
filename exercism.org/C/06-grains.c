/*
Calculate the number of grains of wheat on a chessboard given that the number on each square doubles.
https://exercism.org/tracks/c/exercises/grains
*/

#include<stdio.h>
#include<math.h>

int main(){

    int i = 1;
    double j=1;
    while(i<=64){
        printf("Quadrado numero: %d\nNumero de graos: %.0lf\n \n",i,pow(2,i-1));
        j+=pow(2,i-1);
        i++;
    }
    printf("Total de graos
	: %.0lf",j);

    return 0;
}
