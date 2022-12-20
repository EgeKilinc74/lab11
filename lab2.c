#include <stdio.h>

int main(){
	
	int max=10;
	int dizi[10];
	int i=0;
	int karesi;	
	int d=0;
	int counter=0;	
		while(1){
			if(d>9) break;
			
				scanf("%d",&dizi[i]);
					
					if(dizi[i]==-1){
					
						break;
				}
				
					else {
						karesi=dizi[i]*dizi[i];
						dizi[i]=karesi;
						i++;
						d++;
						counter++;
				}
				
				
				
}
	for(i=0 ; i<counter ; i++){
	
	printf("%d\t",dizi[i]);
}
	
	
	
	
	
	
	
	
	return 0;
}
