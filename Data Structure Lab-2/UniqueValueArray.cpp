#include<iostream>
using namespace std;
int main()
{
    //uniqueValuedArray://
    int Array[8]={1,2,3,4,5,6,7,8};

    //NOT uniqueValuedArray://
    //int Array[8]={1,2,2,3,3,4,4,5};

    int q=0;

    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<8;j++)
        {
            if(Array[i]==Array[j])
            {
                q=1;
                Array[j]=-1;
            }
        }
    }
    if(q==1)
    {
        cout<<"Unique Elements of the array:  ";
        for(int i=0;i<8;i++)
        {
            if(Array[i]!=-1)
            {
                cout<<Array[i]<<"  ";
            }
        }
    }
    else
    {
        cout<<"Array Already Unique."<<endl;
    }
    return 0;
}



