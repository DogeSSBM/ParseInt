#include "getInt.h"

int main(int argc, char const *argv[])
{
	if(argc > 1){
		printf("Inputs as strings:\n");
		for(int i = 1; i < argc; i++){
			printf("%s\n", argv[i]);
		}
		printf("\nInputs as ints:\n");
		for(int i = 1; i < argc; i++){
			printf("%d\n", strToInt(argv[i]));
		}
	}
	else{
		printf("\nEnter a number: ");
		int i = getInt();
		printf("\nYour number: %d\n", i);
	}
	return 0;
}
