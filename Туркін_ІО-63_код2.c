
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double x = 0.5, pi = acos(-1.0);
    double a, s;
    long long oper = 0;

    printf("n: ");
    scanf("%d", &n);
    a = 1.0 / x;
    s = a;
    oper += 2;

    for (i = 1; i <= n; i++) {
        a = a * (-(2 * i - 1)) / ((2 * i + 1) * x * x);
        s += a;
        oper += 11;
    }

    s = pi / 2 - s;
    oper += 2;

    printf("Result: %.7f\n", s);
    printf("Operations: %lld\n", oper);

    return 0;
}
