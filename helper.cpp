// PF 2 HW Helper.cpp
// Used Bool Hash to implement two while loops rather than nested loops
//

#include "helper.h"
char *find_first_not_in_the_set(char *str, const char *set){
    bool hash[128] = { 0 };
    int i = 0;

    while(set[i] != '\0')
    {
        hash[(int)set[i]] = true;
        ++i;
    }

    i = 0;

    while(str[i] != '\0')
    {
        if (!hash[(int)str[i]]) return &str[i];
        ++i;
    }
    return nullptr;
}

char *find_first_in_the_set(char *str, const char *set){
    bool hash[128] = { 0 };
    int i = 0;

    while (set[i] != '\0')
    {
        hash[(int)set[i]] = true;
        ++i;
    }

    i = 0;

    while (str[i] != '\0')
    {
        if (hash[(int)str[i]]) return &str[i];
        ++i;
    }
    return nullptr;
}