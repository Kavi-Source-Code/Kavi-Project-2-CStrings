#include "./cstr.hpp"

/**
 * Returns the length of the given c string.
 * Hint: the end of a c string is denoted by '\n' 
 * 
 * str - a c-string that cannot be changed within the function
 */
int length(const char* str){
    // TODO: remove the return 0 below and implement this function
    return 0;
}

/**
 * Function that copies all of the source string into the destination string.
 * Does not return anything.
 * 
 * Hint 1: you will need to use the length() function, so make sure that is correct.
 * Hint 2: make sure you also add the null terminating character at the end of the copying.
 * Note: do not use the strlen() nor the strcpy() function.
 * 
 * dst - the destination str that will have its contents updated.
 * src - the source str that will copy its contents to the destination str.
 */
void copy(char* dst, const char* src){
    // TODO: implement this function
}

/**
 * Function that copies `n` characters from src to dst.  
 * Does not return anything.
 * 
 * Hint 1: see the hints from the copy() function.
 * Hint 2: if n is less than the # of characters from src, 
 *         then you can just call copy() instead.
 * Note: do not use the strlen() nor the strncpy() function.
 * 
 * dst - the destination str that will have its contents updated.
 * src - the source str that will copy its contents to the destination str.
 * n   - the number of characters to copy from src to dst
 */
void ncopy(char* dst, const char* src, int n){
    // TODO: implement this function
}

/**
 * Function that adds all of src to dst.  
 * Unlike with copy, this function should not override
 *   what is currently in dst.
 * However, if there is not enough space to add all of src to dst,
 * then add whatever you can and ensure the last index is the null character.
 * 
 * Hint: to find out the capacity of a cstring, use the sizeof() function.
 *       sizeof() returns the capacity of any data type in bytes.  
 * 
 * dst - destination string
 * src - source string
 */
void cat(char* dst, const char* src){
    // TODO: implement this function
}

/**
 * Overloaded version of cat that adds a single character to the destination string.
 * 
 * See the previous version of cat to see its rules, as they also apply here.
 * Only difference is to make sure that dst still has at least 1 available space.
 * 
 * dst - destination string
 * c - single character to add to dst
 */
void cat(char* dst, char c){
    // TODO: implement this function
}

/**
 * A function that compares how cstr1 compares to cstr2 in alphabetical order,
 * while also obeying the ASCII table.  
 * 
 * Link to ASCII Table for codes: https://www.asciitable.com
 * 
 * Return -1 if cstr1 comes before cstr2
 * Return 1 if cstr1 comes after cstr2
 * Return 0 if cstr1 and cstr2 are equal
 * 
 * Hint 1: the lengths may not be equal.  If len(cstr1) < len(cstr2)
 *         and cstr1 is a substring of cstr2, return -1
 * Note: do not use the strlen() nor the strcmp() function.
 */
int comp(const char* cstr1, const char* cstr2){
    // TODO: implement this function
}

/**
 * A function that checks to see if a given string is a substring of another.
 * Return true if sub is a substring of str, or false otherwise.
 * 
 * A substring is where a string s1 can be seen within another string s2.
 * 
 * Note: if two strings are equal, then they can also be considered 
 * as substrings of each other.
 * 
 * Hint: order matters.  If substring is longer than str, then there is no substring.
 * 
 * sub - a substring to search for within str
 * str - the original string that the substring looks at
 */
bool is_substr(const char* sub, const char* str){
    // TODO: implement this function
    return false;
}

/**
 * Extra Credit:
 * 
 * Function that returns how many times a delimiter appears in a given string.
 * 
 * str - c string
 * c - a character to search for
 */
int count(const char* str, char c){
    // TODO: remove the return 0 below and implement this function
    return 0;
}

/**
 * Extra Credit:
 * 
 * A function that breaks apart a large string into tokens, 
 * separated by a delimiter.  You can assume each token will hold no more than
 * 500 characters long.
 * 
 * For example, "this,is,a,test,string" should break up into:
 * ["this", "is", "a", "test", "string"] if the ',' delimiter is specified.
 * 
 * Hint 1: you will need to complete the count() function first.
 * Hint 2: the number of tokens = count() + 1
 */
char** tokenize(const char* str, char delimiter){
    // remove the return nullptr below and implement this function
    return nullptr;
}

