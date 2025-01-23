#include <stdio.h>
#include <math.h>

// Function declarations
int calculator();
int temperature();
int quadraticeq();
int prime();
int table();
int sqroot();
int ascdes();
int project();
int retycode(int);
int retmcode(int,int);
int retyquo(int);
int retday(int,int,int);
int calcforday(int,int,int,int,int);
int calendarday();
int matrixop();


int calculator() {
	float n1, n2, result;
	char c;
	char ch;

	printf("\nEnter 1st number:\t");
	scanf("%f", &n1);
	printf("Enter an operator (+ - / * %):\t");
	scanf(" %c", &c);

		printf("Enter next number:\t");
		scanf(" %f", &n2);

		switch (c) {
			case '+':
				result = n1 + n2;
				printf("\n%f + %f = %f", n1, n2, result);
				break;
			case '-':
				result = n1 - n2;
				printf("\n%f - %f = %f", n1, n2, result);
				break;
			case '*':
				result = n1 * n2;
				printf("\n%f * %f = %f", n1, n2, result);
				break;
			case '/':
				if (n2 == 0) {
					printf("Division by 0 is not defined");
				
				} else {
					result = n1 / n2;
					printf("\n%f / %f = %f", n1, n2, result);
				}
				break;
			default:
				printf("\nYou might have chosen a wrong operation :(");
				break;
		}
	printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	calculator();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}

int temperature() {
	float temp, fah, cel;
	char t,ch;

		printf("\nWhich conversion do you want to perform?\n"
		       "1. Celsius to Fahrenheit (Press F)\n"
		       "2. Fahrenheit to Celsius (Press C)\n");
		scanf(" %c", &t);

		if (t == 'f' || t == 'F') {
			printf("\nEnter value of Celsius \n");
			scanf("%f", &temp);
			fah = (9.0 / 5.0) * temp + 32;
			printf("\n%.2f C in Fahrenheit = %.2f F \n", temp, fah);
		} else if (t == 'c' || t == 'C') {
			printf("Enter value of Fahrenheit \n");
			scanf("%f", &temp);
			cel = (temp - 32) * (5.0 / 9.0);
			printf("\n%.2f F in Celsius = %.2f C \n", temp, cel);
		} else {
			printf("\nPlease choose an option correctly");
		
		}

		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	temperature();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
	return 0;
}

int quadraticeq() {
	float a, b, c, d, root;
	char ch;

		printf("\nEnter values of a, b, and c for the quadratic equation: \n");
		scanf("%f %f %f", &a, &b, &c);

		d = (b * b) - (4 * a * c);

		if (d < 0) {
			printf("\nNo real roots exist for this quadratic equation!");
		} else if (d == 0) {
			root = (-b) / (2 * a);
			printf("\nTwo equal real roots exist with the value x = %.2f", root);
		} else {
			printf("\nThe two real roots of x are %.2f and %.2f",
			       (-b + sqrt(d)) / (2 * a),
			       (-b - sqrt(d)) / (2 * a));
		}

	printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	quadraticeq();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}

int prime() {
	int a, flag = 0;
	char ch;

		printf("Enter any number: \n");
		scanf("%d", &a);

		if (a == 1) {
			printf("1 is neither prime nor composite");
		} else if (a == 0) {
			printf("Can't say about it");
		} else {
			for (int i = 2; i <= (a / 2); i++) {
				if (a % i == 0) {
					flag++;
				}
			}
				if (flag == 0) {
			printf("%d is a prime number", a);


		} else {
			printf("%d is not a prime number", a);
		}

		}
	
		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	prime();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}

int table() {
	int n,opt,r,r2;
	char ch;

		printf("\nWhich option do you like to use: \n\t1.Write table of a number( PRESS 1 )\n\t2.Table between range (eg. 1-10) ( PRESS 2 )\n" );
		scanf("%d",&opt);
		if (opt==1) {
			printf("\n\n Enter any number :\t");
			scanf("%d",&n);
			for (int i=1; i<=10; i++) {
				printf("\n%d x %d = %d",n,i,n*i);
			}
		} else if (opt==2) {

			printf("\n\n Enter range to print its table (eg. 1 15) :\t");
			scanf("%d %d",&r,&r2);
			if(r<=r2) {
				for (int i=r; i<=r2; i++) {
					printf("\n\n");
					for(int j=1; j<=10; j++) {
						printf("%d x %d = %d \n",i,j,i*j);
					}

				}
			} else {
				printf("\n You might input wrong number or range !!" "\n(range 1st must smaller than range 2nd)\n");
			}
}
	



		else {
			printf("\n\tinvalid option !!!");
			return 0;
		}

		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	table();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}

int sqroot() {

	float num;
	char ch;
		printf("\nEnter positive integer to get its square root: \t");
		scanf("%f",&num);
		if(num>0){
		printf("\nSquare root of %.3f = %.3f",num,sqrt(num));
		}
	
	    else {
	    printf("Error ! Number should be greater than 0\n");
	}

		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	sqroot();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}

}

int ascdes() {

	int n,op;
	char ch;
	float temp;
		printf("\nWhich option do you like to use ?\n");
		printf("\n\t1. Ascending order (PRESS 1)\n\t2 .Descending Order (PRESS 2)\n");
		scanf("%d",&op);
		if(op==1) {
			printf("\nEnter how many numbers you have : ");
			scanf("%d", &n);
			float a[n];
			printf("\nEnter %d numbers:\n",n);
			for(int i=0; i<n; i++) {
				scanf("%f", &a[i]);
			}
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					if(a[i]>a[j]) {
						temp= a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			printf("\nGiven  numbers in Ascending order : \n\n");
			for (int i=0; i<n; i++) {
				printf("%.2f ", a[i]);
			}
			printf("\n\n");
		}

		else if (op==2) {
			printf("\nEnter how many numbers you have : ");
			scanf("%d", &n);
			float a[n];
			printf("\nEnter %d numbers:\n",n);
			for(int i=0; i<n; i++) {
				scanf("%f", &a[i]);
			}
			for(int i=0; i<n; i++) {
				for(int j=i+1; j<n; j++) {
					if(a[i]<a[j]) {
						temp= a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
			}
			printf("\nGiven  numbers in Descending order : \n\n");
			for (int i=0; i<n; i++) {
				printf("%.2f ", a[i]);
			}
			printf("\n\n");

		} else {
			printf("\nYou chose wrong option\n");
		}
		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   	ascdes();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}



int calendarday() {

	int day,month,year,ycode,mcode,wcode,trimyear,yearq,nameofday;
	char ch;

		printf("\nEnter any date (eg. 15 08 1947)\n");
		scanf("%d %d %d",&day,&month,&year);
		trimyear=year%100;
		yearq=retyquo(trimyear);
		ycode=retycode(year);
		mcode=retmcode(month,year);
		nameofday=calcforday(day,mcode,ycode,trimyear,yearq);
		retday(nameofday,month,year);
		printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   calendarday();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		    return 0;
		}
}

int retycode(int year) {
	if(year>=1400 && year<1500) {
		return 2;
	} else if(year>=1500 && year<1600) {
		return 0;
	} else if(year>=1600 && year<1700) {
		return 6;
	} else if(year>=1700 && year<1800) {
		return 4;
	} else if(year>=1800 && year<1900) {
		return 2;
	} else if(year>=1900 && year<2000) {
		return 0;
	} else if(year>=2000 && year<2100) {
		return 6;
	} else if(year>=2100 && year<2200) {
		return 4;
	} else if(year>=2200 && year<2300) {
		return 2;
	} else if (year>=2300 && year<2400) {
		return 0;
	}
}

int retmcode(int month,int year) {
	if(month==1) {
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

			return 0;
		} else
			return 1;
	} else if(month==2) {
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {

			return 3;
		} else
			return 4;
	} else if(month==3) {
		return 4;
	} else if(month==4) {
		return 0;
	} else if(month==5) {
		return 2;
	} else if(month==6) {
		return 5;
	} else if(month==7) {
		return 0;
	} else if(month==8) {
		return 3;
	} else if(month==9) {
		return 6;
	} else if (month==10) {
		return 1;
	} else if (month==11) {
		return 4;
	} else if (month==12) {
		return 6;
	}
}

int retyquo(int trimyear) {
	return trimyear/4;
}

int calcforday(int day, int mcode, int ycode, int trimyear,int yearq) {
	return day+mcode+ycode+trimyear+yearq;
}


int retday(int nameofday, int month,int year) {

	nameofday=nameofday%7;


	switch(nameofday) {
		case 1:
			printf("\n The day is SUNDAY\n");
			break;
		case 2:
			printf("\n The day is MONDAY\n");
			break;
		case 3:
			printf("\n The day is TUESDAY\n");
			break;
		case 4:
			printf("\n The day is WEDNESDAY\n");
			break;
		case 5:
			printf("\n The day is THURSDAY\n");
			break;
		case 6:
			printf("\n The day is FRIDAY\n");
			break;
		case 0:
			printf("\n The day is SATURDAY\n");
			break;
		default:
			return 0;
			break;
	}
}


 int matrixop(){
 	int rw,cl,i,j,k,opr;
 	char ch;
	
	printf("\nWhich operation of matrix you want to perform?\n""\n1.Addition[PRESS 1]""\n2.Substraction [PRESS 2]\n\n");
	scanf("%d",&opr);
	
			printf("Enter rows and column of both matrix\n");
	scanf("%d %d",&rw,&cl);


	int matrix1[rw][cl],matrix2[rw][cl],matrix3[rw][cl];
    printf("\nEnter elements of 1st matrix\n");
    for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		scanf("%d",&matrix1[i][j]);
		}
	}
	 printf("\nEnter elements of 2nd matrix\n");
	for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		scanf("%d",&matrix2[i][j]);
		}
	}
	if(opr==1){
		for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
	printf("\nAddition of matrices is:\n");
	
	for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		printf("%d  ",matrix3[i][j]);
		}
		printf("\n");
	}
	}
	
	else if (opr==2){
		for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		matrix3[i][j]=matrix1[i][j]-matrix2[i][j];
		}
	}
	printf("\nSubstraction of matrices is:\n");
	
	for(i=0;i<rw;i++){
    	for(j=0;j<cl;j++){
    		printf("%d  ",matrix3[i][j]);
		}
		printf("\n");
	}
	}
	else
	{
		printf("\n You might not chose inavlid operation");
	}
	
	printf("\nDo you still want to continue (PRESS Y/N): ");
		scanf(" %c", &ch);

		if (ch == 'y' || ch == 'Y') {
		   matrixop();
		
		} else if (ch == 'n' || ch == 'N') {
			printf("\nQuitted successfully..!\n");
			return 0;
		}
		else {
		    printf("\n You chose wrong option quitting !");
		}
	
	 
 }


int main() {
	project();
	return 0;
}

int project() {
	int a;

	do {
		printf("\n\nWhich feature would you like to explore?\n\n"
		       "1. Calculator (Press 1)\n"
		       "2. Temperature Converter (Press 2)\n"
		       "3. Quadratic Equation Solution (Press 3)\n"
		       "4. Prime Number Checker (Press 4)\n"
		       "5. Multiplication Table (Press 5)\n"
		       "6. Square Root of Numbers (Press 6)\n"
		       "7. Ascending or Descending of given numbers (Press 7)\n"
		       "8. Day of any date (Press 8)\n"
		       "9. Matrix operations (Press 9)\n"
		       "10. Quit (Press 0)\n"
			   "\n\n-------More Features on the way--------\n\n");

		scanf(" %d", &a);

		switch (a) {
			case 1:
				printf("\nYou chose Calculator :)\n");
				calculator();
				break;
			case 2:
				printf("\nYou chose Temperature Converter :)\n");
				temperature();
				break;
			case 3:
				printf("\nYou chose Quadratic Equation Solution :)\n");
				quadraticeq();
				break;
			case 4:
				printf("\nYou chose Prime Number Checker :)\n");
				prime();
				break;
			case 5:
				printf("\nYou chose Multiplication Table :)\n");
				table();
				break;
			case 6:
				printf("\nYou chose Square Root Finder :)\n");
				sqroot();
				break;
			case 7:
				printf("\nYou chose ascending descending finder :)\n");
				ascdes();
				break;
			case 8:
				printf("\nYou chose day of any daye finder :)\n");
				calendarday();
				break;
				
			case 9:
				printf("\nYou chose matrix operation :)\n");
				matrixop();
				break;

			case 0:
				printf("\nProgram Quitted Successfully [Thank You For Using].\n");
				break;
			default:
				printf("\nInvalid option. Please try again.\n");
				break;
		}
	} while ( a != 0);

	return 0;
}
