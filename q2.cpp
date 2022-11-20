// class type to basic type
#include<iostream>
using namespace std;
class time1
{
    int hour,min;
    public:
    time1(int a=0,int b=0)
    {
        hour=a;
        min=b;
    }
    void display()
    {
        cout<<"hour:"<<hour<<endl;
        cout<<"min"<<min<<endl;

    }
    operator int()
    {
        return(hour*60+min);
    }
};
int main()
{
    int a,b;
    cout<<"enter  hour and min:";
    cin>>a;
    cin>>b;
    time1 t1(a,b);
    int duration;
    duration=t1;
    t1.display();
    cout<<"duration:"<<duration;
    return 0;

}