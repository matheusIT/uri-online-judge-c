/*Esse codigoo uri diz que esse codigo tá 20% errado se alguem souber o erro diga*/
#include <stdio.h>
main(){
	int k,p,i,j,cont;
	while(1 == 1){
		scanf("%i%i",&k,&p);
		if(k == 0 && p == 0){
			break;
		}
		int pNV[k],c2[k];
		int cont = 0;
		for(i = 0;i<k;i++){
			scanf("%i",&pNV[i]);	
		}
		for(i = 0;i<k;i++){
			c2[i] = 1;
			for(j=i+1;j<k;j++){
				if(pNV[i] == pNV[j] ){
					pNV[j] =-1-j;
					c2[i]++;	
				}
			}
		}
		for(i = 0;i<k;i++){
			if(c2[i] >= p){
					cont++;
			}
		}
		printf("%i\n",cont);
	}
}
