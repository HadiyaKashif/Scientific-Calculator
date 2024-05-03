#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include "equations.h"
#include "trigonometry.h"
#include "complexNo.h"
#include "vectors.h"
#include "matrices.h"
#include "conversion.h"
#include "expression.h"
#include "calculation.h"
int main(){
	int CHOICE,cont,i=0;
	int TRIG,FUNC1,FUNC2,FUNC3,COMP,R1,R2,C1,C2,MAT,INV_HYP;
	float ANGLE,RADIAN,RESULT1=0,RESULT2=0,NUMBER,RESULT=0,RANGE,VALUE,Z,MOD;
	do{
	printf("PRESS:\n1.Simple calculations.\n2.Advance simple calculations.\n3.Equations.\n4.Trigonometric and Hyperbolic Functions.\n5.Complex numbers.\n6.Matrices.\n7.Vectors.\n8.Unit convertor.\n9.Constants.\n0.Exit.\n");
	printf("Enter your choice : ");
	scanf("%d",&CHOICE);
	system("CLS");
	switch(CHOICE){
		case 1:{
			system("COLOR E0");//light yellow
			int opt;
			printf("PRESS:\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Expression.\n");
			printf("Enter your choice : ");
			scanf("%d",&opt);
			system("CLS");
			switch(opt){
				case 1:{
					addition();
					break;
				}
				case 2:{
					substraction();
					break;
				}
				case 3:{
					multiplication();
					break;
				}
				case 4:{
					division();
					break;
				}
				case 5:{
					expression();
					break;
				}
				default:{
					printf("INVALID INPUT!");
					break;
				}
			}
			break;
		}
		case 2:{
			system("COLOR B0");//light aqua
			int OPT;
			printf("PRESS:\n1.Power.\n2.Root.\n3.Factorial.\n4.Permutation.\n5.Combination.\n6.Exponential.\n7.Logarithms.\n");
			printf("Enter your choice : ");
			scanf("%d",&OPT);
			system("CLS");
			switch(OPT){
				case 1:{
					int pow;
					float base;
					printf("Enter the base: ");
					scanf("%f",&base);
					printf("Enter the power: ");
					scanf("%d",&pow);
					printf("The power %d of %.3f is: %.3f",pow,base,power(base,pow));
					break;
				}
				case 2:{
					int Exp;
					float Base;
					printf("Enter The numer whose root you want to find: ");
					scanf("%f",&Base);
					printf("Which root you want to find: ");
					scanf("%d",&Exp);
					printf("The %d root of %.3f is: %.3f.",Exp,Base,root(Base,Exp));
					break;
				}
				case 3:{
					int num;
					printf("Enter the number you want to find factorial of: ");
					scanf("%d",&num);
					printf("The factorial of %d is %.3lf.\n",num,factorial(num));
					break;
				}
				case 4:{
					int x,y;
					printf("Enter value of n and r to find permutation: ");
					scanf("%d\n%d",&x,&y);
					if(x<y){printf("INVALID INPUT!\n");}
					else{
					printf("%dP%d = %.3lf\n",x,y,nPr(x,y));}
					break;
				}
				case 5:{
					int n,r;
					printf("Enter value of n and r to find combination: ");
					scanf("%d\n%d",&n,&r);
					if(n<r){printf("INVALID INPUT!\n");}
					else{
					printf("%dC%d = %.3lf\n",n,r,nCr(n,r));}
					break;
				}
				case 6:{
					float no,ans=0;
					printf("Enter the power of exponential: ");
					scanf("%f",&no);
					exponential(no,&ans);
					printf("%.3f",ans);
					break;
				}
				case 7:{
					int option;
					printf("PRESS:\n1.Natural log.\n2.Log base 10.\n3.Log to any base.\n");
					printf("Enter your choice: ");
					scanf("%d",&option);
					switch(option){
						case 1:{
							float log1;
							printf("Enter the number whose natural log you want to find: ");
							scanf("%f",&log1);
							if(log1==0){printf("MATH ERROR!\n");}
							else{printf("ln(%.2f)=%.3f\n",log1,log(log1));}
							break;
						}
						case 2:{
							float log2;
							printf("Enter the number whose log to base 10 you want to find: ");
							scanf("%f",&log2);
							if(log2==0){printf("MATH ERROR!\n");}
							else{printf("ln(%.2f)=%.3f",log2,log10(log2));}
							break;
						}
						case 3:{
							float nmb,bs;
							printf("\nEnter the number whose log you want to find: ");
							scanf("%f",&nmb);
							printf("\nEnter the base: ");
							scanf("%f",&bs);
							printf("\nThe log of %.2f to base %.2f is: %.3f",nmb,bs,Logarithm(nmb,bs));
							break;
						}
						default:{
							printf("INVALID INPUT!");
							break;
						}
					}
					break;
				}
				default:{
					printf("INVALID INPUT");
					break;
				}
			}
			break;
		}
		case 3:{
			system("COLOR F0");//bright white
			int eq;
			printf("PRESS:\n1.Linear equation.\n2.Quadratic equation.\n");
			printf("Enter your choice : ");
			scanf("%d",&eq);
			system("CLS");
			switch(eq){
				case 1:{
					float coff,constant;
					printf("Enter the coefficient of x: ");
					scanf("%f",&coff);
					printf("Enter the value of constant: ");
					scanf("%f",&constant);
					if(constant>0){
					printf("The solution of equation (%.2f)x+(%.2f)=%.2f",coff,constant,linearEq(coff,constant));}
					else{printf("The solution of equation %.2fx%.2f=%.2f",coff,constant,linearEq(coff,constant));}
					break;
				}
				case 2:{
					float coffX2,coffX,c;
					printf("Enter the value of a: ");
					scanf("%f",&coffX2);
					if(coffX2==0){
					printf("ERROR!The value of a can't be zero.");}
					else{	
					printf("Enter the value of b: ");
					scanf("%f",&coffX);
					printf("Enter the value of c: ");
					scanf("%f",&c);
					quadraticEq(coffX2,coffX,c);}
					break;
				}
				default:{
					printf("INVALID INPUT");
					break;
				}
			}
			break;
		}
		case 4:{
			system("COLOR 70");//white
			printf("PRESS:\n1.Simple Trigonometric.\n2.Inverse Trigonometric.\n3.Simple Hyperbolic Functions.\n4.Inverse Hyperbolic Functions.\n");
			printf("Enter your choice : ");
			scanf("%d",&TRIG);
			system("CLS");
			switch(TRIG){
				case 1:{
					printf("PRESS:\n1.Sin.\n2.Cos.\n3.Tan.\n4.Cosec.\n5.Sec.\n6.Cot.\n");
					printf("Enter your choice : ");
					scanf("%d",&FUNC1);
					system("CLS");
					printf("Enter the Angle in degress : ");
					scanf("%f",&ANGLE);
					RADIAN=ANGLE*(3.14159/180);
					switch(FUNC1){
						case 1:{
							sine(RADIAN,&RESULT1);
							printf("Sin(%.3f) = %.3f\n",ANGLE,RESULT1);
							break;
						}
						case 2:{
							cosine(RADIAN,&RESULT2);
							printf("Cos(%.3f) = %.3f\n",ANGLE,RESULT2);
							break;
						}
						case 3:{
							if(ANGLE==90){printf("MATH ERROR!");}
							else {sine(RADIAN,&RESULT1);
							cosine(RADIAN,&RESULT2);
							printf("Tan(%.3f) = %.3f\n",ANGLE,RESULT1/RESULT2);}
							break;
						}
						case 4:{
							if(ANGLE==0){printf("MATH ERROR!");}
							else {sine(RADIAN,&RESULT1);
							printf("Cosec(%.3f) = %.3f\n",ANGLE,1/RESULT1);}
							break;
						}
						case 5:{
							if(ANGLE==90){printf("MATH ERROR!");}
							else {cosine(RADIAN,&RESULT2);
							printf("Sec(%.3f) = %.3f\n",ANGLE,1/RESULT2);}
							break;
						}
						case 6:{
							if(ANGLE==0){printf("MATH ERROR!");}
							else {sine(RADIAN,&RESULT1);
							cosine(RADIAN,&RESULT2);
							printf("Cot(%.3f) = %.3f\n",ANGLE,RESULT2/RESULT1);}
							break;
						}
						default:{
							printf("INVALID INPUT!");
							break;
						}
					}
					break;
				}
				case 2:{
					printf("PRESS:\n1.Inverse Sine.\n2.Inverse Cosine.\n3.Inverse Tangent.\n");
					printf("Enter your choice : ");
					scanf("%d",&FUNC2);
					system("CLS");
					printf("Enter the value : ");
					scanf("%f",&RANGE);
					switch(FUNC2){
						case 1:{
							if(RANGE<-1 || RANGE>1) {printf("INVALID INPUT!");}
							else {
							printf("Sin Inverse %.3f = %.3f\n",RANGE,asin(RANGE)*(180/3.14159));}
							break;
						}
						case 2:{
							if(RANGE<-1 || RANGE>1) {printf("INVALID INPUT!");}
							else {
							printf("Cos Inverse %.3f = %.3f\n",RANGE,acos(RANGE)*(180/3.14159));}
							break;
						}
						case 3:{
							printf("Tan Inverse %.3f = %.3f\n",RANGE,atan(RANGE)*(180/3.14159));
							break;
						}
						default:{
							printf("INVALID INPUT!");
							break;
						}
					}
					break;
				}
				case 3:{
					printf("PRESS:\n1.Hyperbolic Sine.\n2.Hyperbolic Cosine.\n3.Hyperbolic Tangent.\n4.Hyperbolic Cosine.\n5.Hyperbolic Sec.\n6.Hyperbolic Cot.\n");
					printf("Enter your choice : ");
					scanf("%d",&FUNC3);
					system("CLS");
					printf("Enter the angle of hyperbolic function : ");
					scanf("%f",&NUMBER);
					switch(FUNC3){
						case 1:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Sinh(%.3f) = %.3f\n",NUMBER,(RESULT1-RESULT2)/2);
							break;
						}
						case 2:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Cosh(%.3f) = %.3f\n",NUMBER,(RESULT1+RESULT2)/2);
							break;
						}
						case 3:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Tanh(%.3f) = %.3f\n",NUMBER,(RESULT1-RESULT2)/(RESULT1+RESULT2));
							break;
						}
						case 4:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Cosech(%.3f) = %.3f\n",NUMBER,2/(RESULT1-RESULT2));
							break;
						}
						case 5:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Sech(%.3f) = %.3f\n",NUMBER,2/(RESULT1+RESULT2));
							break;
						}
						case 6:{
							exponential(NUMBER,&RESULT1);
							exponential(-NUMBER,&RESULT2);
							printf("Coth(%.3f) = %.3f\n",NUMBER,(RESULT1+RESULT2)/(RESULT1-RESULT2));
							break;
						}
						default:{
							printf("INVALID INPUT!");
							break;
						}
					}
					break;
				}
				case 4:{
					printf("PRESS:\n1.Sinh Inverse.\n2.Cosh Inverse.\n3.Tanh Inverse.\n4.Cosech Inverse.\n5.Sech Inverse.\n6.Coth Inverse.\n");
					printf("Enter your choice : ");
					scanf("%d",&INV_HYP);
					system("CLS");
					printf("Enter the Value : ");
					scanf("%f",&VALUE);
					switch(INV_HYP){
						case 1:{
							Z=VALUE+root(1+(VALUE*VALUE),2);
							printf("Sinh Inverse (%.2f) = %.3f\n",VALUE,log(Z));
							break;
						}
						case 2:{
							if(VALUE>=1){Z=VALUE+root((VALUE*VALUE)-1,2);
							printf("Cosh Inverse (%.2f) = %.3f\n",VALUE,log(Z));}
							else{printf("MATH ERROR!");}
							break;
						}
						case 3:{
							if(VALUE<=-1 || VALUE>=1) {printf("MATH ERROR!");}
							else {Z=(VALUE+1)/(1-VALUE);
							printf("Tanh Inverse (%.2f) = %.3f\n",VALUE,log(Z)/2);}
							break;
						}
						case 4:{
							if(VALUE>0){Z=(1+root(1+(VALUE*VALUE),2))/VALUE;
							printf("Cosech Inverse (%.2f) = %.3f\n",VALUE,log(Z));}
							else {printf("MATH ERROR!");}
							break;
						}
						case 5:{
							if(VALUE>0 && VALUE<=1){Z=(1+root(1-(VALUE*VALUE),2))/VALUE;
							printf("Sech Inverse (%.2f) = %.3f\n",VALUE,log(Z));}
							else {printf("MATH ERROR!");}
							break;
						}
						case 6:{
							if(VALUE<=1 && VALUE>=-1){printf("MATH ERROR!");}
							else {Z=(VALUE+1)/(VALUE-1);
							printf("Coth Inverse (%.2f) = %.3f\n",VALUE,log(Z)/2);}
							break;
						}
						default:{
							printf("INVALID INPUT!");
							break;
						}
					}
					break;
				}
				default:{
					printf("INVALID INPUT!");
					break;
				}
			}
			break;
		}
		case 5:{
			system("COLOR 30");//aqua
			printf("PRESS:\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Division.\n5.Modulus.\n6.Conjugate.\n");
			printf("Enter your choice : ");
			scanf("%d",&COMP);
			system("CLS");
			switch(COMP){
   				case 1:{
   					printf("Enter the 1st complex number \n");
   					a = read();
   					printf("\nEnter the 2nd complex number \n");
   					b = read();
   					c = add(a, b);
					printf("(");write(a);printf(") + (");write(b);printf(") = ");write(c);
					break;
				}
				case 2:{
					printf("Enter the 1st complex number \n");
   					a = read();
   					printf("\nEnter the 2nd complex number \n");
   					b = read();
					c = sub(a, b);
   					printf("(");write(a);printf(") - (");write(b);printf(") = ");write(c);
					break;
				}
				case 3:{
					printf("Enter the 1st complex number \n");
   					a = read();
   					printf("\nEnter the 2nd complex number \n");
   					b = read();
					c = mul(a, b);
  					printf("(");write(a);printf(") X (");write(b);printf(") = ");write(c);
					break;
				}
				case 4:{
					printf("Enter the 1st complex number \n");
   					a = read();
   					printf("\nEnter the 2nd complex number \n");
   					b = read();
					c = divis(a, b);
   					printf("(");write(a);printf(") / (");write(b);printf(") = ");write(c);
					break;
				}
				case 5:{
					printf("Enter the Complex number \n");
   					a = read();
   					MOD = mod(a);
   					printf("%.3f",MOD);
					break;
				}
				case 6:{
					printf("Enter the Complex number \n");
   					a = read();
   					c = conjug(a);
   					write(c);
					break;
				}
				default:{
					printf("INVALID INPUT!");
					break;
				}
			}
   			break;
   		}
		case 6:{
			system("COLOR 80");//grey
			printf("PRESS:\n1.Addition.\n2.Subtraction.\n3.Multiplication.\n4.Determinant.\n");
			printf("Enter your choice : ");
			scanf("%d",&MAT);
			system("CLS");
			switch(MAT){
				case 1:{
				printf("Enter the number of Rows and Column for Matrices : ");
				scanf("%d %d",&R1,&C1);
				float A[R1][C1],B[R1][C1],C[R1][C1];
   				getMatrixElements(R1, C1, A);
   				getMatrixElements(R1, C1, B);
   				system("CLS");
				for(int i=0;i<R1;i++){
					for(int j=0;j<C1;j++){
						C[i][j]=A[i][j]+B[i][j];
					}
				}
   				display(R1, C1, C);
					break;
				}
				case 2:{
				printf("Enter the number of Rows and Column for Matrices : ");
				scanf("%d %d",&R1,&C1);	
				float A[R1][C1], B[R1][C1], C[R1][C1];
				getMatrixElements(R1, C1, A);
   				getMatrixElements(R1, C1, B);
   				system("CLS");
				for(int i=0;i<R1;i++){
					for(int j=0;j<C1;j++){
						C[i][j]=A[i][j]-B[i][j];
					}
				}
   				display(R1, C1, C);
				break;
				}
				case 3:{
				printf("Enter rows and column for the first matrix: ");
   				scanf("%d %d", &R1, &C1);
   				printf("Enter rows and column for the second matrix: ");
   				scanf("%d %d", &R2, &C2);
   				while (C1 != R2) {
      			printf("Error! Enter rows and columns again.\n");
      			printf("Enter rows and columns for the first matrix: ");
      			scanf("%d %d", &R1, &C1);
      			printf("Enter rows and columns for the second matrix: ");
      			scanf("%d %d", &R2, &C2);
   				}
   				float A[R1][C1], B[R2][C2], C[R1][C2];
   				getMatrixElements(R1, C1, A);
   				getMatrixElements(R2, C2, B);
   				system("CLS");
   				for (int i = 0; i < R1; ++i) {
      				for (int j = 0; j < C2; ++j) {
         				C[i][j] = 0;
      				}
   				}
   				for (int i = 0; i < R1; ++i) {
      				for (int j = 0; j < C2; ++j) {
        				 	for (int k = 0; k < C1; ++k) {
            				C[i][j] = C[i][j] + A[i][k] * B[k][j];
         					}
      				}
   				}
   				display(R1, C2, C);
				break;
				}
				case 4:{
					printf("Enter the number of Rows and Column for Matrices : ");
					scanf("%d",&R1);	
					float A[R1][R1], X[R1], RATIO, DET=1;
					getMatrixElements(R1, R1, A);
					system("CLS");
					for(int i=0;i< R1;i++){
		  				if(A[i][i] == 0.0){
			   			printf("Mathematical Error!");}
		  				for(int j=i+1;j< R1;j++){
			   			RATIO = A[j][i]/A[i][i];
			   			for(int k=0;k< R1;k++){
			  			A[j][k] = A[j][k] - RATIO*A[i][k];
							}
		  				}
	 				}
	 				for(int i=0;i< R1;i++){
         					DET = DET * A[i][i];}
						printf("\n\nDeterminant of given matrix is: %.3f", DET);
					break;
				}
				default:{
					printf("INVALID INPUT!");
					break;
				}
			}
			break;
		}
		case 7:{
			system("COLOR C0");//light red
			int vec;
			printf("PRESS:\n1.Addition.\n2.Subtraction.\n3.Dot product.\n4.Cross product.\n");
			printf("Enter your choice: ");
			scanf("%d",&vec);
			if(vec<=0||vec>4){
			system("CLS");
			printf("INVALID INPUT!\n");
			break;}
			system("CLS");
			struct vector vector1={0,0,0},vector2={0,0,0},addition={0,0,0},subtraction={0,0,0},cp={0,0,0};
			printf("Enter value of x: ");
			scanf("%f",&vector1.x);
			printf("Enter value of y: ");
			scanf("%f",&vector1.y);
			printf("Enter value of z: ");
			scanf("%f",&vector1.z);
			if(vector1.y<0){printf("Vector#1: %.2fi%.2fj+%.2fk\n",vector1.x,vector1.y,vector1.z);}
			else if(vector1.z<0){printf("Vector#1: %.2fi%.2fj%.2fk\n",vector1.x,vector1.y,vector1.z);}
			else{printf("Vector#1: %.2fi+%.2fj+%.2fk\n",vector1.x,vector1.y,vector1.z);}
			printf("Enter value of x: ");
			scanf("%f",&vector2.x);
			printf("Enter value of y: ");
			scanf("%f",&vector2.y);
			printf("Enter value of z: ");
			scanf("%f",&vector2.z);
			if(vector2.y<0){printf("Vector#2: %.2fi%.2fj+%.2fk\n",vector2.x,vector2.y,vector2.z);}
			else if(vector2.z<0){printf("Vector#2: %.2fi+%.2fj%.2fk\n",vector2.x,vector2.y,vector2.z);}
			else{printf("Vector#2: %.2fi+%.2fj+%.2fk\n",vector2.x,vector2.y,vector2.z);}
			switch(vec){
				case 1:{
					addition=vectorAdd(vector1,vector2);
					if(addition.y<0){printf("After adding the two vectors will be: %.2fi%.2fj+%.2fk.\n", addition.x,addition.y,addition.z);}
					else if(addition.z<0){printf("After adding the two vectors will be: %.2fi+%.2fj%.2fk.\n", addition.x,addition.y,addition.z);}
					else{printf("After adding the two vectors will be: %.2fi+%.2fj+%.2fk.\n", addition.x,addition.y,addition.z);}
					break;
				}
				case 2:{
					subtraction=vectorSub(vector1,vector2);
					if(subtraction.y<0){printf("After subtracting the two vectors will be: %.2fi%.2fj+%.2fk.\n", subtraction.x,subtraction.y,subtraction.z);}
					else if(subtraction.z<0){printf("After subtracting the two vectors will be: %.2fi+%.2fj%.2fk.\n", subtraction.x,subtraction.y,subtraction.z);}
					else{printf("After subtracting the two vectors will be: %.2fi+%.2fj+%.2fk.\n", subtraction.x,subtraction.y,subtraction.z);}
					break;
				}
				case 3:{
					printf("After taking dot product of the two vectors, the answer is: %.2f.\n",dotProduct(vector1,vector2));
					break;
				}
				case 4:{
					cp=crossProduct(vector1,vector2);
					printf("After taking cross product of the two vectors, the answer is: %.2fi-%.2fj+%.2fk.\n",cp.x,cp.y,cp.z);
					break;
				}
			}
			break;
		}
		case 8:{
			system("COLOR 60");//yellow
			int unit;
			printf("PRESS:\n1.Temprature Conversion.\n2.Distance Conversion.\n3.Mass Conversion.\n4.Angle Conversion.\n");
			printf("Enter your choice : ");
			scanf("%d",&unit);
			system("CLS");
			switch(unit){
				case 1:{
					temperature();
					break;
				}
				case 2:{
					distance();
					break;
				}
				case 3:{
					mass();
					break;
				}
				case 4:{
					angle();
					break;
				}
				default:{
					printf("INVALID INPUT!");
					break;
				}
			}
			break;
		}
		case 9:{
			system("COLOR 40");//red
			int constant;
			char E[15][15]={"3X10^8","1.6X10^-19","9.1X10^-31","1.67X10^-27","6.67X10^-12","6.63X10^-34","9.8","3.14159","9X10^9","8.85X10^-12","1.38X10^-23","6.022X10^23","8.314","1.76X10^11"};
			printf("PRESS:\n1.Speed of light.\n2.Charge of electron/proton.\n3.Mass of electron.\n4.Mass of proton/neutron.\n5.Gravitational constant.\n6.Plank's Constant.\n");
			printf("7.Gravity of earth.\n8.Value of PI.\n9.Coulomb's constant.\n10.Permittivity of space.\n11.Boltzmans's constant.\n12.Avogadro's Number.\n13.Gas constant.\n");
			printf("14.(e/m) ration of electron.\n");
			printf("Enter your choice: ");
			scanf("%d",&constant);
			system("CLS");
			if(constant<=0||constant>14){printf("INVALID INPUT!\n");}
			for (int i=0;i<15;i++){
				if(i+1==constant){
					printf("%s",E[i]);
				}
			}
			break;
		}
		case 0:{
			exit(0);
			break;
		}
		default:{
			printf("INVALID INPUT!");
			break;
		}
		}
		printf("\nDo you want to continue?PRESS 1, else PRESS 0.\n");
		scanf("%d",&cont);
		system("COLOR 0F");
		system("CLS");
		i++;}while(cont==1);	
	return 0;
}

