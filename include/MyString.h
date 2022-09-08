#ifndef MYStRING
#define MYSTRING
#include<iostream>

class CMyString
{
public:
    CMyString();
    CMyString(size_t length,char ch);
    ~CMyString();
    const char * CStr() const;

private:
    char * m_str;
};

#endif