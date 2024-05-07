//#include<stdio.h>
//int sum(int n){
//	if(n!=0){
//		return n+n*sum(n-1);
//	}
//	else
//		return n;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	int r=sum(n);
//	printf("%d",r );
//}


//%[^.]s ->takes the input other than full stop(.) in string containg spaces.
//%[0^1]s ->only takes 1 and 0 only in input.

//#include<stdio.h>
//int main(){
//	int a;
//	scanf("%d ",&a);
//	char b;
//	scanf("%c ",&b);
//	float c;
//	scanf("%f",&c);
//	printf("%d\n",a);
//	printf("%c",b);
//	printf("\n%f",c);
//}

#include<stdio.h>
#include<string.h>
int main(){
	char s[10];
	int l;
	gets(s);
	for(int i=0;i<strlen(s);i++){
		printf("%c\n",s[i]);
	}
}
