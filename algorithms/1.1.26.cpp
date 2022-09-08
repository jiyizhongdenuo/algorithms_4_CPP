#include<iostream>

int main()
{
    using std::cout; using std::endl;using std::cin;
    int a,b,c;
    cin>>a>>b>>c;
    cin.ignore(1000,'\n');
    int t;
    if (a > b) {
        t = a;
        a = b;
        b = t;
    }
    if (a > c) {
        t = a;
        a = c;
        c = t;
    }
    if (b > c) {
        t = b;
        b = c;
        c = t;
    }
    cout<<"a:"<<a<<"<b:"<<b<<"<c:"<<c<<endl;
}