#include "advance.h"
void sine(float RAD,float *RES){
	int I,N=1,SIGN=1;
	for(I=1;(N<=10);I=I+2){
		*RES = *RES + SIGN * (power(RAD,I)/(double)factorial(I));
		N += 1;
		SIGN *= -1;
	} 
}
void cosine(float RAD,float *RES){
	int I,SIGN=1,N=1;
	for(I=0;(N<=10);I=I+2){
		*RES = *RES + SIGN * (power(RAD,I)/(double)factorial(I));
		N += 1;
		SIGN *= -1;
	}
}
