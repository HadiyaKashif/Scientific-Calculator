#include<math.h>
float power(float A,int B){
	int I;
	float CALC=1;
	for(I=0;I<B;I++){
		CALC=CALC*A;
	}
	return (float)CALC;
}
double factorial(int num){
	int I;
	double SUM=1;
	for(I=1;I<=num;I++){
		SUM=SUM*I;
	}
	return (SUM);
}
void exponential(float NUM,float *RES){
	int I;
	for(I=0;I<=10;I++){
		*RES = *RES + (power(NUM,I)/(double)factorial(I));
	}
}
double nCr(int n, int r){
	double result=factorial(n)/(factorial(n-r)*factorial(r));
	return result;
}
double nPr(int n,int r){
	double result=factorial(n)/factorial(n-r);
	return result;
}

float Logarithm(float a,float b){
	return log(a)/log(b);
}
float root(float base,int exp){
	return pow(base, 1./exp);
}

