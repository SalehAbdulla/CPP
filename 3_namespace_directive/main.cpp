/*********************************
 Basics I/O using cin and cout

 cout, cin, cerr, and clog are objects represnting streams

cout
    1- standard output stream
    2- console
cin
    1- standard input stream
    2- keyboard

<< Insertion operator (output streams)
>> Extraction operator (input streams)

**********************************/
#include <iostream>

// use everything
using namespace std;

// use only what I

using std:: cout;
using std:: cin;
using std:: endl;

int DemoUsingIo();

int main() {
    DemoUsingIo();
    return 0;
}

int DemoUsingIo() {
    cout << "hello";
    cout << "World" << endl;
    cout << "Hello" << "world\n";
    cout << "Hello\nOut\nThere\n";

    int num1;
    int num2;
    double num3;
    // ------------------
    // cout << "Enter an integer 1: ";
    // cin >> num1;
    // cout << "Enter an integer 2: ";
    // cin >> num2;
    // cout << "You have entered " << num1 << " and " << num2 << endl;
    // ------------------

    // cout << "Enter two integers separated with a space: \n";
    // cin >> num1 >> num2; // this is chaining extracting operation
    // cout << "You have entered: " << num1 << " and " << num2 << endl;


    cout << "Enter a double: ";
    cin >> num3;
    cout << "You entered: " << num3 << endl;




    return 0;
}
