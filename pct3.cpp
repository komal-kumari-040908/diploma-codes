#include<iostream>
using namespace std;
int main(){
    double length ,breadth;
    cout<<"enter length of the rectangle:";
    cin>>length;
    cout<<"enter breadth of the rectabgle:";
    cin>>breadth;
    float areainfloat=(float)length*(float)breadth;
    int areainint=(int)length*(int)breadth;
    cout<<"area in float:"<<areainfloat<<endl;
    cout<<"area in int:"<<areainint<<endl;
    return 0;
}
