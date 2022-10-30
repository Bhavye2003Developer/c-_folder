#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int n;
    cin >> n;

    int arr[1000];
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    float sum = 0;
    for (int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout << sum/2;

    cout << "\n";
    return 0;
}
