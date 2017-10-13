#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,c;
    getline(cin,a);
    if (a.length()>81)
    {
        cout<<"Error";
        exit(0);
    }
    for(int i=0;i<a.length()-1;i++)
    {
        if (a[i]==' ') a.replace(a.find(" "),1,"%20");
    }
    cout<<a;
}
