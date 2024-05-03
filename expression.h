struct data{
    	float operand1;
    	float operand2;
    	char Operator;
};
void expression(void){
	int num,j=0,count=0;
    	printf("How many operand are there in equation? ");
    	scanf("%d",&num);
    	while(num>100 || num<0){
    		printf("The operands should not exceed 100.Enter again : ");
    		scanf("%d",&num);
    		j++;
	    }
    	struct data DATA[num];
    	int i=0;
        	printf("Enter operand %d: ",i+1);
        	scanf("%f",&DATA[i].operand1);
    	while(i<num-1){
        	printf("Choose operator(+,-,*,/): ");
        	fflush(stdin);
        	scanf("%c",&DATA[i].Operator);
        	if(DATA[i].Operator!='+' && DATA[i].Operator!='-' && DATA[i].Operator!='*' && DATA[i].Operator!='/'){
        		printf("Wrong operator entered. Enter again!\n");
			continue;
		   	}
        	printf("Enter operand %d: ",i+2);
        	scanf("%f",&DATA[i].operand2);
        	switch(DATA[i].Operator){
            	case '+':{DATA[i+1].operand1=DATA[i].operand1+DATA[i].operand2;break;}
            	case '-':{DATA[i+1].operand1=DATA[i].operand1-DATA[i].operand2;break;}
            	case '*':{DATA[i+1].operand1=DATA[i].operand1*DATA[i].operand2;break;}
            	case '/':{
			  if(DATA[i].operand2==0){printf("MATH ERROR!");}
			  else {DATA[i+1].operand1=DATA[i].operand1/DATA[i].operand2;break;}}
		}
        	if(DATA[i].Operator=='/' && DATA[i].operand2==0) {count=1;break;}
		i++;
	
	}
	if(count==0) {
	int i=0;
	printf("%.2f ",DATA[i].operand1);
	for(i=0;i<num-1;i++){
		printf("%c %.2f ",DATA[i].Operator,DATA[i].operand2);
	}
	printf("= %.2f",DATA[i].operand1);}
}