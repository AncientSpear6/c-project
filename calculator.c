#include <stdio.h>

int add(int a, int b);
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);

int main(){
    add(5,10);
    sub(10,5);
    mult(13, 7);
    div(3, 2);
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

float div(float a, float b){
    if(a != 0){
        if(b != 0){
            return a / b;
        }
        else{
            printf("Cannot divide by zero");
        }
    }
}