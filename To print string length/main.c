#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    int count = 0;
    int i = 0;
    printf("Enter string: \n");
    gets(name);

    // USING STRLEN PREDEFINED FUNCTION
    count = strlen(name);
    printf("The length of string is: %d", count);


    // USING WHILE LOOP
    /* while(name[i] != '\0')
        {
          count++;
          i++;
        }
    puts(name);
    printf("The length of string is: %d", i); */

     // USING FOR LOOP
   /* for(i = 0; name[i] != '\0'; i++)
        {
          count++;
        }
    puts(name);
    printf("The length of string is: %d", count); */

    return 0;
}
