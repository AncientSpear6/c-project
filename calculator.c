#include <stdio.h>

float add(float a, float b);//prototypes of functions
float sub(float a, float b);
float mult(float a, float b);
float div(float a, float b);

int main(){
    int operation;
    float ans;
    float a, b, c=1;
    while(1){ //allows for multiple uses of the program
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division or 0 to quit: ");
    scanf("%d", &operation);
    if(operation < 0.0 || operation > 4){//error handling for invalid input
        printf("Invalid input");
    }
    if(operation == 0){//used to quit program
        printf("Goodbye");
        return 0;
    }
    if(operation == 1){
        printf("Enter 2 numbers to add: ");
        scanf("%f %f", &a, &b);
        ans = add(a, b);
        printf("%f\n", ans);
    }
    if(operation == 2){
        printf("Enter 2 numbers to subtract: ");
        scanf("%f %f", &a, &b);
        ans = sub(a, b);
        printf("%f\n", ans);
    }  
    if(operation == 3){
        printf("Enter 2 numbers to multiply: ");
        scanf("%f %f", &a, &b);
        ans = mult(a, b);
        printf("%f\n", ans);
    }
    if(operation == 4){
        printf("Enter 2 numbers to divide: ");
        scanf("%f %f", &a, &b);
        ans = div(a, b);
        printf("%f\n", ans);
    }
}
    return 0;
}

float add(float a, float b){//start of the 4 different functions that handle the math
    float c;
    c = a + b;
    return c;
}

float sub(float a, float b){
    float c;
    c = a-b;
    return c;
}

float mult(float a, float b){
    float c;
    c = a * b;
    return c;
}

float div(float a, float b){
    float c;
    if(b != 0){
        c = a / b;
        return c;
    }
    else{
        printf("Cannot divide by zero");
    }
}