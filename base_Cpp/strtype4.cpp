#include <iostream>
#include <string>
#include <cstring>

int main()
{
    using namespace std;
    char charr1[20];
    string str;

    cout << "Length of string in charr1 before input: "
         << strlen(charr1) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;

    cout << "Enter a line of text: \n";
    cin.getline(charr1, 20);
    cout << "You entered: " << charr1 << endl;
    cout << "Enter another line of text: \n";
    getline(cin, str);

    cout << "You entered: " << str << endl;
    cout << "Length of string in charr1 after input: "
         << strlen(charr1) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;

    return 0;
}
