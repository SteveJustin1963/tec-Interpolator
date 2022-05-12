 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, x1, y1, x2, y2;
    printf("Enter the value of x1, y1, x2, y2: ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    y = ((x - x1) * (y2 - y1)) / (x2 - x1) + y1;
    printf("The value of y is: %f", y);
    return 0;
}
 
