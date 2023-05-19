#include <stdio.h>
#include <stdlib.h>

///converts a base ten number to a binary/base two number
void BaseTenToBinary(int baseTen, int variables, int outputArray[]) {
    int remainder = baseTen;
    for (int i = 0; i < variables; ++i) {
        if (remainder % 2 == 1) {
        	outputArray[variables - 1 - i] = 1;
        }
        else {
        	outputArray[variables - 1 - i] = 0;
        }
        remainder = remainder / 2;
    }
}
///creates an empty array of length 'variables'
void loadEmptyArray(int variables, int array[]) {
	for (int i = 0; i < variables; ++i) {
		array[i] = 0;
	}
}



int main() {

	int variables = 4;
	int array[variables];
	loadEmptyArray(variables, array);
	
///checks for errors by comparing the base ten to the base 2 number representation of
///all possible 4-variable numbers
    for (int i = 0; i < 16; ++i) {
    	BaseTenToBinary(i, 4, array);
    	printf("%d = ", i);
    	for (int i = 0; i < 4; ++i) {
    		printf("%d", array[i]);
    	}
    	printf("\n");
    }


    return 0;
}
