#include <stdio.h>

int function(int number1, int number2) {
    int result = number1;
    for(int i = 2; i <= number2; i++){
        result = result * number1;
    }
    return result;
}

int main(){
    int result = function(2, 3);
    printf("%d\n", result);
    return 0;
}
