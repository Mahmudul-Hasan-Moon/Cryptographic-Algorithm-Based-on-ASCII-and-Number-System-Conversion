#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,q,k,r,c=0;
   int arr[5],arr1[5],arr2[5],a[5];


   cin>>n;

        q=n;
        k=0;
        while(q!=0)
        {
        r=q%2;

        arr1[k]=r;

        q=q/2;
        k++;
    }
    /*for(int i=0;i<5;i++)
        arr1[i]=arr[i];*/

    for(int i=0;i<5;i++){
        if(arr1[i]==1||arr1[i]==0){
            arr2[i]=arr1[i];

        }
        else
        {
            arr2[i]=0;

        }
    }

    int m=5;
    for(int i=0;i<5;i++){
         a[i]=arr2[m-1];
         m--;
    }

    for(int i=0;i<5;i++)
        cout<<a[i];
    cout<<endl;

    return 0;
}

