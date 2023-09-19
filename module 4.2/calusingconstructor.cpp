#include<iostream>
using namespace std;

class calculator{
    private:
    int num1;
    int num2;

    public:
    calculator(int a,int b)
    {
        num1=a;
        num2=b;
    }

    double add()
    {
        return num1+num2;
    }

    double sub()
    {
        return num1-num2;
    }

    double multi()
    {
        return num1*num2;
    }
    double div()
    {
        if(num2!=0)
        {
            return num1/num2;
        }
        else
        {
            cout<<"Error"<<endl;
        }
    }
};


int main()
{
    int a,b;
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;

    calculator c1(a,b);
    cout<<"Addition: "<<c1.add()<<endl;
    cout<<"Subtraction: "<<c1.sub()<<endl;
    cout<<"Multiplication: "<<c1.multi()<<endl;
    cout<<"Division: "<<c1.div()<<endl;

    return 0;

}