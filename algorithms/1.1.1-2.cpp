#include<iostream>
#include<cstdlib>
#include<typeinfo>
int main()
{
    using std::cout; using std::endl;
    cout<<"algorithms1.1.1:\t";
    cout<<(0+15)/2<<"\t"<<2.0e-6*100000000.1<<"\t"<<(true&&false||true&&true)<<endl;
    cout<<"algorithms1.1.2:\t";
    cout<<typeid((1+2.236)/2).name()<<"  "<<(1+2.236)/2<<"\t"<<typeid(1+2+3+4.0).name()<<"  "<<1+2+3+4.0<<"\t";
    cout<<typeid(4.1>=4.0).name()<<"  "<<(4.1>=4.0)<<"\t"<<typeid(1+2+"3").name()<<"  "<<1+2+"3"<<endl;
    
}