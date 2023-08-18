#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // C-style string
    char str[] = "A string";

    // C++ string class
    string state = "California", city = "Oakland", cityState;

    // get length of string object from string class
    cout << state.length() << endl;

    // concatenate strings
    cityState = city + ", " + state;   // cityState is now "Oakland, California"

    // add another string within one string at an arbitrary index
    cityState.insert(19, ", 94501");
    cout << cityState << endl;

    // remove a certain number of characters from a string, starting at a certain index
    cityState.erase(1,2);  // starting on index 1, remove 2 characters
    cout << cityState << endl;

    // compare two strings
    bool isCityState = city != state;
    bool compCityState = city > state;
    cout << isCityState << endl;
    cout << compCityState << endl;

    // read whitespace-separated strings
    string s = "test";
    //cin >> s;   // if you input "New York", s will equal "New"
    cout << s << endl;

    // read in a line of text up to a delimiter, which is the 3rd argument of getline() (default delim is \n)
    //getline(cin, s);
    //cout << s << endl;  // if you comment out line 27 and input "New York", that is what s will be stored as 
    ifstream fin;
    string userName;
    //getline(fin, userName, ':');

    // find the first/last character in the string
    int firstChar = cityState.find_first_of('c');
    int lastChar = cityState.find_last_of('i');

    // extract substring from string
    string fullname = "Lucas Vanslette";
    int index = fullname.find_last_of(' ');
    string firstname = fullname.substr(0,index);

    // find a substring within a string, return the index of the first letter of the substring
    index = fullname.find(firstname);  // this should return 0

    // convert from string object to C-style string
    const char* cString = fullname.c_str();


    return 0;
}