#include<iostream>

using namespace std;



int main()
{
    int n,l=1;
    float x[10],y[10],b[10],c[10],d[10],e[10],f[10],g[10],h[10];

    cout<<"Enter the Value of n -->"<<endl<<endl;
    cin>>n;

    cout<<"Enter the Values of X -->"<<endl<<endl;

    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }

    cout<<"Enter the Values of Y -->"<<endl<<endl;

    for(int i=1;i<=n;i++)
    {
        cin>>y[i];
    }

    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n-j;i++)
        {
            b[i]=(y[i+1]-y[i])/(x[i+j]-x[i]);

            cout<<"Enter the Values of B"<<l<<"["<<i<<"] --> "<<b[i]<<endl<<endl;

            d[i]=b[i];
            y[i]=d[i];


        }
        l++;
    }

    return 0;

}
