#include <stdio.h>
#include <math.h>
int main(){
	int array[5]={11,15,21,25,31};
	int tong=0;
	for(int i=0;i<5;i++){
		if(array[i]%2==0){
			printf("\nCac phan tu so chan trong mang : %d",array[i]);
			tong+=1;
		}
	}
	if(tong==0){
		printf("Mang khong chua chu so chan");
	}
}
