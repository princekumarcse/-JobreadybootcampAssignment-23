//9.Write a C++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Two Numbers:"<<endl;
    cin>>num1>>num2;
    if(num1>num2)
    {
        cout<<num1<<" is Greater Number"<<endl;
    }
    else
    {
        cout<<num2<<" is Greater Number"<<endl;
    }
    return 0;
}
/*OUTPUT
Enter Two Numbers:
54
20
54 is Greater Number
*/
