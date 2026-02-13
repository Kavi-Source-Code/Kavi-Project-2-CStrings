#include "./cstr.hpp"

// Feel free to add any additional tests to the main function.
// However, I will primarily look at the test results from GitHub.

int main(){
    string str_test1 = "this is some string";
    assert(strlen(str_test1.c_str()) == length(str_test1.c_str()));
    char c_test1[200];
    copy(c_test1, str_test1.c_str());
    assert(!strcmp(c_test1, str_test1.c_str()));
    
    string str_test2 = "alpha";
    string str_test3 = "beta";
    string str_test4 = "betan";
    assert(strcmp(str_test2.c_str(), str_test3.c_str()) < 0 && comp(str_test2.c_str(), str_test3.c_str()) == -1);
    assert(strcmp(str_test3.c_str(), str_test4.c_str()) < 0 && comp(str_test3.c_str(), str_test4.c_str()) == -1);
    assert(!strcmp(str_test3.c_str(), "beta") && !comp(str_test3.c_str(), "beta"));
    assert(strcmp(str_test4.c_str(), str_test3.c_str()) > 0 && comp(str_test4.c_str(), str_test3.c_str()) == 1);
    string str_test5 = "this-is-a-test-string";
    char** tokens = tokenize(str_test5.c_str(), '-');
    for(int i = 0; i < 5; i++){
        cout << tokens[i] << endl;
    }
    assert(is_substr("test", str_test5.c_str()));
    assert(is_substr(str_test3.c_str(), str_test4.c_str()));
    assert(!is_substr("test", str_test2.c_str()));

    return 0;
}
