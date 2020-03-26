#include <cstdio>
#include <algorithm>

using namespace std;

int arr[200];

int main() {
	freopen("sample.txt", "r", stdin);
	int n;
	int a;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	sort(arr, arr + 200);
	
	printf("%d\n", arr[n/2+1]);

	return 0;
}