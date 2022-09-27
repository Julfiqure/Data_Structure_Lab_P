#include<iostream>
using namespace std;
int main()
{
    int Array[8]={1,3,3,4,5,6,7,7},Arr[8];
    int temp,i;
    for(i=0;i<8;i++)
    {
        temp=Array[i];
        Arr[temp]++;
    }
    for(i=1;i<8;i++)
    {
        if(Arr[i]>0 && Arr[i]==1)
        {
            cout<<i<<" occurs "<<Arr[i]<<" time\n";
        }
        else if(Arr[i]>=2)
        {
            if(i==2){}
            else
            {
                cout<<i<<" occurs "<<Arr[i]<<" times\n";
            }
        }
    }
}
