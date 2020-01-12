/*
 ============================================================================
 Name        : Assignment3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// --------------------------------------- Repitition I Q.1 ---------------------------------------------------------------

/*
int main(void) {
	int i;
	char c;
	printf("Enter a charater : ");
	scanf("%c",&c);
	printf("\nEnter a Numer : ");
	scanf("%d",&i);
	while(i--)
		printf("%c",c);
	return EXIT_SUCCESS;
}
*/

// ---------------------------------------------- Q.2 -----------------------------------------------------------------

/*int main(void) {
	int i, j = 1;
	printf("Enter a Number : ");
	scanf("%d", &i);
	while (j <= 10) {
		printf("\n%d x %d = %d", i, j, i * j);
		j++;
	}
}*/

// ---------------------------------------------- Q.3-------------------------------------------------------------------

/*int main(void){
	int getLength(int);
	int a,loop=0,i=0;
	printf("Enter a Number : ");
	scanf("%d",&a);
	int b=a,len;
	len = getLength(a);
	int array[len];
	while(b!=0 || b!=0){
		array[len-1]=b%10;
		len--;
		b/=10;
	}
// Calculate sum of digits of Integer
	int sum=0;
	len = getLength(a);
	printf("\nSum : ");
	while(loop!=len){
		printf("%d",array[loop]);
		if(loop != len-1)
			printf(" + ");
		sum+=array[loop];
		loop++;
	}
	printf(" = %d",sum);
// Reverse the Number
	len = getLength(a);
	printf("\nReverse Number : ");
	while(len){
		printf("%d",array[--len]);
	}
// Check number is palindrome or Not
	int check = 1;
	len = getLength(a);
	for (i = 0; i < len / 2; i++) { // when number is 1 then len=1 hence len/2=0 and condition fails so that we put check=1 by default
		if (array[i] == array[(len - 1) - i])
			check = 1;
		else
			check = 0;
	}
	if (check == 1)
		printf("\n%d number is Palindrome",a);
	else
		printf("\n%d number is Not a Palindrome",a);
// Check of Amstrong Number
	len = getLength(a);
	sum = 0;
	loop = 0;
	i = 0;
	while (loop < len) {
		int sum1 = 1;
		i=0;
		while (i < len) {
			sum1 *= array[loop];
			i++;
		}
		sum +=sum1;
		loop++;
	}
	if(sum==a){
		printf("\n%d is Amstrong number",a);
	}else{
		printf("\n%d is not a Amstrong number",a);
	}
}
int getLength(int b) {
	int len=0;
	while(b%10!=0 || b!=0){
	len++;
	b/=10;
	}
	return len;
}*/

// --------------------------------------------------------------- Q.4 --------------------------------------------------------------

/*int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, loop = 1, fact = 1;
	printf("Enter a Number : ");
	scanf("%d", &i);
	printf("\n Factorial : ");
	while (loop <= i) {
		printf("%d", loop);
		if (loop != i)
			printf(" * ");
		fact *= loop;
		loop++;
	}
	printf(" = %d", fact);
}*/

// -------------------------------------------------------------------- Q.6 -----------------------------------------------------------
// Note : This program works only for Positive Numbers
/*int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	int i,limit,div=2;
	printf("Enter a Number : ");
	scanf("%d",&i);
	if(i%2){
		limit = (i-1)/2;
	}else{
		limit = i/2;
	}
	printf("\n Limit : %d\n",limit);
	printf("Factors are : 1");
	while(div<=limit){
		if(!(i%div)){
			printf(",%d",div);
		}
		div++;
	}
}*/

// --------------------------------------------------------------- Q.7 ---------------------------------------------------------

/*int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, limit, div = 2;
	printf("Enter a Number : ");
	scanf("%d", &i);
	if (i % 2) {
		limit = (i - 1) / 2;
	} else {
		limit = i / 2;
	}
	printf("\n Limit : %d\n", limit);
	printf("Pairs : \n");
	printf("%d x %d", 1, i);
	int temp = 1;
	while (div <= limit) {
		if (!(i % div)) {
			printf("\n%d x %d", div, i / div);
			temp = i / div;
		}
		div++;
		if (div == temp)
			break;
	}
}*/

// -------------------------------------------------------------------------- Q.8 ---------------------------------------------------------------

/*int main(void) {
	void getPrime(int, int);
	setvbuf(stdout, NULL, _IONBF, 0);
	int i, limit, div = 2;
	printf("Enter a Number : ");
	scanf("%d", &i);
	if (i % 2) {
		limit = (i - 1) / 2;
	} else {
		limit = i / 2;
	}
	printf("\n Limit : %d\n", limit);
	printf("Prime Factors are : ");
	getPrime(i, limit);
}
void getPrime(int num, int limit) {
	if (num < 4) {
		printf("%d", num);
	} else {
		int div = 2;
		while (div <= limit) {
			if (!(num % div)) {
				printf("%d", div);
				if (num != div)
					printf(" * ");
				num = num / div;
				div = 1;
			}
			div++;
		}
	}
}*/

// --------------------------------------------------------------------- Q.9 ----------------------------------------------------------------

/*
int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int a, b, temp;
	printf("no1 : ");
	scanf("%d", &a);
	int a1 = a;
	printf("no2 : ");
	scanf("%d", &b);
	int b1 = b;
	while ((a1 % b1) != 0) {
		printf("\n%d %% %d = %d", a1, b1, a1 % b1);
		temp = a1 % b1;
		a1 = b1;
		b1 = temp;
	}
	printf("\n%d %% %d = %d", a1, b1, a1 % b1);
	printf("\nGDC of %d and %d is %d", a, b, b1);
}
*/

// ------------------------------------------------------------------------ B For Loop Q.10 ---------------------------------------------------------------------

/*int main(void) {
	int i;
	printf("Enter a Number : ");
	scanf("%d", &i);
	for (int j = 1; j <= 10; j++) {
		printf("\n%d x %d = %d", i, j, i * j);
	}
}*/

// ------------------------------------------------------------------------------- Q.11 ----------------------------------------------------------------------------

/*int main(void) {
	int i, fact = 1;
	printf("Enter a Number : ");
	scanf("%d", &i);
	for (; i > 0; i--) {
		fact *= i;
	}
	printf("\nFactorial : %d", fact);
}*/

// --------------------------------------------------------------------------------------- Q.12 ------------------------------------------------------------------

/*int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	int b, i, ans = 1;
	printf("Base : ");
	scanf("%d", &b);
	printf("Index : ");
	scanf("%d", &i);
	for (; i > 0; i--) {
		ans *= b;
	}
	printf("\nAnswer = %d", ans);
}*/

// --------------------------------------------------------------------------------------- Q.13 -------------------------------------------------------------------------------

/*int main(void) {
	int i, a = 1, b = 1;
	printf("Enter a number : ");
	scanf("%d", &i);
	printf("\n%d,%d", a, b);
	for (; i > 2; i--) {
		printf(",%d", a + b);
		int temp = b;
		b = a + b;
		a = temp;
	}
}*/

// ------------------------------------------------------------------------------------------ Q.14 -------------------------------------------------------------------------------

/*int main(void) {
	int i, limit, div = 2;
	printf("Enter a Number : ");
	scanf("%d", &i);
	if (i % 2) {
		limit = (i - 1) / 2;
	} else {
		limit = i / 2;
	}
	if(limit<2){
		printf("\n%d is Prime Number", i);
	}
	while (div <= limit) {
		if (!(i % div)) {
			printf("\n%d is Not a Prime Number", i);
			break;
		} else if (div == limit) {
			printf("\n%d is Prime Number", i);
		}
		div++;
	}
}*/

// ----------------------------------------------------------------------------------C Do While Q.15 ----------------------------------------------------------------------------------

/*int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	float a, b;
	int choice;
	do {
		printf("\nSelect Operation by Entering the Numeber : \n");
		printf(
				"1. Addition(+) \n2. Substration(-) \n3. Multiplication(*) \n4. Division(/) \n5. Exit\n Enter Choice : ");
		fflush(stdin);
		scanf("%d", &choice);
		if (choice != 1 && choice != 2 && choice != 3 && choice != 4
				&& choice != 5) {
			printf("Wrong Choice");
			return EXIT_SUCCESS;
		}
		if (choice != 5) {
			printf("Enter two Numbers : ");
			scanf("%f %f", &a, &b);
			printf("\n");
			switch (choice) {
			case 1:
				printf("Addition : %.2f", a + b);
				break;
			case 2:
				printf("Substraction : %.2f", a - b);
				break;
			case 3:
				printf("Multiplication : %.2f", a * b);
				break;
			case 4:
				if (b == 0)
					printf("Error : Divisior should not be ZERO");
				else
					printf("Division : %.2f", a / b);
			}
		}
	} while (choice != 5);
}*/

// -----------------------------------------------------------------------------------Repitition II Q.17 --------------------------------------------------------------------------

/*int main(void){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("* ");
		}
		printf("\n");
	}
}*/

// --------------------------------------------------------------------------------------- Q.18 -------------------------------------------------------------------------------------
// Note : How to print Vertical tables
/*int main(void){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){
			printf("%2d ",i*j);
		}
		printf("\n");
	}
}*/

// ---------------------------------------------------------------------------------------- Q.19 -----------------------------------------------------------------------------------
// Note : How to print Vertical tables
/*int main(void){
	int i,j;
	printf("Enter Two Numbers : \n");
	scanf("%d %d",&i,&j);
	for(;i<=j;i++){
		for(int k=1;k<=10;k++){
			printf("%2d ",i*k);
		}
		printf("\n");
	}
}*/

// ----------------------------------------------------------------------------------------- Q.20 -----------------------------------------------------------------------------------

/*int main(void) {
	int i = 1, limit, div = 2;
	int getLength(int);
	printf("Prime No.s BW 1 to 100 : ");
	while (i <= 100) {
		if (i % 2) {
			limit = (i - 1) / 2;
		} else {
			limit = i / 2;
		}
		if (limit < 2) {
			printf("%d ", i);
		}
		while (div <= limit) {
			if (!(i % div)) {
				break;
			} else if (div == limit) {
				printf("%d ", i);
			}
			div++;
		}
		i++;
		div = 2;
	}
	printf("\nAmstrong No. BW 1 to 500 :");
	int j = 1;
	while (j <= 500) {
		int len = getLength(j);
		int b = j;
		int array[len];
		while (b != 0 || b != 0) {
			array[len - 1] = b % 10;
			len--;
			b /= 10;
		}
		len = getLength(j);
		int sum = 0;
		int loop = 0;
		i = 0;
		while (loop < len) {
			int sum1 = 1;
			i = 0;
			while (i < len) {
				sum1 *= array[loop];
				i++;
			}
			sum += sum1;
			loop++;
		}
		if (sum == j) {
			printf("%d ", j);
		}
		j++;
	}
}
int getLength(int b) {
	int len = 0;
	while (b % 10 != 0 || b != 0) {
		len++;
		b /= 10;
	}
	return len;
}*/

// ----------------------------------------------------------------------------------------- Q.21 -----------------------------------------------------------------------------------------

/*
int main(void) {
	int i, limit, div = 2, check = 0;
	int getLength(int);
	printf("Enter a Number: ");
	scanf("%d", &i);
	i++;
	printf("\n 5 Primes No.s are : ");
	while (check < 5) {
		if (i % 2) {
			limit = (i - 1) / 2;
		} else {
			limit = i / 2;
		}
		if (limit < 2) {
			printf("%d ", i);
			check++;
		}
		while (div <= limit) {
			if (!(i % div)) {
				break;
			} else if (div == limit) {
				printf("%d ", i);
				check++;
			}
			div++;
		}
		i++;
		div = 2;
	}
}
int getLength(int b) {
	int len = 0;
	while (b % 10 != 0 || b != 0) {
		len++;
		b /= 10;
	}
	return len;
}
*/

// ---------------------------------------------------------------------------------------------------- Q.22 ------------------------------------------------------------

int main(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 5; i >= 1; i--) {
		for (int j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d ",j);
		}
		printf("\n");
	}
	for (int i = 5; i >= 1; i--) {
		for (int j = 5; j >= i; j--) {
			printf("%d ", j);
		}
		printf("\n");
	}
	int k=65;
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++){
			printf("%c ",k++);
		}
		printf("\n");
	}
	for (int i = 65; i <=68; i++) {
		for (int j = i; j <= 68; j++) {
			printf("%c ", j);
		}
		printf("\n");
		}
}

// -------------------------------------------------------------------------------------------------------- Q.23 -----------------------------------------------------------------------------------
