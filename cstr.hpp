#include <iostream>
#include <string>
#include <string.h>
#include <assert.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// Required functions
int length(const char*);
void copy(char*, const char*);
void ncopy(char*, const char*, int);
void cat(char*, const char*);
void cat(char*, char);
int comp(const char*, const char*);
bool is_substr(const char*, const char*);
bool is_palindrome(const char*);


// Extra credit:
int count(const char*, char);
char** tokenize(const char*, const char);
