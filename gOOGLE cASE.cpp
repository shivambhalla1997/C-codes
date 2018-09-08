#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);
    int i;
    char c=str[0];
    c=tolower(c);
    cout<<" "<<c;
    for(i=1;i<str.length();i++)
    {
        if(str[i]==' ')
        {
            char ch=str[i+1];
            ch=tolower(ch);
            cout<<" "<<ch;
            i++;
        }
        else
        {
            char ch=str[i];
            ch=toupper(ch);
            cout<<ch;
        }
    }
    return 0;
}
