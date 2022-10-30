#include<iostream>
#include<math.h>
using namespace std;

inline float area(float r) {return 3.14 * pow(r,2);}


int main(int argc, char const *argv[])
{

    float r;
    cin >> r;
    cout << area(r);

    cout << "\n";
    return 0;
}
