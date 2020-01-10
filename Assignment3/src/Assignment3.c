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

// -------------------------------------------------------------------- Q.5 -----------------------------------------------------------
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

// --------------------------------------------------------------- Q.6 ---------------------------------------------------------

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

// -------------------------------------------------------------------------- Q.7 ---------------------------------------------------------------

