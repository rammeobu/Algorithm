#include <stdio.h>

int main()
{
	int N, arr[4];
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
		if (i == 0)
		{
			printf("Gnomes:\n");
		}
		
		if (arr[0] <= arr[1] && arr[1] <= arr[2])
		{
			printf("Ordered\n");
		}
		else if (arr[0] >= arr[1] && arr[1] >= arr[2])
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
	return 0;
}