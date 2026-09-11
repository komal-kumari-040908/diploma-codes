#include<iostream>
using namespace std;
class Square{
    private:
    int num,sqrt;
    public:
    void accept(){
        cout<<"enter number:";
        cin>>num;
    }
    void calculate(){
     sqrt=num*num;
    }
    void display()
    {
        cout<<"square root of number is:"<<sqrt<<endl;
    }
};
int main(){
    Square s;
    s.accept();
    s.calculate();
    s.display();
    return 0;
}
