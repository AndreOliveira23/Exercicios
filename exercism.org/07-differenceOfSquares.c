//Find the difference between the square of the sum and the sum of the squares of the first N natural numbers.
#include <stdio.h>
#include <math.h>

int squareOfSum(int numbers[], int size){
	int sum=0, i;

	for(i=0;i<size;i++){
		sum+=numbers[i];
	}
	printf("sum = %d\n",sum);
	sum = pow(sum,2);
	printf("square of sum = %d\n",sum);
	return sum;
}

int sumOfSquares(int numbers[], int size){
	int sum=0, i;

	for(i=0;i<size;i++){
		sum+=pow(numbers[i],2);
	}
	printf("sum of squares = %d\n",sum);
	return sum;
}

void showNumbers(int numbers[], int size){
	int i;
	printf("numbers = {");
	for(i=0;i<size;i++){
		printf("%d ",numbers[i]);
	}
	printf("}\n");
}


int main(){
	int numbers[] = {1,2,3,4,5,6,7,8,9,10};

	int size = (sizeof(numbers)/sizeof(numbers[0]));
	showNumbers(numbers,size);
	int a = squareOfSum(numbers,size);
	int b = sumOfSquares(numbers,size);

	printf("difference between the square of the sum and the sum of the squares = %d\n",a-b);

	return 0;
}


