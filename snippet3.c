#include <stdio.h>
#include <string.h>

int main() {
    for(int i = 1; i <= 3; i++){
        for(int j = 0; j < i; j++){
            printf("*\n");
        }
        printf("..\n");
    }
    return 0;
}