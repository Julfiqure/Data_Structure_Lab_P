#include<iostream>
using namespace std;


class student
{
public:
    string name;
    int id;
    float cgpa;
    int cr_cmplet;

    student()
    {
    }

    void setname(string name)
    {
        this->name=name;
    }
    void setid(int id)
    {
        this->id=id;
    }
    void setcgpa(float cgpa)
    {
        this->cgpa=cgpa;
    }
    void setcr_cmplet(int cr_cmplet)
    {
        this->cr_cmplet=cr_cmplet;
    }
};


int main()
{
    int p=0;
    string name;
    int id;
    float cgpa;
    int cr_cmplet;
    char a;
    student temp;
    int x=0,y=0;

    int n;
    cout<<"Enter Student Number:";
    cin>>n;
    student Student[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Info For Student "<<i+1<<" :"<<endl;
        cout<<"Enter student id:";
        cin>>id;
        Student[i].setid(id);
        cout<<"\nEnter Student Name:";
        cin>>name;
        Student[i].setname(name);
        cout<<"\nEnter CGPA:";
        cin>>cgpa;
        Student[i].setcgpa(cgpa);
        cout<<"\nEnter Credit Completed:";
        cin>>cr_cmplet;
        Student[i].setcr_cmplet(cr_cmplet);
        cout<<endl;
    }

    cout<<endl<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<"Information for Student "<<i+1<<" :"<<endl;
        cout<<"Student id:";
        cout<<Student[i].id;
        cout<<"\n Student Name:";
        cout<<Student[i].name;
        cout<<"\nCGPA:";
        cout<<Student[i].cgpa;
        cout<<"\nCredit Completed:";
        cout<<Student[i].cr_cmplet;
        cout<<endl;

    }

    cout<<endl<<endl<<"Press a for bubble sort of cgpa.\nPress b for selection sort of creditwise.\nPress c for search by cgpa.";
    cout<<endl;
    cin>>a;
    switch(a)
    {

        case 'a':
            {
                for(int i=0;i<(n-1);i++)\
                {
                    y++;
                    for(int j=0;j<(n-i-1);j++)
                    {

                        if(Student[j].cgpa>Student[j+1].cgpa)
                        {
                            temp=Student[j];
                            Student[j]=Student[j+1];
                            Student[j+1]=temp;
                            x++;
                        }
                    }
                }
                cout<<"\nexchange:"<<x<<endl;
                cout<<"\ncomparison:"<<y<<endl;
                cout<<endl<<endl;
                cout<<"After Sorting:"<<endl<<endl;
                for(int i=0;i<n;i++)
                {
                    cout<<"Student id:";
                    cout<<Student[i].id;
                    cout<<"\nStudent Name:";
                    cout<<Student[i].name;
                    cout<<"\nCGPA:";
                    cout<<Student[i].cgpa;
                    cout<<"\nCredit Completed:";
                    cout<<Student[i].cr_cmplet;
                    cout<<endl<<endl;
                }
                cout<<endl;
                break;

            }

        case 'b':
            {
                int min_index=0;
                student temp;

                for(int i=0; i<n; i++)
                    {
                         min_index = i;

                         for(int j=i+1; j<n; j++)
                            {
                                 if(Student[min_index].cr_cmplet > Student[j].cr_cmplet) \
                                 {
                                     min_index = j;
                                 }
                            }

                                temp = Student[min_index];
                                Student[min_index]= Student[i];
                                Student[i] = temp;
                    }
                    for(int i=0;i<n;i++)
                    {
                        cout<<"Student id:";
                        cout<<Student[i].id;
                        cout<<"\n Student Name:";
                        cout<<Student[i].name;
                        cout<<"\nCGPA:";
                        cout<<Student[i].cgpa;
                        cout<<"\nCredit Completed:";
                        cout<<Student[i].cr_cmplet;
                        cout<<endl<<endl;
                   }

                        cout<<endl<<endl;
            }

        case 'c':
            {
                 float g;
                 cout<<"Enter cgpa for search:";
                 cin>>g;
                 for (int i=0;i<n;i++)
                 {
                     if(Student[i].cgpa==g)
                     {
                          cout<<"Student id:";
                          cout<<Student[i].id;
                          cout<<"\n Student Name:";
                          cout<<Student[i].name;
                          cout<<"\nCGPA:";
                          cout<<Student[i].cgpa;
                          cout<<"\nCredit Completed:";
                          cout<<Student[i].cr_cmplet;
                          cout<<endl;
                          p++;
                     }
                 }
                 if(p==0)
                    {
                 cout<<"\nNot Found.";
                 }
            }

    }


    return 0;
}
