#include<iostream>
using namespace std;

void swapByValue (int a, int b);
void swapByRef   (int &a, int &b);
void swapByAdr   (int *a, int *b);

int main()
{
    int x = 10, y = 20;

    cout << endl;
    cout << "Value before swapping x: "<<x<<"y: "<<y<<endl<<endl;
    swapByValue( x , y );
    cout << "Value after Swapping : " << x << "y: "<< y << endl<<endl;

    cout << "Value before swapping x: "<<x << "y: "<<y << endl<<endl;
    swapByRef(x , y);
    cout << "Value after swapping x : "<<x<<"y: "<<y<< endl<<endl;

    x=50;
    y=100;

    cout << "Value before swapping x: "<<x<<"y: "<<y<< endl<<endl;
    swapByAdr(&x, &y);
    cout << "Value after swapping x: "<<x<<"y: "<<y << endl<< endl;

    return 0;
}
void swapByValue(int a, int b)
{
    int c;

    c=a;
    a=b;
    b=c;
}
void swapByRef(int &a, int &b)
{
    int c;

    c=a;
    a=b;
    b=c;
}
void swapByAdr(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
