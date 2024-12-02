#include <stdio.h>
#include <string.h>
int main()
{
    char name[40], copy[40];
    int i;
    printf("Enter your string: ");
    scanf("%s",name);
    // gets(name);
    
    for (i = 0; name[i] != '\0'; i++)
    {
        copy[i] = name[i];
    }
    copy[i] = '\0'; // Add null terminator

    printf("Copied string = %s\n", copy);
    puts(copy);

    return 0;
}

