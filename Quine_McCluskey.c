#include <stdio.h>
#include <stdlib.h>

void BaseTenToBinary(int baseTen, int variables) {
    int binaryArray[variables];
    int remainder = baseTen;
    for (int i = 0; i < variables; ++i) {
        if (remainder % 2 == 1) {
            binaryArray[variables - 1 - i] = 1;
        }
        else {
            binaryArray[variables - 1 - i] = 0;
        }
        remainder = remainder / 2;
    }

    for (int i = 0; i < variables; ++i) {
    	printf("%d", binaryArray[i]);
    }
    printf("\n");
}


/*void *BaseTenToBinary(int baseTen, int variables) {
    int* binaryArray = (int*)malloc(sizeof(int) * variables);
    int remainder = baseTen;
    for (int i = 0; i < variables; ++i) {
        if (remainder % 2 == 1) {
            binaryArray[variables - 1 - i] = 1;
        }
        else {
            binaryArray[variables - 1 - i] = 0;
        }
        remainder = remainder / 2;
    }

    return binaryArray;
}*/



int main() {

/*    for (int i = 0; i < 16; ++i) {
        int a = BaseTenToBinary(i, 4);
    	printf("%d = %d\n", i, a);
    }*/

	for (int i = 0; i < 16; ++i) {
		printf("%d in binary = ", i);
		BaseTenToBinary(i, 4);
	}


    return 0;
}
