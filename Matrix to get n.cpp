#include<iostream>
using namespace std;

int main()
{
    int arr[]={65,66,67,68,69};

    char ch[5];

    for(int i=0;i<5;i++)
        ch[i]=arr[i];

    for(int i=0;i<5;i++)
        cout<<ch[i]<<" ";
    cout<<endl;

    return 0;
}
