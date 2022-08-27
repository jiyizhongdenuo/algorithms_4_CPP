
#include<iostream>

int Mystery1(int a,int b);
int Mystery2(int a,int b);
int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<Mystery1(2,25)<<endl<<Mystery1(3,11)<<endl;
    cout<<Mystery2(2,25)<<endl<<Mystery2(3,11);
    return 0;
}


int Mystery1(int a,int b)
{
    if(b==0)return 0;
    if(b%2==0) return Mystery1(a+a,b/2);
    return Mystery1(a+a,b/2)+a;
}
int Mystery2(int a,int b)
{
    if(b==0)return 1;
    if(b%2==0) return Mystery1(a*a,b/2);
    return Mystery1(a*a,b/2)*a;
}
