#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    int x1, y1, r1, x2, y2, r2, x3, y3, r3;
    double a, b, c, A, B, C, x, y;
    // read input
    scanf("%d %d %d", &x1, &y1, &r1);
    scanf("%d %d %d", &x2, &y2, &r2);
    scanf("%d %d %d", &x3, &y3, &r3);

    // compute distances between stadiums
    a = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    b = sqrt((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1));
    c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));

    // compute angles
    A = acos((b*b + c*c - a*a) / (2*b*c));
    B = acos((a*a + c*c - b*b) / (2*a*c));
    C = acos((a*a + b*b - c*c) / (2*a*b));

    // check if angles are equal
    if (fabs(A-B) < 1e-9 && fabs(B-C) < 1e-9) {
        // compute intersection of angle bisectors
        x = (b*x1 + c*x2 + a*x3) / (a + b + c);
        y = (b*y1 + c*y2 + a*y3) / (a + b + c);
        printf("%.5lf %.5lf\n", x, y);
    }

    return 0;
}