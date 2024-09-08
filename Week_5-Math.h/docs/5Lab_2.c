#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c;
    double a_log10, b_log10, c_log10;
    double a_ln, b_ln, c_ln;
    scanf("%lf %lf %lf",&a, &b, &c);
    a_log10 = log10(a);
    b_log10 = log10(b);
    c_log10 = log10(c);
    printf("Log10: a = %.2lf, b = %.2lf, c = %.2lf\n",a_log10, b_log10, c_log10);
    a_ln = log(a);
    b_ln = log(b);
    c_ln = log(c);
    printf("Log base e: a = %.2lf, b = %.2lf, c = %.2lf",a_ln, b_ln, c_ln);

    return 0;
}