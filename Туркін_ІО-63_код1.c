#include <stdio.h>
#include <math.h>

int main(){

    int n, i = 0, j;
    double x = 0.5, s = 0, step, c;
    double o = 1, p = acos(-1.0);
    long long oper = 6;

    printf("n: ");
    scanf("%d", &n);
    
    while (1){

        oper++;
        if (i > n) break;

        step = 1;
        oper++;
        j = 0;
        oper++;

        while (1) {

            oper += 3;
            if(j >= 2 * i + 1)break;
            step = step * x;
            oper += 2;
            j++;
            oper++;
        }
    
        c = o/((2 * i + 1)*step);
        oper += 5;
        s = s+c;
        oper += 2;
        o = -o;
        oper += 2;
        i++;
        oper++;
    
    }

    double result = p/2-s;
    oper += 3;
    printf("result: %.7f\n", result);
    printf("Operations: %lld\n", oper);
}