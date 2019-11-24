#include<iostream>
#include"Complex.h"
using namespace std;

int main()
{
    Complex x;
    Complex y(4.3,8.2);
    Complex z(3.3,1.1);

    x=y+z;
    cout<<"x=y+z:"<<endl;
    cout<<x<<"="<<y<<"+"<<z;

    x=y-z;
    cout<<"\n\nx=y-z:"<<endl;

    cout<<x<<"="<<y<<"+"<<z;

    x=y*z;
    cout<<"\n\nx=y*z:"<<endl;
    cout<<x<<"="<<y<<"+"<<z;

}
