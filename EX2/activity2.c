
#include <stdio.h>
#include <math.h>

// Function prototypes
void instruct();
double calculateDiscriminant(double a, double b, double c);
void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2);

int main()
{
    double a, b, c;
    double discriminant;
    double root1, root2;

    // Display instructions
    instruct();

    // Get coefficients
    printf("Enter coefficient a: ");
    scanf("%lf", &a);

    printf("Enter coefficient b: ");
    scanf("%lf", &b);

    printf("Enter coefficient c: ");
    scanf("%lf", &c);

    // Check whether equation is quadratic
    if (a == 0)
    {
        printf("Error! a cannot be zero.\n");
        return 1;
    }

    // Calculate discriminant
    discriminant = calculateDiscriminant(a, b, c);

    // Check discriminant
    if (discriminant < 0)
    {
        printf("There are no real roots.\n");
    }
    else
    {
        // Calculate roots
        calculateRoots(a, b, c, discriminant,
                       &root1, &root2);

        // Display results
        printf("Root 1 = %.3f\n", root1);
        printf("Root 2 = %.3f\n", root2);
    }

    return 0;
}

// Function to display instructions
void instruct()
{
    printf("Quadratic Equation Solver\n");
    printf("Solves equations of the form ax^2 + bx + c = 0\n");
}

// Function to calculate discriminant
double calculateDiscriminant(double a, double b, double c)
{
    return (b * b) - (4 * a * c);
}

// Function to calculate roots
void calculateRoots(double a, double b, double c,
                    double discriminant,
                    double *root1, double *root2)
{
    *root1 = (-b + sqrt(discriminant)) / (2 * a);

    *root2 = (-b - sqrt(discriminant)) / (2 * a);
}
