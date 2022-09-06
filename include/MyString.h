#ifndef MYStRING
#define MYSTRING
#include<iostream>

class CMyString
{
public:
    CMyString();
    ~CMyString();
    const char * CStr() const;

private:
    char * m_str;
};

#endif