#include <stdio.h>

int main(){
	
	int dizi[5];
	int n;
	int basamak;
	int i;
	
	scanf("%d",&n);
		
		for(i=4 ; i>=0 ; i--){
			
			dizi[i]=n%10;
			n/=10; 
		}
				
				for(i=0 ; i<=4 ; i++){
					printf("%d",dizi[i]);
	
}
	
	
	return 0;
}
