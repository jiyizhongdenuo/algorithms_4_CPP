
#include<iostream>

int euclid(int a,int b)
{
    if(a==0 || b==0) return 0;
    int t=a+b;
    a=(a>b)?a:b;
    b=t-a;
    while((a%=b)!=0)
    {
        b=euclid(a,b);
    }
    return b;
}
int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<euclid(105,24)<<endl;
    cout<<euclid(1111111, 1234567)<<endl;
    cout<<euclid(100,10)<<endl;
    return 0;
}