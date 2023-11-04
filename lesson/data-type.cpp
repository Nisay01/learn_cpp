#include <iostream>
#include <string>
using namespace std;

int main()
{

    int myNum = 5;             // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    double myDoubleNum = 9.98; // Floating point number
    char myLetter = 'D';       // Character
    bool myBoolean = true;     // Boolean
    string myText = "Hello";   // String
    cout << "My Number: ";
    cin >> myNum;
    cout << "My Float Number: ";
    cin >> myFloatNum;
    cout << "My Double Number: ";
    cin >> myDoubleNum;
    cout << "My Letter: ";
    cin >> myLetter;
    cout << "My Boolean: ";
    cin >> myBoolean;
    cout << "My Text: ";
    cin >> myText;

    cout << "My Number: " << myNum << endl;
    cout << "My Float Number: " << myFloatNum << endl;
    cout << "My Double Number: " << myDoubleNum << endl;
    cout << "My Letter: " << myLetter << endl;
    cout << "My Boolean: " << myBoolean << endl;
    cout << "My Text: " << myText << endl;
    return 0;
}
