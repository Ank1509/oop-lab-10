 /* WAP to show type conversion from a Celsius Class to Fahrenheit Class*/
 
 #include<iostream>
using namespace std;



class Fahrenheit
{
    int c;
    public:
    Fahrenhe(int a=0)
    {
        c=a;


    }
    void display()
    {
        cout<<"celsius:"<<p<<endl;
       ;

    }


};
class celsius
{
int f;

public:
Fahrenheit(int a=0)
{
    f=a;
    

}
void display()
{
    cout<<"Fahrenheit:"<<kg<<endl;
    
}
operator const celsius()
{
int c1=c*1.8+32;
    return celsius(p1);

}
};
int main()
{
    celsius o1(37);
    Fahrenheit o2;
    o2=o1;
    o1.display();
    o2.display();

    return 0;
}