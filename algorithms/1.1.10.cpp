#include<iostream>

int main()
{
    using std::cout; using std::endl;
    bool b[3][2]={{true,false},{false,false},{true,true}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            if (b[i][j]==true)
                cout<<"* ";
            else
                cout<<i<<j<<" ";  
            
        }
        cout<<endl;
    }
    return 0;
}