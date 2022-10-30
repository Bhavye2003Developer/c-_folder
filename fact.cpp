#include<iostream>
using namespace std;


int fact_recur(int n){
    if (n==1) return 1;
    return n * fact_recur(n-1);
}



int main(int argc, char const *argv[])
{

    int n;
    cin >> n; cout << fact_recur(n) << "\n";
    return 0;
}
