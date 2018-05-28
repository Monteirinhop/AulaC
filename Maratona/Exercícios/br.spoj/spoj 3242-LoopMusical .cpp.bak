#include <stdio.h>

int main(){
	int n;
	int op=0;
	int pcount=0;
	
	while(true){
		scanf("%d",&n);
		
		if(n==0)break;

		int com[n];
		
		for(int i=0;i<n;i++){

			scanf("%d",&com[i]);

			if(i==0)
				op=op+(com[i]+i);

			for(int j=i-1;j>=0;j--){
				if(com[i]==com[j]){
					op=op+(i-j);
  					break;
				}
				else if(j==0){
					op=op+(com[i]+i);
				}
			}
		}
		if(pcount==0){
			printf("%d",op);
			pcount=1;		
		}
		else
			printf("\n%d",op);
		op=0;
	}
}