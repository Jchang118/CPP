#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "fun.h"

int main(int argc, char* argv[])
{
    char *opt = NULL;
    char *a = NULL;
    char *b = NULL;
    // commend with arguments mode
    if(argc == 4)
    {
        // check operator
        opt = argv[2];
        a = argv[1];
        b = argv[3];
        if(!(is_operator(opt))){
            printf("Invalid operator!\n");
            return 0;
        }

        // check numbers entered
        if(is_int(a) || is_float(a) || is_sci(a))
            ;
        else{
            printf("The input cannot be interpret as numbers!\n");
            return 0;
        }
        if(is_int(b) || is_float(b) || is_sci(b))
            ;
        else{
            printf("The input cannot be interpret as numbers!\n");
            return 0;
        }

        if(strcmp(opt, "/") == 0 && strcmp(b, "0") == 0)
        {
            printf("A number cannot be divided by zero.\n");
            return 0;
        }

        // if two numbers are both integers and operator is not '/'
        if(is_int(a) && is_int(b) && strcmp(opt, "/") != 0)
        {
            long long int_res = int_calc(opt, atoll(a), atoll(b));
            printf("%s %s %s = %lld\n", a, opt, b, int_res);
            return 0; 
        }
        
        long double float_res = float_calc(opt, (long double)(atof(a)), (long double)(atof(b)));
        if(is_sci(a) || is_sci(b))
        {
            printf("%s %s %s = %Le\n", a, opt, b, float_res);
            return 0;
        }
        printf("%s %s %s = %Lf\n", a, opt, b, float_res);
        return 0;
    }
    if(argc == 1)
    {
        char str[100];
        while(true){
            char input[100] = {};
            fgets(input, 100, stdin);
            input[strcspn(input, "\n")] = '\0';
            if(strcmp(input, "quit") == 0)
                break;
            a = input;
            for(int i = 0; i < strlen(input); i++)
            {
                if(*(input+i) == ' ')
                    *(input+i) = '\0';
            }
            opt = a + (int)(strlen(a)) + 1;
            for(int i = 0; i < strlen(opt); i++)
            {
                if(*(opt+i) == ' ')
                    *(opt+i) = '\0';
            }
            b = opt + (int)(strlen(opt)) + 1;
            
            if(!(is_operator(opt))){
                printf("Invalid operator!\n");
                continue;
            }

            if(is_int(a) || is_float(a) || is_sci(a))
                ;
            else{
                printf("The input cannot be interpret as numbers!\n");
                continue;
            }
            if(is_int(b) || is_float(b) || is_sci(b))
                ;
            else{
                printf("The input cannot be interpret as numbers!\n");
                continue;
            }

            if(strcmp(opt, "/") == 0 && strcmp(b, "0") == 0)
            {
                printf("A number cannot be divided by zero.\n");
                continue;
            }

            if(is_int(a) && is_int(b) && strcmp(opt, "/") != 0)
            {
                long long int_res = int_calc(opt, atoll(a), atoll(b));
                printf("%s %s %s = %lld\n", a, opt, b, int_res);
                continue; 
            }
            
            long double float_res = float_calc(opt, (long double)(atof(a)), (long double)(atof(b)));
            if(is_sci(a) || is_sci(b))
            {
                printf("%s %s %s = %Le\n", a, opt, b, float_res);
                continue;
            }
            printf("%s %s %s = %Lf\n", a, opt, b, float_res);
            continue;
        }
    }
}