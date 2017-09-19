#include <iostream>
using namespace std;
//Function prototype
void Arithmetic(float f1, float f2);
//Main Program
int main() {
    //Task: Define a function Arithmetic() that takes two
    //Floats as input parameters and it displays
    //Their sum, difference, and product

    float num1, num2;
    char answer;
    while(1){//this is run forever
        cout <<"Enter 2 numbers: ";
        cin >> num1>>num2;
        Arithmetic(num1, num2);
        cout << "Do you want to do it again? (y/n)";
        cin >> answer;
        if(answer=='n'){
            break;
        }
    }
    return 0;
}
    //Function Definition
    void Arithmetic(float f1, float f2){
        cout<<"The sum of f1 and f2 is: "<<f1 + f2<<endl;
        cout<<"The difference of f1 and f2 is: "<<f1 - f2<<endl;
        cout<<"The product of f1 and f2 is: "<<f1 * f2<<endl;

        return;// optional
    }
