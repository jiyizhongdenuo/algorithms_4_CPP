// #include"1.1.9.cpp"
#include<iostream>
#include<cstring>
#include<sstream>
int main()
{
    using namespace std;
    std::istringstream iss;
    string test="122 233";
    iss.str(test);
    int t;
    while(iss>>t) {
        cout<<t<<endl;
    }
    int numb[10];
    // for(int i=0 ;numb[i]<2;i++)
    // {
    //     iss>>numb[i];
    //     cout<<numb[i];
    // }
    // cout<<test[0];
    return 0;
}