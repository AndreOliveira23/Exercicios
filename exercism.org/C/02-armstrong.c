/*
#02 - Armstrong Number

An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.

For example:

    9 is an Armstrong number, because 9 = 9^1 = 9
    10 is not an Armstrong number, because 10 != 1^2 + 0^2 = 1
    153 is an Armstrong number, because: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
    154 is not an Armstrong number, because: 154 != 1^3 + 5^3 + 4^3 = 1 + 125 + 64 = 190

*/
#include<stdio.h>
#include<math.h>

int numberOfDigits(int n){
    int count = 0;
    while(n!=0){
        n/=10;
        //printf("N: %d\n",n);
        count++;
    }
    printf("\nNúmero de dígitos: %d",count);
    printf("\n");
    return count;
}


int reverse(int size, int array[], int number){

    int arrayReverso[size];
    int arrIndex = size-1;
    int revIndex=0;
    int d,b;

    while(arrIndex>=0){
        arrayReverso[revIndex] = array[arrIndex];
        revIndex++;
        arrIndex--;
    }

    for(b=0;b<size;b++){
        printf("ArrayReverso[%d] = %d\n",b,arrayReverso[b]);
    }

    //Array que vai receber a soma das potências 
    int somados[size],total=0;

    for(b=0;b<size;b++){
        somados[b] = pow(arrayReverso[b],size);
        total+=somados[b];
    }
    
    printf("total = %d | number = %d\n",total,number);
    
    if(total == number) {
        printf("%d é um número de armstrong!!",number);
    }else{ 
        printf("%d não é um número de armstrong!!",number);
    }
}

//Função para descobrir quais são os digitos
int digitsItself(int n){
    int number = n;
    int a = numberOfDigits(n);
    int array[a];
    int b=0;

    while (n!=0){    
        array[b] = n%10;
        n=n/10;
        b++;
    }
    //Cada digito é armazenado no array, porém de maneira inversa. Basta reverter para descobrir a ordem certa
    reverse(a,array,number);
}



int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);
    
    digitsItself(numero);
    
    return 0;
}