#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y, a, b, distance;

    cout << "Enter the x and y coordinates" << endl;
    cin >> x >> y;
    cout<< "Enter the a and b coordinates" << endl;
    cin>> a >> b;
    distance = sqrt(pow(x-a, 2) + pow(y-b, 2));
    cout <<"The distance between ("<< x << "," << y << " ) and (" << a << "," << b << ") is " << distance << endl;
    return 0;
}
