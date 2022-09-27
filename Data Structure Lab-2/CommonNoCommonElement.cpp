#include<iostream>
using namespace std;
int main()
{
    int A[8]={1,2,3,4,5,6,7,8};
    int B[5]={9,10,11,12,13};

    int C[13];
    int i,j,n;

    for(i=0;i<8;i++)
    {
        for(j=0;j<5;j++)
        {
            if(A[i]==B[j])
            {
                C[i]=A[i];
                cout<<C[i]<<"    ";
                n=1;
            }
        }
    }
    if(n!=1)
    {
        cout<<"NO COMMON ELEMENT!!"<<endl;
    }

}
