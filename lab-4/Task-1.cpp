#include <iostream>

using namespace std;

class student
{
public:
    string name;
    int id;
    float cgpa;

    student()
    {

    }

    student(string name,int id,float cgpa)
    {
        this->name=name;
        this->id=id;
        this->cgpa=cgpa;

    }
};

int main()
{
    student s1("Rifti",224654,3.89);
    student s2("Sourav",224671,3.99);
    student s3("Miraz",224672,3.98);
    student s4("Dhrubo",224649,3.56);
    student s5("Arnob",224689,4);
    student s6("Nahid",224656,3.78);

    student Student[]={s1,s2,s3,s4,s5,s6};

    for(int i=0;i<6;i++)
    {
        cout<<Student[i].name<<"  ";
        cout<<Student[i].id<<"  ";
        cout<<Student[i].cgpa<<"  ";
        cout<<endl;
    }

    cout<<endl<<endl;

    int min_index=0;
    student temp;

    for(int i=0; i<6; i++){
        min_index = i;

        for(int j=i+1; j<6; j++){
            if(Student[min_index].cgpa > Student[j].cgpa){
                min_index = j;
            }
        }

        temp = Student[min_index];
        Student[min_index] = Student[i];
        Student[i] = temp;
    }

    for(int i=0; i<6;i++){
        cout<<Student[i].name<<" ";
        cout<<Student[i].id<<" ";
        cout<<Student[i].cgpa<<" ";
        cout<<endl;
    }

    cout<<endl;

    return 0;
}
