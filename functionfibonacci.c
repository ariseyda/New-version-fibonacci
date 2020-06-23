#include<stdio.h>

//Write fibonacci function that receives an integer n and returns n-th term of the Fibonacci sequence. 
//1st term of Fibonacci sequence is 0, 2nd term of Fibonacci sequence is 1, 
//and n-th term of Fibonacci sequence is sum of (n-1)th and (n-2)th terms of the Fibonacci sequence. 
//Use the function in a program that asks user to enter number of terms and displays first that many terms of the Fibonacci sequence. 

int main(){
	
	int n;
	printf("Please enter an integer:");
	scanf("%d",&n);
	
	fibonacci(n);
	
}

void fibonacci(int a){
	int first=0;
	int second=1;
	int temp,i;
	printf("%d %d ",first,second);
	
	for(i=3;i<=a;i++){
		temp=second;
		second=second+first;
		first=temp;
		printf("%d ",second);
	}
	printf("\n%dth term:%d",a,second);
	
}
