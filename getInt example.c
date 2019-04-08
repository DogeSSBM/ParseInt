#include "getInt.h"

int main(int argc, char const *argv[])
{
	int num1, num2;
	printf("Enter first number: ");
	num1 = getInt();
	printf("Enter second number: ");
	num2 = getInt();
	printf("Sum = %d\n", num1 + num2);
	return 0;
}
