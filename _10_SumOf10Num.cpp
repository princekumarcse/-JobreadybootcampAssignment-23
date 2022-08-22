//10.	Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 Numbers:"<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum is :"<<sum<<endl;
    return 0;
}
/*OUTPUT
Enter 10 Numbers:
1
2
3
4
5
6
7
8
9
10
Sum is :55
*/
