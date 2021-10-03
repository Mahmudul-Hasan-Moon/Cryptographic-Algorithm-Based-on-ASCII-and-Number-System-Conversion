#include<bits/stdc++.h>
using namespace std;

int octal(int n)
{
    int arr[100],r,i,j,q,p=0,k=0,m,c=0;
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
    int n,m,p,o,h,i,j,c,x,arr[10000],w;

    cin>>n;
    m=n/4;
    x=sqrt(m);

    j=1;
    for( i=1;i<=x;i++){
        if(n%i==0){
            arr[j]=i;
            j++;
        }
    }
   /* for(int k=1;k<=j;k++)
        cout<<arr[k]<<" ";
        cout<<endl;*/

    for(int k=1;k<=j;k++){
        c=0;
        p=arr[k];
        o=octal(p);
        //cout<<"Octal is  "<<o<<endl;
        h=hexa(p);
        //cout<<"Hexa is  "<<h<<endl;
        //cout<<p<<" "<<o<<" "<<h<<endl;
        for(int l=1;l<=j;l++){
            if((o==arr[l]&&o!=p))
                c++;

            if(h==arr[l])
                c++;
        }
        //cout<<c<<endl;
        if(c==2&&(p*o*h)==n){
             w=p;
        }
    }
    cout<<w<<" is the wanted number"<<endl;

    return 0;
}
