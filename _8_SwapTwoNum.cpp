//8.Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Two Numbers:"<<endl;
    cin>>num1>>num2;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    cout<<"Swapped Value "<<num1<<" "<<num2<<endl;
    return 0;
}
/*OUTPUT
Enter Two Numbers:
45
95
Swapped Value 95 45
*/
