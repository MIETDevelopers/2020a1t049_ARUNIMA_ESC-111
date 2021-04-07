#include <stdio.h>
 
void main()
{
    int fig_code;
    float side, base, length, breadth,area, radius,perimeter;
 
    printf("-------------------------\n");
    printf(" 1 --> Circle\n");
    printf(" 2 --> Rectangle\n");
    printf(" 3 --> Square\n");
    printf("-------------------------\n");
    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    switch(fig_code)
    {
    case 1:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142 * radius * radius;
        perimeter = 2 * 3.142 * radius;
        printf("Area of a circle = %f\n", area);
        printf("perimeter of a circle = %f\n", perimeter);
        break;
    case 2:
        printf("Enter the breadth and length\n");
        scanf("%f %f", &breadth, &length);
        area = breadth * length;
        perimeter = 2 * (length * breadth);
        printf("Area of a Reactangle = %f\n", area);
        printf("perimeter of a rectangle = %f\n", perimeter);
        break;
    
    case 3:
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of a Square=%f\n", area);
        printf("perimeter of a square = %f\n", perimeter);
        break;
    default:
        printf("Error in figure code\n");
        break;
    }
}