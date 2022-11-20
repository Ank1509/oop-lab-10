/*WAP to implement read and write operation for multiple files.*/

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("country");

    fout<<"Unnited states of america \n";
    fout<<"United Kingdom \n";
    fout<<"India \n";

    fout.close();

    fout.open("capital");

    fout<<"washington \n";
    fout<<"London \n";
    fout<<"New Delhi \n";

    fout.close();

    const int N=80;
    char line[N];

    ifstream fin;
    fin.open("country");
    cout<<"conents of country file \n";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }

    fin.close();
    fin.open("capital");
    cout<<"conents of capital file \n";

    while(fin)
    {
        fin.getline(line,N);
        cout<<line;
    }
    fin.close();
    return 0;
}