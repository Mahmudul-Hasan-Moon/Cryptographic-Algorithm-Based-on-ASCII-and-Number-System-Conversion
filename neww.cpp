#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k=0,q,b,s,count=0,m;
    int arr[100],data[5];
    int mat[100][100], t_mat[100][100];
    char ch[5];
    ofstream writef;
    writef.open("new1.txt");
    writef<<"Enter the number  :"<<endl;
    cin>>n;

    q=n;
    while(q!=0)
    {
        m=q%2;

        arr[k]=m;

        q=q/2;
        k++;
        count++;
    }
    writef<<count<<endl;
    for(int i=k-1;i>=0;i--)
        writef<<arr[i];
        writef<<endl;
               int l=0;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                mat[i][j]=arr[l];
                l++;
                //if(l>=k-1){
                  //  break;
                //}
            }
        }
        ///make transpose
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                t_mat[j][i]=mat[i][j];
            }
        }
       for(int i=0;i<5;i++)
        data[i]=0;
        ///make each row to decimal
        for(int i=0;i<5;i++){
            int l=5;
            for(int j=0;j<5;j++,l--){
                data[i]=data[i]+(t_mat[i][j])*pow(2,l-1);
            }
        }

        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 writef<<mat[i][j]<<" ";
            }
            writef<<endl;
        }
        ///print transpose
        writef<<endl<<"The transpose matrix is ...."<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 writef<<t_mat[i][j]<<" ";
            }
            writef<<endl;
        }
      writef<<"The decimal are......"<<endl;
      for(int i=0;i<5;i++)
        writef<<data[i]<<" ";
        writef<<endl;

      /*print character
      for(int i=0;i<5;i++)
        printf("%c ",&data[i]);
        writef<<endl;*/

        ///give extra security
        for(int i=0;i<5;i++){
            data[i]=(data[i]+14)%32;
        }
      writef<<"The new decimal are..........."<<endl;
      for(int i=0;i<5;i++)
        writef<<data[i]<<" ";
      writef<<endl;
      ///make decimal to character
      for(int i=0;i<5;i++)
        ch[i]=data[i];
        ///print character
        for(int i=0;i<5;i++)
            writef<<ch[i]<<" ";
        writef<<endl;

    return 0;
}

