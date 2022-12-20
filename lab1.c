#include <stdio.h>

int main(){
	float ort;
	float sum=0;
	int i;
	float dizi[8];
	for(i=0 ; i<8 ;i++){
		scanf("%f",&dizi[i]);
		sum+=dizi[i];
	}
	
	
	ort=sum/8;
	
	printf("%.2f",ort);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
