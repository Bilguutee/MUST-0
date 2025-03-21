#include <stdio.h>
#include <math.h>

double sequence_g(int n, double a0, double x) {
    if (n == 0) return a0;

    double prev = sequence_g(n - 1, a0, x);
    return 3 + (1.0 / pow(2, n)) * pow(cos(prev - x), 2);
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

    double result = sequence_g(n, a0, x);
    printf("г) a_%d = %lf\n", n, result);

    return 0;
}
