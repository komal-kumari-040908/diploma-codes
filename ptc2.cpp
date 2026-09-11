#include<iostream>
using namespace std;
int main(){
    int *ptr;
    ptr=new int;
    cout<<"enter number:";
    cin>>*ptr;
    cout<<"memory allocated to :"<<*ptr<<endl;
    delete ptr;
    cout<<"deallocates memory:";
    return 0;

}
