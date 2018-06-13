#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000001];
    while (fgets(s, 1000000, stdin)) {
        int c=0;
        int length = strlen (s);
        int i = 0;
        while ( i < length) {
            while ( !isalpha (s[i]) )
                i++;
            if ( i < length)
                c++;
            while ( isalpha (s[i]) )
                i++;
        }
        printf("%d\n",c);
    }
    return 0;
}