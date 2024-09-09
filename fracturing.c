//********************************************************
// assignment 1
// Author: Sahiti Kota
// Date: 09/08/24
// Class: COP 3223, Professor Parra
// Purpose: This program going to be asked to put in the vakues so it can Calculate given measures 
// Input: x1,x2,y1,y2
//
// Output: Distance, Permiter, Area, Width, height, Inout
// //********************************************************
#include <stdio.h>
#include <math.h> 

#define PI 3.14159 

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main (int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
     return 0;
}
// Bonus 
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
// Calculate distance 
double calculateDistance() {
    double x1, x2, y1, y2, distance;
    
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x1: ");
    x1 = askForUserInput();
    
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();
   
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    
    printf("Point #1 : x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 : x2 = %lf; y2 = %lf\n", x2, y2);
    printf("The distance between the two points is %lf\n", distance);

   return distance;
   
}
// Calculate Perimeter 
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance; 
    
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
   
    return 2.0;
}

// Calculate width 
double calculateWidth() {
    double x1, x2, width;
    
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2 = askForUserInput();
    
    width = fabs(x2 - x1);
    
    printf("Point #1 entered: x1 = %lf\n", x1);
    printf("Point #2 entered: x2 = %lf\n", x2);
    printf("The width of the city encompassed by your request is %lf\n", width);
    
    // Difficulty rating, adjust as necessary
    return 2.0;
}
// Calculate Height 
double calculateHeight() {
    double y1, y2, height;
    
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();
    
    height = fabs(y2 - y1);
    
    printf("Point #1 entered: y1 = %lf\n", y1);
    printf("Point #2 entered: y2 = %lf\n", y2);
    printf("The height of the city encompassed by your request is %lf\n", height);
    
    // Difficulty rating, adjust as necessary
    return 2.0;

}
double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;
    
    printf("The area of the city encompassed by your request is %lf\n", area);
    
    return 1.0;
}