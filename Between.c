#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isBetween(int number, int low, int high) {
    if((low < number) && (high > number)){
        return true;
    }else {
        return false;
    }
}

int main(){
    bool between = isBetween(5, 3, 10);
    printf("%s\n", between ? "True" : "False");
    return 0;
}