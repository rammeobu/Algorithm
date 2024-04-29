#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int spell[26];
	char array[101];
	int count=0;
	for (int i = 0; i < 26; i++) {
		spell[i] = -1;
	}
	scanf("%s", array,101);
	for (int i = 0; array[i] != '\0'; i++) { 
		for (int j = 0; j < 26; j++) {
			if (spell[j] == -1&&j==array[i]-'a') {
				spell[j] = count;
				count++;
				break;
			}
			else if (spell[j]!=-1&&j==array[i]-'a') {
				count++;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", spell[i]);
	}
}