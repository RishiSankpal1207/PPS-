#include <stdio.h>

int fib(int n){
	if(n <= 1){    // base case
	 return n;
	 }
return fib(n - 1) + fib(n - 2);   // recursive case
} 

int main(){
int n = 6;
for(int i = 0; i < n; i++){
	printf("%d", fib(i));
	}
	return 0;
	}
	 
