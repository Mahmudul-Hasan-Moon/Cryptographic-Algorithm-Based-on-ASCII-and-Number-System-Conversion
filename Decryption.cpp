#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,q,r=0;
    int arr[5],arr1[5],all[25],a1[5],a2[5],a3[5],a4[5],a5[5],b1[5],b2[5],b3[5],b4[5],b5[5],c1[5],c2[5],c3[5],c4[5],c5[5];
    int mat[100][100], t_mat[100][100];

    cout<<"Enter 5 number : "<<endl;
    for(i=0;i<5;i++)
        cin>>arr[i];

    for(i=0;i<5;i++){
        arr1[i]=(arr[i]-14+32)%32;
    }
    ///After extra layer
    for(i=0;i<5;i++)
        cout<<arr1[i]<<" ";
        cout<<endl;

       ///convert decimal to binary

       ///for 1st number
        q=arr1[0];
        k=0;
        while(q!=0)
        {
        r=q%2;

        a1[k]=r;

        q=q/2;
        k++;
    }
    for(int i=0;i<5;i++){
        if(a1[i]==1||a1[i]==0){
            b1[i]=a1[i];

        }
        else
        {
            b1[i]=0;

        }
    }

    int m=5;
    for(int i=0;i<5;i++){
         c1[i]=b1[m-1];
         m--;
    }
    /// 1st number is processed
    /// 2nd number start
        q=arr1[1];
        k=0;
        while(q!=0)
        {
        r=q%2;

        a3[k]=r;

        q=q/2;
        k++;
    }
    for(int i=0;i<5;i++){
        if(a3[i]==1||a3[i]==0){
            b3[i]=a3[i];

        }
        else
        {
            b3[i]=0;

        }
    }

    m=5;
    for(int i=0;i<5;i++){
         c2[i]=b3[m-1];
         m--;
    }
    /// 2nd is processed
    ///3rd is start
        q=arr1[2];
        k=0;
        while(q!=0)
        {
        r=q%2;

        a3[k]=r;

        q=q/2;
        k++;
    }
    for(int i=0;i<5;i++){
        if(a3[i]==1||a3[i]==0){
            b3[i]=a3[i];

        }
        else
        {
            b3[i]=0;

        }
    }

    m=5;
    for(int i=0;i<5;i++){
         c3[i]=b3[m-1];
         m--;
    }
    /// 3rd is processed
    /// 4th is started
            q=arr1[3];
        k=0;
        while(q!=0)
        {
        r=q%2;

        a4[k]=r;

        q=q/2;
        k++;
    }
    for(int i=0;i<5;i++){
        if(a4[i]==1||a4[i]==0){
            b4[i]=a4[i];

        }
        else
        {
            b4[i]=0;

        }
    }

    m=5;
    for(int i=0;i<5;i++){
         c4[i]=b4[m-1];
         m--;
    }
    /// 4th is finished
    /// 5th is started
        q=arr1[4];
        k=0;
        while(q!=0)
        {
        r=q%2;

        a5[k]=r;

        q=q/2;
        k++;
    }
    for(int i=0;i<5;i++){
        if(a5[i]==1||a5[i]==0){
            b5[i]=a5[i];

        }
        else
        {
            b5[i]=0;

        }
    }

    m=5;
    for(int i=0;i<5;i++){
         c5[i]=b5[m-1];
         m--;
    }
    ///5 th is processed
    ///add all the binary in one array
    for(int i=0;i<5;i++)
        all[i]=c1[i];
    for(int i=0;i<5;i++)
        all[i+5]=c2[i];
    for(int i=0;i<5;i++)
        all[i+10]=c3[i];
    for(int i=0;i<5;i++)
        all[i+15]=c4[i];
    for(int i=0;i<5;i++)
        all[i+20]=c5[i];


    for(int i=0;i<25;i++)
        cout<<all[i];
    cout<<endl;
            l=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                    mat[i][j]=all[l];
                l++;
            }
        }
        ///make transpose
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                t_mat[j][i]=mat[i][j];
            }
        }
        ///make the matrik to decimal
        int d=0,x=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                d=d+(t_mat[i][j])*pow(2,x);
                x++;
            }
        }

    cout<<endl<<"The matrix is ...."<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    cout<<endl<<"The transpose matrix is ...."<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 cout<<t_mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"The number is  "<<d<<endl;

    return 0;
}
