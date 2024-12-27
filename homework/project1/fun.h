#include <stdbool.h>
bool is_int(const char *str);
bool is_float(const char *str);
bool is_sci(const char *str);
bool is_operator(const char *str);
long long int_calc(const char *str, long long a, long long b);
long double float_calc(const char *str, long double a, long double b);
