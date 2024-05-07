#include<stdio.h>
#include<string.h>
int main() {
	int m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	char a[m] , b[m];
	
	scanf("%s",&a);
	for(int i=0;i<strlen(a);i++) {
		if(a[i]==' ' )
			b[i]=b[i]+' ';
		else
			b[i]=a[i]+(3*(i+1));
	}
	for(int i=0;a[i]!='\0';i++)
		printf("%c",b[i]);
	
}
