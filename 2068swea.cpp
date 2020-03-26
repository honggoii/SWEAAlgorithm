#include <cstdio>

int main() {
	int t;
	int num = 1;
	scanf("%d", &t);

	while (t--) {
		int max = 0;

		for (int i = 0; i < 10; i++) {
			int a;
			scanf("%d", &a);
			if (a > max)
				max = a;
		}

		printf("#%d %d\n", num++, max);
	}

	return 0;
}