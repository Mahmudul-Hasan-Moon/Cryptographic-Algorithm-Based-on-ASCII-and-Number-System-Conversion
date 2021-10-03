#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],num[100];
    int i,j,l,b,d=0,m,k=0;

    cout<<"Enter a binary number :"<<endl;
    for(i=0;i<5;i++)
        cin>>arr[i];
    l=5;

    for(i=0;i<5;i++,l--){
            d=d+(arr[i])*pow(2,l-1);
    }
        cout<<"Decimal number is "<<d<<endl;

    return 0;
}

