#include<iostream>
using namespace std;
int main()
{
    float student[10][3]={{1233,55,3.93},
                          {4456,23,3.00},
                          {5662,31,3.89},
                          {6669,29,3.98},
                          {7660,52,3.75},
                          {8668,51,3.78},
                          {9667,30,3.67},
                          {1066,50,3.93},
                          {1142,58,3.93},
                          {3465,90,3.65}};

    int row,i=0;
    cout<<"Student ID of who's CGPA is more than 3.75: ";
    for(row=0;row<10;row++)
    {
        if(student[row][2]>3.75)
        {
            cout<<student[row][0]<<"  ";
        }
        if(row==9)
        {
            for(int row=0;row<10;row++)
            {
                if(row==0)
                {
                    cout<<"\n\nStudent ID's who completed more than 50 credits: ";
                }
                if(student[row][1]>50)
                {
                    cout<<student[row][0]<<"  ";
                }
            }
        }
    }


    return 0;
}

