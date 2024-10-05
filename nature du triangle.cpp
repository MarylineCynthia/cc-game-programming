#include <iostream>
#include <stdio.h>
#include <math.h>
int main(int argc,char**arg){
	float a,b,c;
	printf("entrer trois nombres reels positifs");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (pow(a,2)+pow(b,2)==pow(c,2)){
		printf("le triangle est rectangle");
	}else if(a==b && b==c){
		printf("le triangle est equilateral");
	}else if(a==b || b==c || a==c){
		printf("le triangle est isocele");
	}
	return 0;
}
