#include<stdio.h>
int main(){
	int array[]={32,0,7,2,6};
	int n=sizeof(array)/sizeof(array[0]);
	for(int i=1;i<n;i++){
		int check=array[i];
		int j=i-1;
		while(j>=0&&array[j]>i){
			array[j+1]=array[j];
			j-=1;
		}
		array[j+1]=check;
	}
	for(int i=0;i<n;i++){
		printf("%d ",array[i]);
	}
}
