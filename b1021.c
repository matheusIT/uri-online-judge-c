#include <stdio.h>
main(){
    double v = 0;
    int aux = 0;
    scanf("%lf",&v);
    
    printf("NOTAS:\n");
    
    //dicovery and show de numbers of notes with value 100;
    aux = v/100.00;
    v = v-(aux*100);
    printf("%i nota(s) de R$ 100.00\n",aux);
    //dicovery and show de numbers of notes with value 50;
    aux = v/50.00;
    v = v-(aux*50);
    printf("%i nota(s) de R$ 50.00\n",aux);
    
    //dicovery and show de numbers of notes with value 20;
    aux = v/20.00;
    v = v-(aux*20);
    printf("%i nota(s) de R$ 20.00\n",aux);
    
    //dicovery and show de numbers of notes with value 10;
    aux = v/10.00;
    v = v-(aux*10);
    printf("%i nota(s) de R$ 10.00\n",aux);
    
    //dicovery and show de numbers of notes with value 5;
    aux = v/5.00;
    v = v-(aux*5);
    printf("%i nota(s) de R$ 5.00\n",aux);
    
    //dicovery and show de numbers of notes with value 2;
    aux = v/2.00;
    v = v-(aux*2);
    printf("%i nota(s) de R$ 2.00\n",aux);
    
    printf("MOEDAS:\n");
    //dicovery and show de numbers of coins with value 1;
    aux = v/1.00;
    v = v-(aux*1);
    printf("%i moeda(s) de R$ 1.00\n",aux);
    
    //dicovery and show de numbers of coins with value 0.5;
    aux = v/0.50;
    v = v-(aux*0.5);
    printf("%i moeda(s) de R$ 0.50\n",aux);
    
    //dicovery and show de numbers of coins with value 0.25;
    aux = v/0.25;
    v = v-(aux*0.25);
    printf("%i moeda(s) de R$ 0.25\n",aux);
    
    //dicovery and show de numbers of coins with value 0.10;
    aux = v/0.10;
    v = v-(aux*0.1);
    printf("%i moeda(s) de R$ 0.10\n",aux);
    
    //dicovery and show de numbers of coins with value 0.05;
    aux = v/0.05;
    v = v-(aux * 0.05);
    printf("%i moeda(s) de R$ 0.05\n",aux);
    
    //dicovery and show de numbers of coins with value 0.01;
    aux = v/0.01;
    v = v-(aux*0.05);
    printf("%i moeda(s) de R$ 0.01\n",aux);
    
    return 0;
	
}
