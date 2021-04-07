#include<stdio.h>
#include<math.h>
int main()
{
    int area, perimeter,length,breath,side,radius;
    printf("Enter the value of side\n");
    scanf("%d",&side);
    area = side*side;
    perimeter = 4*side;

    printf("area is %d\n",area);

    printf("perimeter is %d\n",perimeter);

    printf("Enter the value of Length\n");

    scanf("%d",&length);

    printf("Enter the valur of Breath\n");

    scanf("%d\n",&breath);
    area = length*breath;
    perimeter = 2 * (length + breath);

    printf("area is %d\n",area);

    printf("perimeter is %d\n",perimeter);


    printf("Enter the value of radius\n");

    scanf("%d\n",&radius);
    area = 3.14 * radius *radius;
    printf("area of circle is %d",area);

    printf("Enter the value of radius\n");

    scanf("%d\n",&radius);
    perimeter = 2 * 3.14 * radius;

    printf("perimeter of circle is %d\n",perimeter);

    return 0;
}