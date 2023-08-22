//Develop a C Program to find roots of quadratic equation ax^2+bx+c=0.
// discriminant = b * b - 4 * a * c;

#include <math.h>
#include <stdio.h>
int main()
 {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a: ");
    scanf("%lf", &a);
    printf("Enter coefficients b: ");
    scanf("%lf", &b);
    printf("Enter coefficients c: ");
    scanf("%lf", &c);

    discriminant = b * b - 4 * a * c;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 

