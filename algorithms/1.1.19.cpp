#include<iostream>
#include<cstring>
#include<sstream>
template<class T>
std::string Tostring(T value)
{
    std::ostringstream os;
    os<<value;
    return os.str();
}
long F(int N)
{
    if(N==0)return 0;
    if(N==1)return 1;
    return F(N-1)+F(N-2);
}
int main()
{
    using std::cout; using std::endl;using std::cin;using std::string;
    for(int i=0;i<100;i++)
    {
        cout<<Tostring(i)+" "+Tostring(F(i));
    }
    return 0;
}
