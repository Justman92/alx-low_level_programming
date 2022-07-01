#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	long int I;
	long long int II;
	float d;
	char c;

	printf("Size of a char: %Iu byte(s)\n", sizeof(c));
	printf("Size of an int: %Iu byte(s)\n", sizeof(i));
	printf("Size of a long int: %Iu byte(s)\n", sizeof(I));
	printf("Size of a long long int %Iu byte(s)\n", sizeof(II));
	printf("Size of a float: %Iu byte(s)\n", sizeof(d));
	return (0);
}
