#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Binary representation:\n";

    for (char ch : text)
    {
        for (int i = 7; i >= 0; i--)
        {
            cout << ((ch >> i) & 1);
        }
        cout << " ";
    }

    return 0;
}