#include <stdio.h>
#include <string.h>
int main() {
	char word[101];
	int count=0,flag=0;
	scanf("%s", word, sizeof(word));
	int len = strlen(word);
	for (int i = 0; i < len; i++) {
		flag = 0;
		if (word[i] == 'c' && i + 1 < len) {
			if (word[i + 1] == '=') {
				count++;
				i += 1;
				flag = 1;
			}
			else if (word[i + 1] == '-') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (word[i] == 'd' && word[i+1]== 'z' && word[i+2]== '='&& i + 2 < len) {
			count++;
			i += 2;
			flag = 1;
		}
		if (word[i] == 'd'&& i + 1 < len) {
			if (word[i + 1] == '-') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (word[i] == 'l'&& i + 1 < len) {
			if (word[i + 1] == 'j') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (word[i] == 'n' && i + 1 < len) {
			if (word[i + 1] == 'j') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (word[i] == 's' && i + 1 < len) {
			if (word[i + 1] == '=') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (word[i] == 'z' && i + 1 < len) {
			if (word[i + 1] == '=') {
				count++;
				i += 1;
				flag = 1;
			}
		}
		if (flag == 0) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}