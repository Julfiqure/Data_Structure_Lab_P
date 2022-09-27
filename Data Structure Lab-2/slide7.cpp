#include<iostream>
using namespace std;
int main()
{
    int Array_1[]={10,20,30,40,50};
    int Array_2[]={1,2,3,4,5,6,7,8};
    int MergedArray[13];
    int a=sizeof(Array_1);
    int b=sizeof(Array_2);
    int i;

    for(i=0;i<a;i++)
    {
        MergedArray[i]=Array_1[i];
    }
    for(i=0;i<b;i++)
    {
        MergedArray[i+5]=Array_2[i];
    }

    for(i=12;i>=0;i--)
    {
        cout<<MergedArray[i]<<"    ";
    }
    return 0;

}
