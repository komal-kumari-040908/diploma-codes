#include<iostream>
#include<string>
using namespace std;
class Staff{
    private:
 string name;
 float basic_salary;
 float DA;
 float HRA;
 float gross_salary;
 public:
 void accept(){
    cout<<"enter name:";
    cin>>name;
    cout<<"enter basic_salary:";
    cin>>basic_salary;
 }
 void calculate(){
    DA=basic_salary*0.45;
    HRA=basic_salary*0.30;
    gross_salary=basic_salary+DA+HRA;
 }
 void display(){
    cout<<"Name is:"<<name<<endl;
    cout<<"Basic salary is:"<<basic_salary<<endl;
    cout<<"DA is:"<<DA<<endl;
    cout<<"HRA is:"<<HRA<<endl;
    cout<<"gross salary is:"<<gross_salary<<endl;
 }
};
int main(){
    Staff s;
    s.accept();
    s.calculate();
    s.display();
    return 0;
}
