#include<iostream>

int main()
{
    using namespace std;
    int N;
    cin>>N;
    cin.ignore(1000,'\n');
    string s="";
    for(int i=N;i>0;i/=2)
    {
        s=std::to_string(i&1)+s;
    }
    cout<<s<<endl;
}