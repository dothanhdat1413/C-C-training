#include <stdio.h>

union Data {
    int integer;
    float floatingPoint;
    char character;
};

int main() {
    union Data data;
    
    data.integer = 10;
    printf("Integer: %d\n", data.integer);
    
    data.floatingPoint = 3.14;
    printf("Floating Point: %.2f\n", data.floatingPoint);
    
    
    printf("Interger': %d\n", data.integer);
    
    return 0;
}

