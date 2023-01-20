/*Write a C++ program to accept a username if the username has less than 6 characters
or does contain any digit or special symbol.
*/
#include <iostream>
using namespace std;

int main()
{
    string UserName;
    int i;
    cout << "Enter your UserName: ";
    cin >> UserName;
    try
    {
        for (i = 0; UserName[i]; i++)
        {
            if (!(UserName.length() < 6 and (UserName[i] >= 'A' && UserName[i] <= 'Z' or UserName[i] >= 'a' and UserName[i] <= 'z')))
            {
                i = -1;
                throw "Invalid ! user name";
            }
        }
    }
    catch (const char *str)
    {
        cout << str << endl;
    }
    if (i != -1)
        cout << "Logic successfully" << endl;
    return 0;
}
