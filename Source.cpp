#include <iostream>
#include <cstring>
#include <string>
#define TESTING

using namespace std;

string Change(string& str)
{
    if (str.length() < 2)
    {
        cout << "������ ����� �������";
        return str;
    }

    while (str.find("BASIC") != -1)
    {
        str = str.replace(str.find("BASIC"), 6, "Delphi");

    }
    return str;
}
#ifdef TESTING
int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Modified string (param) : " << str << endl;

    Change(str);

    cout << "Modified string (result): " << str << endl;
    return 0;
}
#endif
