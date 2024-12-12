#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a string:\n");
    // use gets() stops reading input when it encouters a newline or end of file
    // fgets(str, 20, stdin); is safer
    gets(str);

    printf("You entered: ");
    puts(str);

    return 0;
}