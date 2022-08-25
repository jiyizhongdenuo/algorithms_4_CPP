#include<iostream>

int main(int argc,char **argv)
{
    using  std::cout ;using std::endl;
    cout<<argc<<endl;
    int x=0;
    for(int i=1;i<argc;i++)
    {
        cout<<i<<endl;        
        if(*argv[i]==*argv[1])
        {           
            ++x;
            if (x==argc-1)
                cout<<"equal"<<endl;
            continue;
        }
        else
        { 
            cout<<"not equal"<<endl;
            break;
        }
        
    }

}