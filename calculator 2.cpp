#include<iostream>
using namespace std;
class calculator
{
    int number;
public:
    void getdata(int a)
    {
        number=a;
    }
    void showdata()
    {
        cout<< "Result:"<<number<<endl;
    }
    calculator operator + (calculator);
    calculator operator - (calculator);
    calculator operator * (calculator);
    calculator operator / (calculator);
};
calculator calculator:: operator + (calculator val2)
{
    calculator temp;
    temp.number=number+val2.number;
    return temp;
}
calculator calculator::operator - (calculator val2)
{
    calculator temp;
    temp.number=number-val2.number;
    return temp;
}
calculator calculator:: operator * (calculator val2)
{
    calculator temp;
    temp.number=number*val2.number;
    return temp;
}
calculator calculator::operator / (calculator val2)
{
    calculator temp;
    temp.number=number/val2.number;
    return temp;
}
int main()
{
    calculator c1,c2,c3;
    char ch;
    int a,b;
    cout<< "Enter first number:";
    cin>>a;
    c1.getdata(a);
    cout<< "Enter second number:";
    cin>>b;
    c2.getdata(b);
    cout<< "Now choose any operator:";
    cin>>ch;
    switch(ch)
    {
    case '+':
        c3=c1+c2;
        break;
    case '-':
        c3=c1-c2;
        break;
    case '*':
        c3=c1*c2;
        break;
    case '/':
        c3=c1/c2;
        break;
    default:
        cout<< "Invalid Input"<<endl;
    }
    c3.showdata();
    return 0;
}
