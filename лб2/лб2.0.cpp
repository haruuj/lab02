#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double a, z1,
       // double z2;

    cout << " a: ";
    cin >> a;

    z1 = ((a + 2) / sqrt(2 * a) - a / sqrt(2 * a + 2) + 2 / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2);
   // z2 = 1 / sqrt(a + sqrt(2));
    cout << "z1 = " << z1 << endl;
   // cout << "z2 = " << z2 << endl;

    return 0;
}