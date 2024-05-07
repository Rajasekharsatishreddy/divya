//#include<stdio.h> 
//int main()
//{
//	int n,sum=0,max=0,mac=0;
//	scanf("%d",&n);
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	for(int i=0;i<n;i++){
//		sum=0;
//		for(int j=0;j<n;j++){
//			sum+=a[i][j];
//		}
//		if(sum>max)
//			max=sum;
//	}	
//	printf("%d ",max);
//	printf("\n");
//	for(int i=0;i<n;i++){
//		sum=0;
//		for(int j=0;j<n;j++){
//			sum+=a[j][i];
//		}
//		if(sum>mac)
//			mac=sum;
//	}	
//	printf("%d ",mac);
//	printf("\n");
//	if(max>mac)
//	   printf("row major");
//	else
//		printf("colum major");
//}


//#include<stdio.h> 
//int main()
//{
//	int n,sum=0,max=0,min;
//	scanf("%d",&n);
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			scanf("%d",&a[i][j]);
//			if(a[i][j]>max)
//				max=a[i][j];
//			if(a[i][j]<min)
//				min=a[i][j];
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("%d %d", max , min);
//}


//#include<stdio.h> 
//int main()
//{
//	int n,x,temp;
//	scanf("%d",&n);
//	int a[n];
//	for(int i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//	scanf("%d",&x);
//	while(x--){
//		temp=a[n-1];
//		for(int i=n-1;i>0;i--){
//			a[i]=a[i-1];
//		}
//		a[0]=temp;
//	}
//	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
//	}
//}



#include<stdio.h> 
int main()
{
	int n,x;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j])
				x=a[i];
		}
}
	if(x!=0){
		printf("%d",x);
	}
	else
		printf("%d",a[0]);
}

	 
		
