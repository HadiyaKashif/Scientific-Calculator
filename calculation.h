void addition(){
	int N;
	printf("How many numbers you want to add? ");
	scanf("%d",&N);
	float ADD[N],SUM=0;
	for(int i=0;i<N;i++){
		printf("Enter number %d: ",i+1);
		scanf("%f",&ADD[i]);
		SUM=SUM+ADD[i];
	}
	for(int i=0;i<N-1;i++){
		printf("%.3f + ",ADD[i]);
	}
	printf("%.3f = %.3f",ADD[N-1],SUM);
}
void substraction(){
	int N;
	printf("How many numbers you want to subtract? ");
	scanf("%d",&N);
	float SUB[N];
	for(int i=0;i<N;i++){
		printf("Enter number %d: ",i+1);
		scanf("%f",&SUB[i]);
	}
	float SUM=SUB[0];
	for(int i=1;i<N;i++){
		SUM=SUM-SUB[i];
	}
	for(int i=0;i<N-1;i++){
		printf("%.3f - ",SUB[i]);
	}
	printf("%.3f = %.3f",SUB[N-1],SUM);
}
void multiplication(){
	int N;
	printf("How many numbers you want to multiply? ");
	scanf("%d",&N);
	float MUL[N],SUM=1;
	for(int i=0;i<N;i++){
		printf("Enter number %d: ",i+1);
		scanf("%f",&MUL[i]);
		SUM=SUM*MUL[i];
	}
	for(int i=0;i<N-1;i++){
		printf("%.3f x ",MUL[i]);
	}
	printf("%.3f = %.3f",MUL[N-1],SUM);
}
void division(){
	float a,b;
	printf("Enter the numbers you want to divide: ");
	scanf("%f%f",&a,&b);
	if(b==0){printf("MATH ERROR!");}
	else {printf("%.3f / %.3f = %.3f",a,b,a/b);}
}