#include <stdio.h>
int sum(int a,int b){
	return a+b;
}
int av(int a, int b){
	return (a+b)/2;
}
int main(){
	int a=6,b=8;
	int d=sum(a,b);
	printf("the sum of a and b :%d\n",d);
	int avr=av(a,b);
	printf("the average of a and b :%d\n",avr);
	return 0;
}
