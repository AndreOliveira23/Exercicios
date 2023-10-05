/*
Problema #3 - Implementação 2 - Mapeamento cor-código > https://exercism.org/tracks/c/exercises/resistor-color
*/
#include<stdio.h>

int main (){
    int codigo,i;
    
	while(i){
	    printf ("digite um numero: ");
	    scanf("%d",&codigo);
	
	    switch(codigo){
	
	        case 0:
	            printf("Codigo: 0\n Cor: Black\n");
	            break;
	
	        case 1:
	            printf("Codigo: 1\n Cor: Brown\n");
	            break;
	            
	        case 2:
	            printf("Codigo: 2\n Cor: Red\n");
	            break;
				    
			case 3:
	            printf("Codigo: 3\n Cor: Orange\n");
	            break;
	
			case 4:
	            printf("Codigo: 4\n Cor: Yellow\n");
	            break;
	
	        case 5:
	            printf("Codigo: 5\n Cor: Green\n");
	            break;
	            
	        case 6:
	            printf("Codigo: 6\n Cor: Blue\n");
	            break;
				    
			case 7:
	            printf("Codigo: 7\n Cor: Violet\n");
	            break;
			
			case 8:
	            printf("Codigo: 8\n Cor: Grey\n");
	            break;
	            
	        case 9:
	            printf("Codigo: 9\n Cor: White\n");
	            break;
			
			case 15205:
				return 0;

			default:
				printf("Codigo nao encontrado! Tente novamente ou digite '15205' para sair");               
	    }
	printf("\n");
}
    return 0;
}
