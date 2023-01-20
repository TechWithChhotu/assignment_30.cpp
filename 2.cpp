/* Write a C++ program to demonstrate try, throw and catch statements.
 */
#include <iostream>
using namespace std;

int main()
{
    int x;
    cout << "Enter a Natural Number:  ";
    cin >> x;
    try
    {
        if (x == 0)
            throw "tujhe pata nahi hai, 0 Natural number nahi h.";
    }
    catch (const char *Str)
    {
        cout << Str << endl;
    }
    return 0;
}
