#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sound:";
    }
};
class Cat:public Animal{
    public:
    void sound(){
        cout<<"meow meow:"<<endl;
    }
};
class Dog:public Animal{
    public:
void sound(){
    cout<<"bhow bhow:";
}
};
int main(){
    Animal *ptr;
    Cat c;
    ptr=&c;
    ptr->sound();
    Dog d;
    ptr=&d;
    ptr->sound();
    return 0;
}
