#include <stdio.h>
#include <math.h>
int main(){
	int array[100][100];
	int n,m;
	printf("Nhap vao so hang va so cot cua mang 2 chieu : ");
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("\narray[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	for(int a=0;a<n;a++){
		printf("\n");
		for(int b=0;b<m;b++){
			if(a==0 || a==(n-1)){
				printf(" %d ",array[a][b]);
			}
			else if(a>0 && a<(n-1)){
				if(b>0 && b<(m-1)){
					printf("   ");
				}
				else {
					printf(" %d ",array[a][b]);
				}
			}
	}
	
}
}
