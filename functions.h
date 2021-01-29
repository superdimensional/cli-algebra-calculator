#include <math.h>
#include <stdio.h>

double exponent( double par){
    double raisedNum;
    raisedNum = par * par;
    
    return raisedNum;
};

double hypotenuse(double par, double par2){

    double sideC;
    sideC = sqrt( exponent(par) + exponent(par2) );

    return sideC;
};

void quadratic(double numA, double numB, double numC, double *awn1ptr, double *awn2ptr){
    
    double awn1 = (-numB) + sqrt( exponent(numB) - 4 * numA * numC);
    double awn1F = awn1 / (2 * numA);
	double awn2 = (-numB) - sqrt( exponent(numB) - 4 * numA * numC);
    double awn2F = awn2 / (2 * numA);

    *awn1ptr = awn1F;
    *awn2ptr = awn2F;
};

double areaOfCircle(double radius){
    
    double area;
    area = acos(-1) * exponent(radius);
    
    return area;
}

int buildMatrix(int numRows, int numColumns)
{

    int matrix[numRows][numColumns];
    
    printf("Enter elements in matrix of size %dx%d \n", numRows, numColumns);

    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numColumns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nElements in matrix are: \n");
    for(int i = 0; i < numRows; i++)
    {
        for(int j = 0; j < numColumns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}