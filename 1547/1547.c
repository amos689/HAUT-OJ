#include<stdio.h>

#define namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		double a, b, res;
		int n;
		scanf("%lf%lf", &a, &b);
		scanf("%d",&n);
		if (n % 5 == 0) res = a;
		else if (n % 5 == 1) res = b;
		else if (n % 5 == 2) res = (1.0 + b) / a;
		else if (n % 5 == 3) res = (1.0 + a + b) / (a * b);
		else if (n % 5 == 4) res = (1.0 + a) / b;
		printf("%.3f\n", res);
 	}

	return 0;
}