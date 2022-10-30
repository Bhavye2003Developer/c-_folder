#include<iostream>
using namespace std;


class constructor{

    public: constructor(int a, int b=5, int c=20){
        cout << a << " " << b << " " << c << "\n";
    }
};


class constructor_explicit{

    private : int a,b,c;
    public : constructor_explicit(int ,int ,int);
             constructor_explicit();
    public : void show_val();
};

constructor_explicit::constructor_explicit(int a,int b, int c=90){
    this->a = a;
    this->b = b;
    this->c = c;
}

constructor_explicit::constructor_explicit(){
    cout << "No arguments have passed";
}


void constructor_explicit :: show_val(){
    cout << "The value of a : " << a << "\n";
    cout << "The value of b : " << b << "\n";
    cout << "The value of c : " << c << "\n";
}



int main(int argc, char const *argv[])
{   

    // constructor obj = constructor(45);
    // constructor obj1 = constructor(10,2,3);

    constructor_explicit object = constructor_explicit(20,10,19);
    object.show_val();

    return 0;
}