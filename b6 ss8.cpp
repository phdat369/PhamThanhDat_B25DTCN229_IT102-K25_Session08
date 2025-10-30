#include <stdio.h>
#include <math.h>
int main(){
	int array[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		if(array[i]%2==0){
			array[i]=array[i]+3;
		}
		else{
			array[i]=array[i]+2;
		}
	}
	for(int a=0;a<5;a++){
		printf("\narray[%d]=%d",a,array[a]);
	}
}
