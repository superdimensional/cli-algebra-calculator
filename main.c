#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "functions.h"

int main (){
    system("clear");
    printf("Welcome to Calculator Collection™.\nPlease select which calculator you would like to use.");
    printf("\n\n  1. Hypotenuse calculator");
    printf("\n  2. Quadratic formula calculator");
    printf("\n  3. Area of a circle");
    printf("\n  4. Matrix");
    printf("\n\n Enter your choice here:_____");
    printf("\033[D");
    printf("\033[D");
    printf("\033[D");    

    int userInput;
    scanf("%i", &userInput);
    
    switch(userInput){
        case 1: 
            system("clear");
            printf("\n ~~ Hypotenuse calculator ~~");
            printf("\n\n        /|\n");
            printf("       / |\n");
            printf("  c   /  |\n");
            printf("     /   |   a\n");
            printf("    /    |\n");
            printf("   /_____|\n\n");
            printf("      b\n"); 

            printf("\nPlease type the length of the triangle below:\n");
            double sideA;
            scanf("%lf", &sideA);
            printf("\nPlease type the width of the triangle:\n");
            double sideB;
            scanf("%lf", &sideB);

            printf("The Hypotnuse is equal to %f.\n", hypotenuse(sideA, sideB));
            break;  
        
        case 2:
            system("clear");
            printf("\n ~~ Quadratic formula calculator ~~\n\n");

            printf("Please enter the value for \"a\":\n");
	        double numA;
	        scanf("%lf", &numA);
        	printf("Please enter the value for \"b\":\n");
        	double numB;
        	scanf("%lf", &numB);
	        printf("Please enter the value for \"c\":\n");
    	    double numC;
	        scanf("%lf", &numC);

            double awn1ptr, awn2ptr; 
            quadratic(numA, numB, numC, &awn1ptr, &awn2ptr);

	        printf("The zeros are: %f and %f!\n", awn1ptr, awn2ptr);
            break;
        
        case 3:
            system("clear");
            printf("\n ~~ Area of a circle calculator ~~\n\n");
            printf("        o  o\n     o        o\n    o          o\n    o          o\n     o        o\n        o  o\n");
            printf("\n enter a radius:\n");

            double radius;
            scanf("%lf", &radius);
            printf("The area is %f!\n", areaOfCircle(radius));
            break;
        
        case 4:
            
            system("clear");
            printf("\n ~~ matrix *beta* ~~\n\n");
            int numRows;
            int numColumns;
            printf("\nPlease enter the number of rows:");
            scanf("%d", &numRows);
            printf("\nPlease enter the number of columns:");
            scanf("%d", &numColumns);
            buildMatrix(numRows, numColumns);
            
            break;

        default:
            printf("\n Incorrect input, try again.\n");
            
    };

    
    return 0;
    };