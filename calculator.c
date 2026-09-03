#include <stdio.h>

int add(int a, int b);
float sub(float a, float b);
float mult(float a, float b);

int main(){
    add(5,10);
    sub(10,5);
    mult(13, 7);
    return 0;
}

int add(int a, int b){
    return a + b;
}

float sub(float a, float b){
    return a-b;
}

float mult(float a, float b){
    return a * b;
}