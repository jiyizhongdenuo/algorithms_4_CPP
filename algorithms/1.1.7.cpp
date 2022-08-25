#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstdio>
int main()
{
    using std::cout; using std::endl;
    double t=9.0;
    while(abs(t-9.0/t)>0.001)
        t=(9.0/t+t)/2.0;
    printf("a:%f\n",t);
    // cout<<std::setprecision(5)<<t<<"  "<<3.141592<<endl;
    cout<<std::setiosflags(std::ios::fixed)<<t<<endl;
    int sum=0;
    for(int i=1;i<1000;i++)
        for(int j=0;j<i;j++)
            sum++;
    cout<<"b:"<<sum<<endl;
    sum=0;
    for(int i=1;i<1000;i*=2)
        for(int j=0;j<1000;j++)
            sum++;
    cout<<"c:"<<sum<<endl;
    return 0;
}