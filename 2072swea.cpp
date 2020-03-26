#include <cstdio>

int main() {
	int t;
	int num = 1;
	scanf("%d", &t);

	while (t--) {
		int sum = 0;

		for (int i = 0; i < 10; i++) {
			int a;
			scanf("%d", &a);

			if (a % 2 != 0)
				sum += a;
		}

		printf("#%d %d\n", num++, sum);
	}

	return 0;
}