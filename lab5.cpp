#include <iostream>
#include <cmath>
using namespace std;

double geometric(int x, int y) {
    if (x==0) {return 1;}
    return (pow(y, x) + geometric(x-1, y));}

int main() {
    int x;
    int y;

    cout<<"x gir";cin >> x;

    cout<<"y gir";cin >> y;

    cout<<"Sonuc: "<<geometric(x, y);
    return 0;
}
