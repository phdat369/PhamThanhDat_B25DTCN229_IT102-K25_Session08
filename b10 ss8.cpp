#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int array[n];
	printf("Nhap so phan tu trong mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("array[%d]=",i);
		scanf("%d",&array[i]);
	}
	printf("Mang sau khi nhap la :");
	for(int a=0;a<n;a++){
		printf(" %d",array[a]);
		}
	printf("\nCac so nguyen to trong mang : ");
	for(int j=0;j<n;j++){
		int flag=1;
		if(array[j]==1){
			flag=0;
		}
		for(int c=2;c<sqrt(array[j]);c++){
			if(array[j]%c==0){
				flag=0;
				break;
			}
			}
			if(flag==1){
				printf(" %d ",array[j]);
			}
		}
}
