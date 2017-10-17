#include <stdio.h>

long long factor(long long n) {	
		for (long long i = 2; i < n / 2; i++) {
			if (n % i == 0) {
				return i;
			}
		}

		return n;
}

int main() {
	long long n = 600851475143;
	long long bigfac = -1;

	while (n != 1) {
		long long fac = factor(n);
		n = n / fac;

		if (fac > bigfac) {
			bigfac = fac;
		}
	}

	printf("%i\n", bigfac);

	return 0;
}

