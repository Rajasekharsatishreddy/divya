////#include<stdio.h>
////#include<string.h>
////int main(){
////	int n=5;
////	char a[]="raja";
////	for(int i=n-1;i>=0;i--){
////		printf("%c",a[i]);
////	}
////}
//
//
////#include<stdio.h>
////#include<string.h>
////int main(){
////	int n,temp,t;
////	scanf("%d",&n);
////	char a[100],d[100];
////	scanf("%s",a);
////	t=3;
////	int j=0;
////	for(int i=t;i<strlen(a);i++){
////		d[j++]=a[i];
////	}
////	for(int i=0;i<t;i++)
////	{
////		d[j++]=a[i];
////	}
////	d[j]='\0';
////	for(int i=0;i<n;i++)
////			printf("%c",d[i]);
////	return 0;
////}
//
//
//
//
//
//#include<stdio.h>
//#include<string.h>
//void clock(char *a,int n){
//	char t=a[n];
//	int i;
//	for(i=n;i>0;i--)
//		a[i]=a[i-1];
//	a[i]=t;
//}
//void anti(char *a,int n){
//	char t=a[0];
//	int i;
//	for(i=0;i<n;i++)
//		a[i]=a[i+1];
//	a[n]=t;
//}
//int compare(char *a,char *b,int k){
//	char temp1[100],temp2[100];
//	strcpy(temp1,b);
//	strcpy(temp2,b);
//	while(k--){
//		clock(temp1,strlen(b)-1);
//		anti(temp2,strlen(b)-1);
//	}
//	return (strcmp(temp1,a)==0 ||strcmp(temp2,a)==0);
//}
//int main(){
//	char a[100],b[100];
//	int k=2;
//	scanf("%[^\n]%*c",a);
//	scanf("%[^\n]",b);
//	if(compare(a,b,k))
//		printf("True");
//	else
//		printf("flase");
//}



#include<stdio.h>
int main(){
	int n=6;
	char a[n]="amazon";
	int k=2;
	while(k--){
		char t=a[n-1];
		int i;
	for(int i=n-1;i>0;i--)
		a[i]=a[i-1];										
	a[i]=t;
}
	for(int j=0;j<=n;j++){
		printf("%c",a[j]);
	}
}
