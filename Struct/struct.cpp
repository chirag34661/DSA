#include<iostream>
using namespace std;

struct emp{
    int emp_id;
    int age;
    char name[25];
    float salary;
};
int main(){
    struct emp e;
    cout<<"Enter all details(employee_id,age,name,salary) respectively: ";
    cin>>e.emp_id>>e.age;
    cin.ignore();
    cin.getline(e.name,25);
    cin>>e.salary;
    cout<<"Your employee_id:"<<e.emp_id<<endl;
    cout<<"Age:"<<e.age<<endl;
    cout<<"Name:"<<e.name;
    cout<<endl<<"Salary:"<<e.salary;
    system("pause>0");
}
