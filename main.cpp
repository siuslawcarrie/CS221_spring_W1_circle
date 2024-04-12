#include <iostream>
#include <iomanip>
using namespace std;

#define PI 3.14159

int main() {
    int radius;

    cout <<"please enter the radius of a circle"<<endl;
    cin >>radius;
    cout << "The diameter is " << fixed<<setprecision(2)<<2 * radius<<endl;
    cout << "The circumference is "<<fixed<< setprecision(2)<<2 * PI * radius<<endl;
    cout << "The area is " << fixed<<setprecision(2)<<PI * radius * radius<<endl;

    return 0;
}
