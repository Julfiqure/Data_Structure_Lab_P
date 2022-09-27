#include<iostream>
using namespace std;

int main()
{
    int Array[8]={1,12,3,41,42,1,11,18};
    int UniqueArray[8];

    int i,j,k=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
            {
                if(Array[i]==Array[j])
                {
                    break;
                }

            }
    }
    if(k==0)
    {
        cout<<"Array Already Unique.";
    }
}
