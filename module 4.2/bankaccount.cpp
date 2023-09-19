#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    private:
    string DepositorName;
    long AccountNumber;
    string AccountType;
    double Balance;

    public:
    BankAccount(string name,long long AccountNum, string Accountty,double Bal)  // Constructor
    {
        DepositorName=name;
        AccountNumber=AccountNum;
        AccountType=Accountty;
        Balance=Bal;
    }

    void deposite(double Amount)
    {
        if(Amount>0)
        {
            Balance+=Amount;
            cout<<"Deposited "<<Amount<<" successfully"<<endl;
        }
        else
        {
            cout<<"Invalid Deposite Amount.please Enter Valid Deposite Amount"<<endl;
        }
    }

    void withdraw(double Amount)
    {
        if(Amount>0 && Balance>=Amount)
        {
            Balance-=Amount;
            cout<<"Withdrawn "<<Amount<<" sucessfully"<<endl;
        }
        else if(Amount<=0)
        {
            cout<<"Invalid Withdrawal Amount.Please enter valid Amount"<<endl;
        }
        else
        {
            cout<<"Insufficient balance for withdrawal"<<endl;
        }
    }

    void display()
    {
        cout<<"Account Holder: "<<DepositorName<<endl;
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Account Type: "<<AccountType<<endl;
        cout<<"Balance: "<<Balance<<endl;
    }
};

int main()
{
    BankAccount MyAccount("jenny patel",123456789,"Saving",1000);
    MyAccount.display();
    MyAccount.deposite(500);
    MyAccount.withdraw(200);
    MyAccount.display();

    return 0; 
}