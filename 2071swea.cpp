#include <cstdio>

int main() {
	freopen("sample.txt", "r", stdin);
	int t;
	int num = 1;
	scanf("%d", &t);

	while (t--) {
		int sum = 0;
		double avg = 0.0;

		for (int i = 0; i < 10; i++) {
			int a;
			scanf("%d", &a);
			sum += a;
		}

		avg = (double)sum / 10.0;

		printf("#%d %.0lf\n", num++, avg);
	}

	return 0;
}