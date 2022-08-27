#include<iostream>
#include<cstring>
#include<string>
#include<sstream>
using namespace std;

template<class T>
string to_string(T value)
{
    std::ostringstream o;
    o<<value;
    return o.str();
}
std::string exR1(int n)
{
    
    if(n<=0) return "";
    return exR1(n-3)+to_string(n)+exR1(n-2)+to_string(n);
}

int main()
{
    using std::cout; using std::endl;using std::cin;
    cout<<exR1(6)<<endl;
    return 0;
}