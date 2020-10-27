#include <stdio.h>
int main(){
	float physics,chemistry,maths,total;
	printf("enter marks of physics = \n");
	scanf("%f",&physics);
	printf("enter marks of chemistry =\n");
	scanf("%f",&chemistry);
	printf("enter ,marks of maths =\n");
	scanf("%f",&maths);
	total = (physics+chemistry+maths)/3;
	if (total>=40 && physics>=33 && chemistry>=33 && maths>=33){
		printf("you are eligible");
	}
	else{
		printf("you are not eligible");
	}
	return 0;
}
