#include <stdio.h>
#include <string.h>

int main() {
    char st[20];
    char *p;
    int i;
    
    p = &st[0];
    printf("Enter your string: ");
    scanf("%s", st);
    
    for (i = 0; i < strlen(st); i++) {
        if (*(p + i) >= 'A' && *(p + i) <= 'Z') {
            *(p + i) = *(p + i) + 32;  // Convert uppercase to lowercase
        } else if (*(p + i) >= 'a' && *(p + i) <= 'z') {
            *(p + i) = *(p + i) - 32;  // Convert lowercase to uppercase
        }
    }
    printf("changed string=");
     for (i = 0; i < strlen(st); i++) 
     {
    printf("%c", *(p+i));
     }
    return 0;
}
