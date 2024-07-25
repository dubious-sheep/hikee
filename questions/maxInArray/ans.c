#include <stdio.h>
#define MAX_N 100000
#define MAX_H 1000000000

int main() {
	unsigned short t;
	unsigned int n;
	unsigned long h, maxA[10];
	unsigned long maxH;
	int i = 0;

	scanf("%hu",&t);

	if (t < 1 || t > 10) {
		return 1;
	}

	while(t--) {
		scanf("%u",&n);
		if (n < 1 || n > MAX_H) {
			return 1;
		}

		maxH = 0;
		while(n--) {
			scanf("%lu",&h);
			if ( n > MAX_N ) {
				return 1;
			}

			if ( maxH < h ) {
				maxH = h;
			}
		}
		maxA[i] = maxH;
		i++;
	}	

	printf("\noutput:\n");
	for (int j = 0; j < i; j++) {
		printf("%lu\n",maxA[j]);
	}

	return 0;
}
