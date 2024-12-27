#include <stdio.h>
#include <regex.h>
#include <string.h>
#include <stdbool.h>

bool is_int(const char *str)
{
    const char *pattern = "^-?[0-9]+$";
    regex_t regex;
    int reti;
    reti = regcomp(&regex, pattern, REG_EXTENDED);

    reti = regexec(&regex, str, 0, NULL, 0);
    regfree(&regex);
    if(!reti)
        return true;
    else 
        return false;
}

bool is_float(const char *str)
{
    const char *pattern = "^-?[0-9]+\\.[0-9]+$";
    regex_t regex;
    int reti;
    reti = regcomp(&regex, pattern, REG_EXTENDED);

    reti = regexec(&regex, str, 0, NULL, 0);
    regfree(&regex);
    if(!reti)
        return true;
    else 
        return false;
}

bool is_sci(const char *str)
{
    const char *pattern = "^-?[0-9]\\.[0-9]+[eE]-?[0-9]+$";
    regex_t regex;
    int reti;
    reti = regcomp(&regex, pattern, REG_EXTENDED);

    reti = regexec(&regex, str, 0, NULL, 0);
    regfree(&regex);
    if(!reti)
        return true;
    else 
        return false;
}

bool is_operator(const char *str)
{
    if(strcmp(str, "+") == 0 || strcmp(str, "-") == 0 ||strcmp(str, "*") == 0 || strcmp(str, "/") == 0)
        return true;
    return false;
}

long long int_calc(const char *str, long long a, long long b)
{
    if(strcmp(str, "+") == 0)
        return a + b;
    if(strcmp(str, "-") == 0)
        return a - b;
    if(strcmp(str, "*") == 0)
        return a * b;
    return 0;
}

long double float_calc(const char *str, long double a, long double b)
{
    if(strcmp(str, "+") == 0)
        return a + b;
    if(strcmp(str, "-") == 0)
        return a - b;
    if(strcmp(str, "*") == 0)
        return a * b;
    if(strcmp(str, "/") == 0)
        return a / b;
    return 0;
}

