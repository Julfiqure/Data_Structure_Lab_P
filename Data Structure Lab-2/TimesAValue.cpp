#include<iostream>
using namespace std;
int main()
{
    int A[8]={1,3,3,4,6,6,7,8};
    int i,n,w=0;
    cout<<"Enter An Integer number:"<<endl;
    cin>>n;

    for(i=0;i<8;i++)
    {
        if(n==A[i])
        {
            w++;
        }
    }
    if(w!=0)
    {
        cout<<"The Number occurs "<<w<<" times in the Array."<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;

    }
}
