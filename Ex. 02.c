#include <stdio.h>
#include <string.h>

int main() {
    
    char vazio[50], str[] = "Ferlini.h";
    
   
    strcpy(vazio, str);
    
    printf("A segunda string eh: %s", vazio);

    return 0;
}
