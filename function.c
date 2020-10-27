#include <stdio.h>
int sum(int a,int b){
	return a+b;
}
int diff(int a,int b){
	return a-b;
}
int product(int a,int b){
	return a*b;
}
int main(){
	int i,j,k,a,b;
	printf("enter valur of a = \n");
	scanf("%d",&a);
	printf("enter value of b = \n");
	scanf("%d",&b);
	i=sum(a,b);
	j=diff(a,b);
	k=i*j;
	printf("i = %d,j = %d,k = %d",i,j,k);
	return 0;
}
