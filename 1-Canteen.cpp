#include <iostream>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    a = a * b;
    b = b * n;
    a += b / 100;
    b = b % 100;
    cout << a << " som and " << b << " tyiyn";
}