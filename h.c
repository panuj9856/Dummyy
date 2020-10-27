#include<stdio.h>
int sum(int *a,int *b){
return (*a)+(*b);}
float avg(int *a,int*b){
	return ((*a)+(*b))/2.0;
}


int main(){
	int a=5,b=6; 
	int s=sum(&a,&b);
	float av=avg(&a,&b);
//	int *m=&
	printf("%d\n",sum(&a,&b));
	printf("%f\n",avg(&a,&b));
	return 0;
}
