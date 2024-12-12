#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter a string:\n");
    // str is address already so no need to add &
    // scanf uses whitespace -spaces, tabs and new lines to delineate a string
    scanf("%s", str);
    printf("You entered: %s\n", str);

    return 0;
}