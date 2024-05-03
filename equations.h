float linearEq(float a,float b){
	float x= -b/a;
	return x;
}
void quadraticEq(float a,float b,float c){
	float x1,x2,dis,realPart,imgPart;
	dis= (b * b)-(4 * a * c);
	if(dis>0){
		x1=(-b+sqrt(dis))/(2*a);
		x2=(-b-sqrt(dis))/(2*a);
		printf("The roots of given equation are real and distinct.\nRoots are: %.2f and %.2f", x1, x2);}
	else if(dis==0){
		x1=x2=-b/(2*a);
		printf("The roots of given equation are real and equal.\nRoot is: %.2f",x1);}
	else{
		realPart = -b/(2 * a);
        imgPart = sqrt(-dis)/(2 * a);
        printf("The roots of given equation are complex and distinct.\nRoots are: %.2f+%.2fi and root2 = %.2f-%.2fi", realPart, imgPart, realPart, imgPart);}
	return;			
}
