#include<iostream>
int main()
{
    using std::cout; using std::endl;
    int f=0,g=1;
    for(int i=0;i<=15;i++)
    {
        cout<<"i"<<i<<":"<<f<<"\t";
        f=f+g;
        g=f-g;
    }
    cout<<endl;
}