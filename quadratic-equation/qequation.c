#include <math.h>
#include <stdio.h>

double discrim(double a, double b, double c) { return b * b - 4 * a * c; }

int main() {
    double a, b, c, disc, first_root, second_root;
    int input_count;
    printf("Input [A], [B], [C] values for A*X*X + B*X + C\n");
    input_count = scanf("%lf %lf %lf", &a, &b, &c);
    if (input_count != 3) {
        printf("Error. Wrong input!\n");
        return 1;
    }
    printf("Equation: %.5f*XX + %.5f*X + %.5f\n", a, b, c);
    if (a == 0) {
        printf("Error. Not quadratic equation. [A] = 0\n");
        return 2;
    }
    disc = discrim(a, b, c);
    if (disc < 0) {
        printf("Equation has no roots. Discrim %lf\n", disc);
        return 0;
    }
    disc = sqrt(disc);
    first_root = (-b - disc) / (2 * a);
    second_root = (-b + disc) / (2 * a);
    printf("First root: [%.5f]\n", first_root);
    printf("Second root: [%.5f]\n", second_root);
    return 0;
}
