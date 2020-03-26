#include <cstdio>

int main() {
	int t;
	int num = 1;
	scanf("%d", &t);

	while (t--){
		int a, b;
		char c;
		scanf("%d %d", &a, &b);

		if (a > b)
			c = '>';
		else if (a < b)
			c = '<';
		else
			c = '=';

		printf("#%d %c\n", num++, c);
	}

	return 0;
}