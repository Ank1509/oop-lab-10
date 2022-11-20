/* WAP to implement Basic Type to Class Type as taught in Theory.*/


#include<iostream>
using namespace std;
class time1
{
int hour,min;
public:
time1()
{
    hour=0;
    min=0;
} 
time1(int t)
{
    hour=t/60.0;
    min=t%60;
}
void display()
{
    cout<<"hour:"<<hour<<endl;
    cout<<"min:"<<min<<endl;
}
};
int main()
{
    time1 t1;
    int duration=90;
    // duration=90;
    // time1 t1(duration);
    t1=duration;
    t1.display();
    return 0;

    


}