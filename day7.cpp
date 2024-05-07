//#include<stdio.h>
//int main(){
//	int n,c=0,sum=0;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n;i++){
//	scanf("%d",&arr[i]);
//}
//	for(int i=0;i<n;i++){
//		c=0;
//		for(int j=i;j<n;j++){
//			c+= arr[j];
//			if(c>sum)
//				sum=c;
//			}
//	}
//	printf("%d",sum);
//}



//#include<stdio.h>
//int main(){
//	int n,temp;
//	scanf("%d",&n);
//	int arr[n];
//	for(int i=0;i<n-1;i++){
//	scanf("%d",&arr[i]);
//}
//	for(int i=0;i<n-1;i++){
//		for(int j=i+1;j<n;j++){
//			if(arr[i]>arr[j]){
//				temp=arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//		printf("%d ",arr[i]);
//	}
//	for(int i=0;i<n;i++){
//		if(arr[i+1]!=arr[i]+1){	
//		printf("\n %d",arr[i]+1);
//		break;
//	}
//}
//}



//#include<stdio.h>
//int main(){
//	int n,temp,i,j;
//	scanf("%d",&n);
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//		scanf("%d",&a[i][j]);
//	}
//}
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//			temp=a[i][j];
//			a[i][j]=a[j][i];
//			a[j][i]=temp;
//		}
//}
//
//	for(i=0;i<n;i++){
//		for(j=0;j<n;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//
//}



//#include<stdio.h>
//int main()
//{
//	int n,temp,i,j,k=0;
//	scanf("%d",&n);
//	int a[n],b[n],c[n*2];
//	for(int i=0;i<n;i++)
//		scanf("%d",&a[i]);
//		
//	for(int i=0;i<n;i++)
//		scanf("%d",&b[i]);
//		
//	for(i=0;i<n;i++){
//		for(j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
//
//	for(int i=0;i<n;i++){
//		for(int j=i+1;j<n;j++){
//				if(b[i]>b[j]){
//				temp=b[i];
//				b[i]=b[j];
//				b[j]=temp;
//			}
//		}
//	}
//	i=0,j=0;
//	while(i<n && j<n){
//		if(a[i]<b[j]){
//			c[k]=a[i];
//			k++;
//			i++;
//		}
//		else{
//			c[k]=b[j];
//			k++;
//			j++;
//		}
//	}
//	if(i==n){
//		for(j;j<n;j++){
//			c[k]=b[j];
//			k++;
//		}
//	}
//	else
//	 {
//		for(i;i<n;i++){
//			c[k]=a[i];
//			k++;	
//		} 
//	}
//	for(i=0;i<k;i++)
//		printf("%d ",c[i]);
//}


//#include<stdio.h>
//int main(){
//	int n,e , i , j;
//	scanf("%d",&n);
//	scanf("%d",&e);
//	int a[n][e];
//	for(int i=0;i<n;i++)
//		for(int j=0;j<e;j++)
//			scanf("%d",&a[i][j]);
//		
//	for(int i=0;i<n;i++){
//		for(int j=0;j<e;j++){
//			if(a[i][j]==0){
//				for(int r=0;r<n;r++)
//					a[r][j]=-1; 
//				for(int c=0;c<e;c++)
//					a[i][c]=-1;
//			}
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<e;j++){
//			if(a[i][j]==-1)
//				a[i][j]=0;
//		}
//	}
//	for(int i=0;i<n;i++){
//		for(int j=0;j<e;j++){
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//#include<stdio.h>
//int main(){
//	int n=11;
//	int a[11]={0,1,2,3,4,5,6,7,8,9,10};
//	int x=n;
//	for(int i=0;i<x/2;i++){
//		printf(" %d %d",a[n-1],a[i]);
//		n--;
//	}
//	if(x%2!=0)
//		printf(" %d",a[x/2]);
//}


#include<stdio.h>
int main(){
	int n,c;
	scanf("%d ",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		c=0;
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]) {
			c=1;
			break;
		}
		}
		if(c==0)
			printf("%d ",a[i]);
	}
}

#include<stdio.h>
void merge(int arr[],int l, int m, int r)
{
	int i,j,k;
	int n1=
}
