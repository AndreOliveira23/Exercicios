#include<stdio.h>

int main(){

    char dna1[20];
    char dna2[20];
    int a=1,count=0;
while(a>0){
    printf("Insira a trilha do dna 1: ");
    scanf("%s",&dna1);

    printf("Insira a trilha do dna 2: ");
    scanf("%s",&dna2);

    if(strlen(dna1)==strlen(dna2)){
        int i;
        for(i=0;i<strlen(dna1);i++){
            if(dna1[i]!=dna2[i]) count++;
        }
        printf("Hamming distance: %d\n",count);
        count=0;
    }else{
        printf("As fitas tem tamanho diferente! Insira fitas de tamanho igual!\n");
    }
}
    return 0;
}