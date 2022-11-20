/*WAP to implement read and write operation on a single file.*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream outf("item");
    cout<<"Enter item name:";
    char name[30];
    cin>>name;
    outf<<name<<"\n";
    cout<<"Enter item cost:";
    float cost;
    cin>>cost;
    outf<<cost<<"\n";
    outf.close();
    ifstream inf("item");
    inf>>name;
    inf>>cost;
    cout<<"Item name:"<<name<<"\n";
    cout<<"Item cost:"<<cost<<"\n";
    inf.close();
    return 0;
}