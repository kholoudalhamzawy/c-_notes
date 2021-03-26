#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

    //default values:
    int i; //garbage, but 0 if global
    string j; //empty string ""

    //ways to initialize srting
    string n(10, 'k'); // n="kkkkkkkkkk"
    string k(j);
    string l = j; //3adé
    string ll("value");
    string lll = "value";


    j.size(); //returns a string::size type, which is big enough to store any string
    auto len = j.size(); //  len has type string::size_type
    // Because size returns an unsigned type, it is essential to remember that expressions that mix signed and unsigned data can have surprising results
    // For example, if n is an int that holds a negative value, then s.size() < n will almost surely evaluate as true.
    // It yields true because the negative value in n will convert to a large unsigned value.
    // so dont compare it with ints

    // punct_cnt has the same type that s.size() returns, so when we count puncetuation marks (! , ? etc), or any thing else in the string, we use it too; string::size_type
    decltype(k.size()) punct_cnt = 0;

    // read input a line at a time and discard blank lines
    while (getline(cin, j))
        if (!j.empty())
            cout << j << endl; //endl clears the buffer

    //  string literals are not standard library strings, they cant be added
    string s6 = j + ", " + "world"; // ok: each + has a string operand
//  string s7 = "hello" + ", " + k; // error: can't add string literals

    string s("Hello World!!!");



//   convert s to uppercase two ways:
    for (auto &c : s) // (note: c is a reference), if u use (auto c : s) it only copies the values of s, it wont work
        c = toupper(c); // its like pass by value and pass by reference in a function !!

    for (decltype(s.size()) index = 0; index != s.size(); ++index) //using subscribt (indexing)
        s[index] = toupper(s[index]);


    // program to convert dicimal to hexadesimal cant be more ease :"D
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    string result;
    string::size_type v; // cause we will compare it to a size, string v; and use v.size() fe elcomparision 3adé would also work
    while (cin >> v) {
        if (v < hexdigits.size()) // ignore invalid input
            result += hexdigits[v]; // fetch the indicated hex digit
    }
//    If we give this program the input
//    12 0 5 15 8 15
//    the output will be
//    Your hex number is: C05F8F



///idk just smt
//    Advice: Use the C++ Versions of C Library Headers
//    In addition to facilities defined specifically for C++, the C++ library incorporates the C library.
//    Headers in C have names of the form name .h. The C++ versions of these headers are named c name—they remove the .h suffix and precede the name with the letter c.
//    The c indicates that the header is part of the C library.
//    Hence, cctype has the same contents as ctype.h, but in a form that is appropriate for C++ programs.
//    In particular, the names defined in the cname headers are defined inside the std namespace,whereas those defined in the .h versions are not.
//    Ordinarily, C++ programs should use the cname versions of headers and not the name .h versions. That way names from the standard library are consistently found in the std namespace.
//    Using the .h headers puts the burden on the programmer to remember which library names are inherited from C and which are unique to C++.


}