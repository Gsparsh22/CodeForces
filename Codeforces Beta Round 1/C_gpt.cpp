#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    // Input coordinates for three pillars
    float x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Calculate the area using the Shoelace Formula
    float area = 0.5 * fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));

    // Output the result with set precision of 8 decimal places
    cout << fixed << setprecision(8) << area << endl;

    return 0;
}
