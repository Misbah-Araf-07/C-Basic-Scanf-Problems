

#include <stdio.h>
#include <math.h>


int main()
{

    printf("\t\t\t\t \"Misbah Ahmed Araf's  \'CSE103\' Scanf Problems\" \t\n\n\n");
    printf("Problem :Given three edges (a, b and c) of a triangle, determine its area.\n\n\n");

    double a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Your Given Numbers are = %.0lf, %.0lf, %.0lf\n\n",a,b,c);


    if  (a>0 && b>0 && c>0 && (a+b>c) && (a+c>b) && (b+c>a))
        {
        s = (a + b + c) / 2.0 ,  area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("The Area of the Triangle is : %.1lf\n\n", area);
        }


    else
        {
         printf("Entered values do not form a valid triangle.\n");
        }

         printf("\n\n_____________________________________________________");


    return 0 ;
}







