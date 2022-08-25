#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int a=10&3;
    int b=7|6;
    string aa=1+2+"3";
    cout<<'\n'<<2.0e-6*100000000.1<<endl;
    cout<<a<<'\t'<<b<<endl<<typeid(true&&false||true&&true).name();
    cout<<aa<<std::endl;
}