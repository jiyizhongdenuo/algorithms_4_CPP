
#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
int main()
{
    using std::cout; using std::endl;using std::cin;
    std::vector<int>aa;
    vector<int>whitelist = { 7, 1, 5, 1, 9, 5, 7, 7, 5, 1 };
    sort(whitelist.begin(),whitelist.end());
    for(int i=1;i<whitelist.size();i++)
    {
        if(whitelist[i]==whitelist[i-1])
        {
            whitelist.erase(whitelist.begin()+i);
            i--;
        }
        cout<<whitelist.size()<<"  ";
    }
    cout<<endl;
    for(int i=0;i<whitelist.size();i++)
    cout<<whitelist[i]<<endl;
    return 0;
}