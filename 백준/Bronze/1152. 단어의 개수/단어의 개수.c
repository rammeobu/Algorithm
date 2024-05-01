#include <stdio.h>
#include <ctype.h> 
int main() {
    char str[1000002]; 
    int count = 0;
    int word_started = 0; 


    fgets(str, sizeof(str), stdin);


    for (int i = 0; str[i] != '\0'; i++) {
  
        if (isalpha(str[i]) && !word_started) {
            word_started = 1;
            count++;
        }
        if (isspace(str[i])) {
            word_started = 0;
        }
    }

    printf("%d", count);

    return 0;
}
