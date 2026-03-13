#include <stdio.h>
#include <string.h>

int main() {

    // Input and Output

    int myIntNum = 0; //int
    char name[30]; //C string using Array char
    float myFloatNum = 0; //Float
    double myDoubleNum = 0; //double

    printf("\nEnter Full Name: "); //scanf is for user input
    fgets(name, sizeof(name), stdin);
    name[strcpsn(name, "\n")] = 0;
    scanf("%s", name); //%s is string when you have char array and to display the string
    printf("Enter your age: "); 
    scanf("%i", &myIntNum); //%i or %d to display int
    printf("Enter your Queue number: ");
    scanf("%f", &myFloatNum); //%f or $F to display float
    printf("Enter your Money amount: ");
    scanf("%lf", &myDoubleNum); //%lf to display double

    printf("\nFull Name: %s", name);
    printf("\nAge: %i", myIntNum);
    printf("\nQueue Number: %.0f", myFloatNum);
    printf("\nBalance: %.2f", myDoubleNum); 


    return 0;

}