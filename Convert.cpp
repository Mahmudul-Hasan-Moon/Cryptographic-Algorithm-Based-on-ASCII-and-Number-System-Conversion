#include<bits/stdc++.h>
using namespace std;

int octal(int n)
{
    int arr[100],r,i,j,q,p=0,k=0,m;
    q=n;

    while(q!=0)
    {
        m=q%8;
       arr[k]=m;

        q=q/8;
        k++;
    }
    for(int i=k-1;i>=0;i--)
    {
        p=p*10+arr[i];
    }
        return p;
}
int hexa(int n)
{
    int arr[100],r,i,j,q,p=0,k=0,m;
    q=n;

    while(q!=0)
    {
        m=q%16;
       arr[k]=m;

        q=q/16;
        k++;
    }
    for(int i=k-1;i>=0;i--)
    {
        if(arr[i]>=10)
        p=p*100+arr[i];
        else
            p=p*10+arr[i];
    }
        return p;
}

int main()
{
    int n,o,h;
    //cin>>n;

    for(int n=0;n<=127;n++){
    o=octal(n);
    h=hexa(n);

    int product = n*o*h;

    cout<<n<<" "<<o<<" "<<h<<" "<<product<<endl;
    //cout<<product<<endl;
    }

    return 0;
}
