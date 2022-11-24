//Problema #1 -> "Take the 'num' parameter being passed and return the factorial of it". ("Pegue o número dado como parâmetro e retorne o fatorial dele");

#include <stdio.h> 

void FirstFactorial(int num) {
  int n = num;
  int i=num; 
  int j=num-1; 

  for(i=j;i>=1;i--){ 
      num = num*j; 
      j--;
  }

  printf("Fatorial de %d = %d",n, num);
}

int main() { 
  int num;
  printf("Escolha um numero para calcular o fatorial: ");
  scanf("%d",&num); 
  FirstFactorial(num);
  printf("\n");
  return 0;
}
