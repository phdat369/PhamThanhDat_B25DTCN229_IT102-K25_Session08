#include <stdio.h>
#include <math.h>
int main(){
	int array[5]={1000,40,20,70,1};
	int max=array[0];
	for(int i=0;i<5;i++){
		if(array[i]>max){
			max=array[i];
		}
	}
	printf("So lon nhat trong mang la : %d",max);
	int min=array[0];
	for(int a=0;a<5;a++){
		if(array[a]<min){
			min=array[a];
		}
	}
	printf("\nSo be nhat trong mang la : %d",min);
}
