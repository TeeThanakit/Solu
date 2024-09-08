#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    double squ_a, squ_b, squ_c;
    double root_a, root_b, root_c;
    scanf("%lf %lf %lf",&a, &b, &c);
    squ_a = pow(a,2);
    squ_b = pow(b,2);
    squ_c = pow(c,2);
    printf("Square: a = %.2lf, b = %.2lf, c = %.2lf\n",squ_a, squ_b, squ_c);

    root_a = sqrt(a);
    root_b = sqrt(b);
    root_c = sqrt(c);
    printf("Square root: a = %.2lf, b = %.2lf, c = %.2lf",root_a, root_b, root_c);

    return 0;
}