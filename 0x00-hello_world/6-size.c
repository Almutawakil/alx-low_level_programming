#include<stdio.h>
int main(void)
{
	printf("Size of char: %Id byte(s)\n", sizeof(char));
	printf("Size of int: %Id byte(s)\n", sizeof(int));
	printf("Size of long int: %Id byte(s)\n", sizeof(long int));
	printf("Size of long long int: %Id byte(s)\n", sizeof(long long int));
	printf("Size of float: %Id byte(s)\n", sizeof(float));
	return(0);
}
