#include <stdio.h>
#include <math.h>

double sequence(int n, double a0, double x) {
    if (n == 0) return a0;

    double prev = sequence(n - 1, a0, x);
    return 2 * prev + (x / (4 + pow(prev, 2)));
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
    printf("B) a_%d = %lf\n", n, result);

    return 0;
}
