#include <stdio.h>

int main() {
	int N1, N2, i, j;
	
	scanf("%d", &N1);
	scanf("%d", &N2);
	
	int Matrix[N1][N2];
	
	for(i = 0; i < N1; i++) {
		for(j = 0; j < N2; j++) {
			scanf("%d", &Matrix[i][j]);
		}
	}
	
	j = 0;
	i = 0;
	
	while (i < N1) {
		if(j == 0) {
			do {
				printf("%d ", Matrix[i][j]);
				j++;
			} while (j != N2);
			i++;
		}
		if(i < N1) {
			if(j == N2) {
				do {
					printf("%d ", Matrix[i][j - 1]);
					j--;
				} while (j != 0);
				i++;
			}
		}
	}
}


