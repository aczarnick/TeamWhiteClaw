#include <stdio.h>
#include <string.h>

void function1(int, int, int* );
void function2(int, int, int* );

int main(){
    int selection = 1; 
    int num1 = 10, num2 = 5;
    int result = 0;
    switch (selection)
    {
    case 1 :
        function1(num1, num2, &result);
        break;
    case 2: 
        function2(num1, num2, &result);
        break;
    default:
        printf("Invalid Selection\n");
        break;
    }
    printf("%d\n", result);
    return 0;
}

void function1(int x, int y, int* result){
    *result = x * y;
}

void function2(int x, int y, int* result){
    if (y != 0){
        *result = x / y;
    }else {
        printf("Cannot divide by zero.\n");
    }
}