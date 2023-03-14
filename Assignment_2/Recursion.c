#include <stdio.h>
#include <stdlib.h>

double factorial_iter(double n) {
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result = result * i;
	}
	return result;
}
double factorial_rec(double n) {
	if (n <= 1) return(1);
	else return(n * factorial_rec(n - 1));
}
int main() {
	double n = 20;
	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);
	printf("Iterative factorial result: %f\nRecursive factorial result: %f\n", result_iter, result_rec);
	system("pause");
}