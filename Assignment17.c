#include <stdio.h>
 
int main() {
    int i, n;
    float x, term, sum = 0;

    printf("Enter value of x (in radians): ");
    scanf("%f", &x);

    printf("Enter number of terms: ");
    scanf("%d", &n);

    term = x;  

    for(i = 1; i <= n; i++) {
        sum = sum + term;

        
        term = -term * x * x / ((2*i) * (2*i + 1));
    }

    printf("Value of sin(x) = %f\n", sum);

    return 0;
}
