#include<stdio.h>

int main(){
	int rev=0,r,n;
	printf("enter n value");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse number %d",rev);
	return 0;
}

