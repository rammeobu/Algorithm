#include <stdio.h>
#include <string.h>
#include <stdbool.h> 

int main() {
    char pel[101]; 
    char pel2[101];
    int j = 0;
    bool isPalindrome = true;
    fgets(pel, sizeof(pel), stdin);
    pel[strcspn(pel, "\n")] = '\0';
    for (int i = strlen(pel) - 1; i >= 0; i--) {
        pel2[j] = pel[i];
        ++j;
    }
    pel2[j] = '\0';

  
    for (int i = 0; i < strlen(pel); i++) {
        if (pel[i] != pel2[i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}
