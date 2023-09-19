#include<iostream>
using namespace std;

inline double multi(double num)
{
    return num*2;
}
inline double cubic(double num)
{
    return num*num*num;
}

int main()
{
    double number;
    cout<<"enter a number: "<<endl;
    cin>>number;

    double resultMulti=multi(number);
    cout<<"Multiplication By 2: "<<resultMulti<<endl;

    double resultCubic=cubic(number);
    cout<<"Cubic value:"<<resultCubic<<endl;
    
    return 0;
}