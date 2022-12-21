/*Write a program and input two integers in main
and pass them to default constructor of the class.
Show the result of the additon of two numbers.*/
#include <iostream>
using namespace std;

void problem();

class Solution
{
private:
    int num1, num2, sum;

public:
    //Constructor
    Solution(int a, int b)
    {
        num1=a;
        num2=b;
        sum=num1 + num2;
        cout << "Sum: " << sum ;
    }
};

int main(){

    problem();

    cout << "Enter num1: ";
    int input1;
    cin>>input1;

    cout << "Enter num2: ";
    int input2;
    cin>>input2;
    cout<<endl;
    Solution(input1, input2);

}

void problem(){
    cout << "Write a program and input two integers in main and pass them to default constructor of the class. Show the result of the additon of two numbers." << endl << endl;

}
