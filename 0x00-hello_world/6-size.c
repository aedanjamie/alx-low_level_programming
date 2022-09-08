#include<stdio.h>

int main(void)
{
	printf("The size of a char is: %lu byte(s).\n", sizeof(char));
	printf("the size of an int is: %lu byte(s).\n", sizeof(int));
	printf("The size of a long int is: %lu byte(s).\n", sizeof(long int));
	printf("The size of a long long int is: %lu byte(s).\n", sizeof(long long int));
	printf("The size of a float is: %lu byte(s).\n", sizeof(float));
	return (0);
}

