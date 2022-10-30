#include<iostream>
using namespace std;

int main()
{
    int n,temp=0;
    cout<<"Enter Array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements:"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
        cout<<endl<<endl<<"Elements:";
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<endl<<endl;
    cout<<"After Bubble Sorting:";
    for(int i=0;i<(n-1);i++)
    {
        for(int j=0;j<(n-i-1);j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"   ";
    }



    return 0;
}
