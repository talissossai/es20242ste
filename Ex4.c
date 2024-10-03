#include <stdio.h>

int main() {
	int cont; 

    printf("Tabuada do 7:\n ");

    for (cont = 1; cont <= 10; cont++) {
        printf("7 x %d = %d\n", cont, 7 * cont);
    }

    return 0;
}
