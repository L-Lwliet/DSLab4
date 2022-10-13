//will sort student objects through their instances such as CGPA
#include<iostream>
using namespace std;

class Student{
public:
    string name, Sid;
    float cgpa;

    void showD(){
        cout<<"\nThe student's name is: "<<name<<endl;
        cout<<"Student's ID: "<<Sid<<endl;
        cout<<"CGPA: "<<cgpa<<"\n"<<endl;
    }
};

int main(){
    string n,id;
    float cg;
    cout<<"Name: ";
    cin>>n;
    cout<<"Student ID: ";
    cin>>id;
    cout<<"CGPA: ";
    cin>>cg;

    Student st1;
    st1.name=n;
    st1.Sid = id;
    st1.cgpa = cg;

    Student st2;
    st2.name=n;
    st2.Sid = id;
    st2.cgpa = cg;

    Student st3;
    st3.name=n;
    st3.Sid = id;
    st3.cgpa = cg;

    Student st4;
    st4.name=n;
    st4.Sid = id;
    st4.cgpa = cg;

    Student st5;
    st5.name=n;
    st5.Sid = id;
    st5.cgpa = cg;

    st.showD();

    return 0;
}
