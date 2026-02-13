#include "../cstr.hpp"

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

    // is_substr()
    assert(is_substr("test", "this-is-a-test-string"));
    assert(is_substr("beta", "betan"));
    assert(!is_substr("test", "alpha"));
    assert(is_substr("doctor", "doctor"));
    assert(!is_substr("congratulations", "congrats"));

    // is_palindrome()
    assert(is_palindrome("racecar"));
    assert(is_palindrome("lisabasil"));
    assert(!is_palindrome("adam"));
    assert(is_palindrome("aDamada"));

    cout << "Congratulations, all tests have passed!" << endl;
    cout << "Optionally, let's test the extra credit functions too" << endl;

    // No asserts here, since these are extra credit.
    // Just use if statements instead

    // Testing count()
    if(count("one two three four spaces", ' ') == 4){
        cout << "ec test 1: count() is good" << endl;
    }
    else{
        cout << "ec test 1: count() is incorrect" << endl;
    }
    if(count("what;are;spaces;doing;here", ' ') == 0){
        cout << "ec test 2: count() is good" << endl;
    }
    else{
        cout << "ec test 2: count() is incorrect" << endl;
    }

    // Testing tokenize()
    char** tokens_1 = tokenize("this,is,a,test,string", ',');
    bool tokens_1_correct = (
        !comp(tokens_1[0], "this") &&
        !comp(tokens_1[1], "is") &&
        !comp(tokens_1[2], "a") &&
        !comp(tokens_1[3], "test") &&
        !comp(tokens_1[4], "string")
    );
    if(tokens_1_correct){
        cout << "ec test 3: tokenize() is good" << endl;
    }
    else{
        cout << "ec test 3: tokenize() is incorrect" << endl;
    }
    char** tokens_2 = tokenize("no-delimiters-here", ',');
    bool tokens_2_correct = (
        !comp(tokens_2[0], "no-delimiters-here")
    );
    if(tokens_2_correct){
        cout << "ec test 4: tokenize() is good" << endl;
    }
    else{
        cout << "ec test 4: tokenize() is incorrect" << endl;
    }

    return 0;
}

