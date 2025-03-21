#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double sequence(int n, double a0, double x) {
    if (n == 0) {
        return a0; // Анхны нөхцөл
    }
    
    double prev = sequence(n - 1, a0, x);
    return sqrt(fabs(4 * prev * prev - 2 * x));
}

int main() {
    int n;
    double a0, x;

    printf("n-ийн утгыг оруулна уу: ");
    scanf("%d", &n);

    printf("a0-ийн утгыг оруулна уу: ");
    scanf("%lf", &a0);

    printf("x-ийн утгыг оруулна уу: ");
    scanf("%lf", &x);

    double result = sequence(n, a0, x);
    printf("a_%d = %lf\n", n, result);

    return 0;
}
