#include<iostream>
#include<math.h>
using namespace std;


float volume(float r, float h){

    float vol = (3.14 * (r * r) * h)/3;
    return vol;
}


float volume(float r){
    
    float vol = 4/3 * (3.14 * (r * r * r));
    return vol;
}



int main(int argc, char const *argv[])
{   

    cout << volume(34.122);   
    cout << "\n";
    return 0;
}
