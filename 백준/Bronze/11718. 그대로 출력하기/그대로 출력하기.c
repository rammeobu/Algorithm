#include <stdio.h>
#include <string.h>
int main(void) {
	char call[101];
	while (fgets(call, sizeof(call), stdin))
	{
		printf("%s", call);
	}
}