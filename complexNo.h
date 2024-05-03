struct complex{
   float real, imag;
 }a, b, c, d;
   struct complex read(void);
   void write(struct complex);
   struct complex add(struct complex, struct complex);
   struct complex sub(struct complex, struct complex);
   struct complex mul(struct complex, struct complex);
   struct complex divis(struct complex, struct complex);

struct complex read(void){
   struct complex t;
   printf("Enter the real part : ");
   scanf("%f",&t.real);
   printf("Enter the imaginary part : ");
   scanf("%f",&t.imag);
   return t;
}
void write(struct complex d) {
   printf("%.2f + i %.2f", d.real, d.imag);
}
struct complex add(struct complex p, struct complex q){
   struct complex t;
   t.real = (p.real + q.real);
   t.imag = (p.imag + q.imag);
   return t;
}
struct complex sub(struct complex p, struct complex q){
   struct complex t;
   t.real = (p.real - q.real);
   t.imag = (p.imag - q.imag);
   return t;
}
struct complex mul(struct complex p, struct complex q){
   struct complex t;
   //(a+ib)(c+id)=(ac-bd)+i(ad+bc)
   t.real=(p.real * q.real) - (p.imag * q.imag);
   t.imag=(p.real * q.imag) + (p.imag * q.real);
   return t;
}
struct complex divis(struct complex p, struct complex q){
   struct complex t;
   //(a+ib)/(c+id)=(ac+bd)/(c^2+d^2)+i(bc-ad)/(c^2+d^2)
   t.real = ((p.real * q.real) + (p.imag * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   t.imag = ((p.imag * q.real) - (p.real * q.imag)) / ((q.real * q.real) + (q.imag * q.imag));
   return t;
}
float mod(struct complex);
struct complex conjug(struct complex);
float mod(struct complex p){
	struct complex t;
	float h;
	t.real=p.real*p.real;
	t.imag=p.imag*p.imag;
	h=sqrt((t.real+t.imag));
	return (float)h;
}
struct complex conjug(struct complex q){
	struct complex t;
	t.real=q.real;
	t.imag=-q.imag;
	return t;
}
