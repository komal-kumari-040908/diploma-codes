#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
    string name;
    int rollno;
    public:
    void accept(){
        cout<<"enter name of the student:";
        cin>>name;
        cout<<"enter rollno of the student:";
        cin>>rollno;
    }
    void display(){
        cout<<"name of the student is:"<<name<<endl;
        cout<<"rollno of the student is:"<<rollno<<endl;
    }
};
int main(){
    Student s;
    s.accept();
    s.display();
    return 0;
}
