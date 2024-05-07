//#include<stdio.h>
//void spy(int);
//int main(){
//     int n;
//     scanf("%d",&n);
//     spy(n);
//}
//void spy(int n){
//	int p=1;
//	int s=0;
//	int t;
//	while(n>0){
//		t=n%10;
//		p=p*t;
//		s=s+t;
//		n/=10;
//	}
//	if(p==s){
//		printf("spy");
//	}
//	else
//	printf("no");
//}

//#include<stdio.h>
//void super(int);
//int main(){
//     int n;
//     scanf("%d",&n);
//    super(n);
//}
//void super(int n){
//	int sum=0;
//	while(n>0){
//		sum+=n%10;
//		n/=10;
//	}
//	if(sum>9)
//	super(sum);
//	else
//	printf("%d",sum);
//}


//#include<stdio.h>
//int ero(int);
//int main(){
//     int n;
//     scanf("%d",&n);
//    if(ero(n))
//       printf("evel");
//    else
//       	printf("odd");
//	}
//int ero(int n){
//	int c=0,r;
//	while(n>0){
//		r=n%2;
//		if(r==1){
//		   c++;
//		n/=2;
//}
//       if(c%2==0)
//          return 1;
//	   else
//		  return 0;
//	}
//}

//#include<stdio.h>
//int main(){
//     int n;
//     scanf("%d",&n); 
//    while(n>=1 && n<=1000)
//	{
//    	if(n>=1000){
//    		printf("M");
//    		n-=1000;
//		}
//		else if(n>=900){
//			printf("cm");
//			n-=900;
//		}
//		else if(n>=500){
//    		printf("D");
//    		n-=500;
//		}
//		else if(n>=400){
//			printf("CD");
//			n-=400;
//		}
//		else if(n>=100){
//    		printf("C");
//    		n-=100;
//		}
//		else if(n>=50){
//			printf("L");
//			n-=50;
//	    }
//	    else if(n>=40){
//    		printf("XL");
//    		n-=40;
//		}
//		else if(n>=10){
//			printf("X");
//			n-=10;
//		}
//		 else if(n>=5){
//    		printf("V");
//    		n-=5;
//		}
//		else if(n> =1){
//			printf("I");
//			n-=1;
//		}
//	}
//}


//#include<stdio.h>
//int main(){
//     int n,sum=0;
//     scanf("%d",&n); 
//     int a[n];
//     for(int i=0;i<n;i++){
//     	scanf("%d",&a[i]);
//	 }
//	 for(int i=0;i<n;i++){
//	 	sum+=a[i];
//		 }
//	    printf("%d",sum);
//}


#include<stdio.h>
int main(){
	int n,x;
	int a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&x);
	for(int j=0;j<n;j++){
		if(x==a[j]){
		   for(int k=j;k<n;k++){
		   	   a[k]=a[k+1];
		   }	
		   a[n-1]=0;
		   break;
		}
	}
for(int i=0;i<n;i++){
	printf("%d ",a[i]);
	
}
}

