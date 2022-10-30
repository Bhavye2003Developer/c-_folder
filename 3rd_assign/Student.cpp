#include<iostream>
#include<string.h>
using namespace std;

class Student{
    private:int Enrollno;
    private:string Name;
    private:float perc;

    public: Student(int EnrollName, string Name){
        this->Enrollno = EnrollName;
        this->Name = Name;
    }

    public: void CalculatePerc(float marks[5]){
        float sum = 0;
        for (int i=0; i<5; i++){
            sum+=marks[i];
        }
        this->perc = (sum/500) * 100;
    }

    public: void output(){
        cout << "The percentage is : " << this->perc;
    }
};


int main(){

    Student stud1 = Student(055140,"Bhavye");
    float marks[5] = {90.00,92.23,90.17,94.12,98.33};
    stud1.CalculatePerc(marks);
    stud1.output();

    cout << "\n";
    return 0;
}