#include <iostream>
#include <cassert>
#include <cstring>
#include "cstr.hpp"

int main() {
    // length()
    cout << "Testing length() first..." << endl;
    cout << "Hello should be 5 characters long" << endl;
    assert(length("hello") == 5);
    cout << "Empty string should be 0 characters long" << endl;
    assert(length("") == 0);
    cout << "Omae wa mou shindeiru should be 21 characters long" << endl;
    assert(length("omae wa mou shindeiru") == 21);
    cout << "Okay, looks like length() is working properly.  Onto the next batch" << endl << endl;

    // copy() and comp()
    cout << "Now testing copy() and comp()..." << endl;
    char buffer[100];
    cout << "Testing copy() with \"test\"..." << endl;
    copy(buffer, "test");
    assert(!comp(buffer, "test"));
    cout << "Testing copy() with \"xdd we rise up forever\"..." << endl;
    copy(buffer, "xdd we rise up forever");
    assert(!comp(buffer, "xdd we rise up forever"));
    cout << "Testing comp() with \"cat\" and \"dog\"..." << endl;
    assert(comp("cat", "dog") == -1);
    cout << "Testing comp() with \"cat\" and \"bat\"..." << endl;
    assert(comp("cat", "bat") == 1);
    cout << "Testing comp() with \"cat\" and \"cat\"..." << endl;
    assert(!comp("cat", "cat"));
    cout << "Testing comp() with \"cat\" and \"cats\"..." << endl;
    assert(comp("cat", "cats") == -1);
    cout << "Testing comp() with \"dogs\" and \"do\"..." << endl;
    assert(comp("dogs", "do") == 1);
    cout << "Looks like both copy() and comp() are working properly.  Next test coming up." << endl;

    // ncopy()
    ncopy(buffer, "mountaineer", 8);
    assert(!comp(buffer, "mountain"));
    assert(comp(buffer, "mountaineer") == -1);
    ncopy(buffer, "everything", 10);
    assert(!comp(buffer, "everything"));

    // comp()
    assert(comp("a", "b") == -1);
    assert(comp("b", "a") == 1);
    assert(comp("abc", "abc") == 0);
    assert(comp("ab", "abc") == -1);

    cout << "All tests passed." << endl;
    return 0;
}

