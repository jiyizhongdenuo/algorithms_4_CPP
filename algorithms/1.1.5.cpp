#include<iostream>
#include<cstdlib>
int main()
{
    using std::cout; using std::endl;using std::cin;
    double x,y;
    cout<<"输入两个浮点数："<<endl;
    cin>>x>>y;
    cin.ignore(1000,'\n');//清楚多余的输入；
    if (0<x && x<1 && 0<y &&y<1)
        cout<<"true!";
    else
        cout<<"false!";
    
    return 0;
}