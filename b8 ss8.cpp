#include <stdio.h>
#include <math.h>
int main(){
	int n,m;
	int array[100][100];
	printf("Nhap vao so hang va so cot cua mang 2 chieu : ");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\narray[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf(" %d ",array[i][j]);
		}
		printf("\n");
	}	
}
