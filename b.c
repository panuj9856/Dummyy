#include<stdio.h>
float division(float a,float b){
	 float k=a/b;
	return k;
}
int main()
{
	float i,j;
	i=division(5,6);
	j=division(7,8);
	printf("i = %f, j = %f",i,j);
	return 0;
}
