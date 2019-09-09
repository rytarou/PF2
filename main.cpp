// PF 2 HW 1
// Caleb Stinebaugh 010007049
// Used to test helper.cpp functions for finding letters in a string from a set
#include <iostream>
#include "helper.cpp"
#include "string.h"
using namespace std;
int main() {
    char test_string[15];
    char test_set[10];
    char *p; // pointer to the return character


    //test 1
    strcpy(test_string, "ABC.");
    strcpy(test_set, "CBA");

    p = find_first_in_the_set(test_string, test_set);
    cout << *p << endl;
    cout << *(p-1) << endl;
    cout << *(p+1) << endl;// the above output should e and *(p-1) is v and *(p+1) is r

    p = find_first_not_in_the_set(test_string, test_set);
    cout << *p << endl << endl; // the output should be H


    //test 2
    strcpy(test_string, "Hi People.");
    strcpy(test_set, "i");

    p = find_first_in_the_set(test_string, test_set);
    cout << *p << endl;
    cout << *(p-1) << endl;
    cout << *(p+1) << endl;// the above output should e and *(p-1) is v and *(p+1) is r

    p = find_first_not_in_the_set(test_string, test_set);
    cout << *p << endl << endl; // the output should be H

    //test 3
    strcpy(test_string, "Hi People.");
    strcpy(test_set, "!*&l");

    p = find_first_in_the_set(test_string, test_set);
    cout << *p << endl;
    cout << *(p-1) << endl;
    cout << *(p+1) << endl;// the above output should e and *(p-1) is v and *(p+1) is r

    p = find_first_not_in_the_set(test_string, test_set);
    cout << *p << endl; // the output should be H

}
