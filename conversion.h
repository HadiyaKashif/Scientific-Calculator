void temperature(){
	int i;
	float f,c;
	printf("PRESS:\n1.Celsius to Fahrenheit.\n2.Fahrenheit to Celsius.\n");
	printf("Enter your choice: ");
	scanf("%d",&i);
	switch (i){
		case 1:
			printf("Enter the temperature in celcius:\n");
			scanf("%f",&c);
			f=c*9/5 +32;
			printf("Temperature in farenheit:%.3f\n",f);
			break;
		case 2:
		     printf("Enter the temerature in fahrenheit:\n");
			scanf("%f",&c);
			f=(c-32)*5/9;
			printf("Temperature in celcius:%.3f\n",f);
			break;
		default: printf("INVALID INPUT");break;								
	}
}
void distance(){
	float d,km1,km2,m1,m2,cm1,cm2;
	int i;
	printf("PRESS:\n1.Kilometers to meters:\n2.Kilometers to centimeters:\n3.Meters to kilometers:\n");
	printf("4.Meters to centimeter:\n5.Centimeters to meters:\n6.Centimeters to kilometers:\n");
	printf("Enter your choice: ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("Enter your distance in kilometers:\n");
		     scanf("%f",&d);
		     km1=1000*d;
		     printf("%.3f",km1);
		     break;
		case 2:
			printf("Enter your distance in kilometers:\n");
		     scanf("%f",&d);
		     km2=1000000*d;
		     printf("%.3f",km2);
		     break;
		case 3:
			printf("Enter your distance in meters:\n");
		     scanf("%f",&d);
		     m1=d/1000;
		     printf("%.3f",m1);
		     break; 
	     case 4:
			printf("Enter your distance in meters:\n");
		     scanf("%f",&d);
		     m1=d*100;
		     printf("%.3f",m1);
		     break;      
		 case 5:
			printf("Enter your distance in centimeters:\n");
		     scanf("%f",&d);
		     cm1=d/100;
		     printf("%.3f",m1);
		     break;	
	      case 6:
			printf("Enter your distance in centimeters:\n");
		     scanf("%f",&d);
		     cm2=d/1000000;
		     printf("%.3f",m1);
		     break;
		default : printf("invalide input");
		break;
	}
}
void mass(){
	float m,kg1,kg2,g1,g2,mg1,mg2;
	int i;
	printf("PRESS:\n1.Kilograms to grams:\n2.Kilograms to milligrams:\n3.Grams to kilograms:\n");
	printf("4.Grams to milligrams:\n5.Milligrams to kilograms:\n6.Milligrams to grams:\n");
	printf("Enter your choice: ");
	scanf("%d",&i);
	switch(i){
		case 1:
			printf("Enter your mass in kilograms:\n");
		     scanf("%f",&m);
		     kg1=1000*m;
		     printf("%.3f",kg1);
		     break;
		case 2:
			printf("Enter your mass in kilograms:\n");
		     scanf("%f",&m);
		     kg2=1000000*m;
		     printf("%.3f",kg2);
		     break;
		case 3:
			printf("Enter your mass in grams:\n");
		     scanf("%f",&m);
		     g1=m/1000;
		     printf("%.3f",g1);
		     break; 
	     case 4:
			printf("Enter your distance in meters:\n");
		     scanf("%f",&m);
		     g2=m*1000;
		     printf("%.3f",g2);
		     break;      
		 case 5:
			printf("Enter your mass in milligrams:\n");
		     scanf("%f",&m);
		     mg1=m/100;
		     printf("%.3f",mg1);
		     break;	
	      case 6:
			printf("Enter your distance in centimeters:\n");
		     scanf("%f",&m);
		     mg2=m/100000;
		     printf("%.3f",mg2);
		     break;
		default : printf("INVALID INPUT");
		          break;	
	}
}
void angle(){
	float rad,deg;
	int ang;
	printf("PRESS:\n1.Degree to Radian.\n2.Radian to Degree.\n");
	printf("Enter your choice: ");
	scanf("%d",&ang);
	switch(ang){
		case 1:{
			printf("Enter the value: ");
			scanf("%f",&deg);
			printf("%.3f",deg*(3.14159/180));
			break;
		}
		case 2:{
			float numerator,denominator;
			printf("Enter the numerator and denominator: ");
			scanf("%f %f",&numerator,&denominator);
			rad = (numerator/denominator)*180;
			printf("%.3f",rad);
			break;
		}
		default:{
			printf("INVALID INPUT!");
			break;
		}
	}
}
