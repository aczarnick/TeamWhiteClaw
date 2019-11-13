#include <stdio.h>
#include <string.h>

void multiply(int, int, int* );
void divide(int, int, int* );

int main(){
    int selection = 1; 
    int num1 = 10, num2 = 5;
    int result = 0;
    switch (selection)
    {
    case 1 :
        multiply(num1, num2, &result);
        break;
    case 2: 
        divide(num1, num2, &result);
        break;
    default:
        printf("Invalid Selection\n");
        break;
    }
    printf("%d\n", result);
    return 0;
}

void multiply(int x, int y, int* result){
    *result = x * y;
}

void divide(int x, int y, int* result){
    if (y != 0){
        *result = x / y;
    }else {
        printf("Cannot divide by zero.\n");
    }
}