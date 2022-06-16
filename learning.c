#include<stdio.h>

int main(){
	int rev=0,r,a;
	printf("enter a value");
	scanf("%d",&a);
	while(a>0){
		r=a%10;
		rev=rev*10+r;
		a=a/10;
	}
	printf("reverse number %d",rev);
	return 0;
}
