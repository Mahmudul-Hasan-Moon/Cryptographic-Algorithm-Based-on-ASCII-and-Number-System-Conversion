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
    char str[100];
    int i;

    FILE *fp;

    fp=fopen("message.txt","w");

    gets(str);

    for(i=0;str[i]!='\0';i++){  /// For each character
    int n,k=0,q,b,s,count=0,m,o,h;
    int arr[100],data[5];
    int mat[100][100], t_mat[100][100];
    char ch[5];

    n=str[i];

    o=octal(n);
    h=hexa(n);

    int product = n*o*h;

    cout<<n<<" "<<o<<" "<<h<<" "<<product<<endl;

    q=product;
    while(q!=0)
    {
        m=q%2;

        arr[k]=m;

        q=q/2;
        k++;
        count++;
    }
    cout<<count<<endl;
    for(int i=k-1;i>=0;i--)
        cout<<arr[i];
        cout<<endl;
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
        cout<<"The matrix is :"<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        ///print transpose
        cout<<endl<<"The transpose matrix is ...."<<endl;
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                 cout<<t_mat[i][j]<<" ";
            }
            cout<<endl;
        }
      cout<<"The decimal are......"<<endl;
      for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
        cout<<endl;

      ///print character
      for(int i=0;i<5;i++)
        printf("%c ",&data[i]);
        cout<<endl;

        ///give extra security
        for(int i=0;i<5;i++){
            data[i]=(data[i]+14)%32;
        }
      cout<<"The new decimal are..........."<<endl;
      for(int i=0;i<5;i++)
        cout<<data[i]<<" ";
      cout<<endl;
      ///make decimal to character
      for(int i=0;i<5;i++)
        ch[i]=data[i];
        ///print character
        for(int i=0;i<5;i++){
            cout<<ch[i]<<" ";
            fprintf(fp,"%c",ch[i]);
        }
        cout<<endl;
    }

    return 0;
}
