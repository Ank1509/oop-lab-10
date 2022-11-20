/* WAP to show KG to Pound class conversion using Class to Class Type Conversion.*/


#include<iostream>
using namespace std;



class pound
{
    int p;
    public:
    pound(int a=0)
    {
        p=a;


    }
    void display()
    {
        cout<<"pound:"<<p<<endl;
       ;

    }


};
class kilo
{
int kg;

public:
kilo(int a=0)
{
    kg=a;
    

}
void display()
{
    cout<<"koli:"<<kg<<endl;
    
}
operator const pound()
{
int p1=2.204*kg;
    return pound(p1);

}
};
int main()
{
    kilo o1(8);
    pound o2;
    o2=o1;
    o1.display();
    o2.display();

    return 0;
}