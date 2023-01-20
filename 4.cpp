/*Write a C++ program to accept an email address and throw an exception if it does not
contain @ symbol.
*/
#include <iostream>
using namespace std;

int main()
{
    string Email;
    cout << "Enter your Email:   ";
    getline(cin, Email);
    try
    {
        int i;
        for (i = 0; Email[i]; i++)
        {
            if (Email[i] == '@')
            {
                i = -1;
                break;
            }
        }
        if (i != -1)
            throw "Invalid Email address!";
        cout << "Valid Email address" << endl;
    }
    catch (const char *Msg)
    {
        cout << Msg << endl;
    }
    return 0;
}
