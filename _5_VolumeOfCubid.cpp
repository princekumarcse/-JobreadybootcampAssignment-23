//5.	Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int length,width,height,Volume;
    cout<<"Enter Lenght Width and Height of Cubiod:"<<endl;
    cin >>length>>width>>height;
    Volume=length*width*height;
    cout<<"Volume Of Cubiod is:"<<Volume<<endl;
    return 0;
}

/*output_iterator_tagEnter Lenght Width and Height of Cubiod:
4
5
8
Volume Of Cubiod is:160
*/
