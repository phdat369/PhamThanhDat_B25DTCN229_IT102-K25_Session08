#include <stdio.h>
#include <math.h>
int main(){
	int n;
	int array[n];
	printf("Nhap so phan tu cua mang : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\narray[%d]=",i);
		scanf("%d",&array[i]);
		while(array[i]%2==0){
			printf("\nVui long nhap lai : \narray[%d]=",i);
			scanf("%d",&array[i]);
		}
	}
	
}


