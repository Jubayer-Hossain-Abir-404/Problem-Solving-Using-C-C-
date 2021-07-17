#include<iostream>

using namespace std;

double x[100], y[100];
int n, j=1;

void input()
{


    cout<<"n = ";
    cin>>n;
    cout<<endl;

    cout<<"enter x and the respective value of y:"<<endl;
    for(int i=1; i<=n; i++)
    {
        cin>>x[i]>>y[i];
    }
}

double p[100];
int a=-1;


void f()
{
    for (int i=1;i<=n-1;i++)
    {
        for(int k=1; k<=n-i; k++)
        {
            p[k] = ((y[k+1]-y[k])/(x[k+j]-x[k]));
            cout<<"b["<<i<<"] = "<<p[k]<<endl;
        }
        j++;
        for(int k=1; k<=n; k++)
        {
            y[k] = p[k];
        }
    }
}

int main()
{
    input();

    /*
    x[1] = 10; y[1] = 227.04;
    x[2] = 15; y[2] = 362.78;
    x[3] = 20; y[3] = 517.35;
    x[4] = 22.5; y[4] = 602.97;

    n = 4;
*/


    f();
    return 0;
}
