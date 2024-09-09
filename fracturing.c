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

#define PI 3.14159 // Define PI

double calculateDistance();
double calculatePerimeter();
double calculateArea();
double calculateWidth();
double calculateHeight();
double askForUserInput();

int main (int argc, char **argv) {
    calculateDistance(); // defining variables 
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
     return 0;
}
// Input users value 
double askForUserInput() {
    double value;
    scanf("%lf", &value);
    return value;
}
// Calculate distance 
double calculateDistance() {
    double x1, x2, y1, y2, distance;
    //Prompt user for the first point coordinates
    printf("Enter x1: ");
    x1 = askForUserInput();
    printf("Enter x2: ");
    x2= askForUserInput();
    // Prompt user for the second point coordinates
    printf("Enter y1: ");
    y1 = askForUserInput();
    printf("Enter y2: ");
    y2 = askForUserInput();
   
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    
    printf("Point #1 entered : x1 = %.2f\n; x2 = %.2f\n", x1, x2);
    printf("Point #2 entered : y1 = %.2f\n; y2 = %.2f\n", y1, y2);
    printf("The distance between the two points is %.2f\n", distance);

   return distance;
   
}
// Calculate Perimeter 
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = 2 * distance; 
    
    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    
   
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
    // Output the points entered and the calculated width
    printf("Point #1 entered: x1 = %.2f\n", x1);
    printf("Point #2 entered: x2 = %.2f\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);
    
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
     // Output the points entered and the calculated Height
    printf("Point #1 entered: y1 = %.2f\n", y1);
    printf("Point #2 entered: y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);
    

    return 2.0;

}
double calculateArea() {
    double width = calculateWidth();
    double height = calculateHeight();
    double area = width * height;
     // Output the points entered and the calculated Area
    printf("The area of the city encompassed by your request is %.2f\n", area);
    
    return 1.0;
}