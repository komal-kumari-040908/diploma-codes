#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    Person(string name,int age){
        this->name=name;
        this->age=age;
    }
    void display(){
        cout<<"name of person is:"<<name<<endl;
        cout<<"age of person is:"<<age<<endl;
    }
};
int main(){
    Person obj("Komal",18);
    obj.display();
    return 0;
}
