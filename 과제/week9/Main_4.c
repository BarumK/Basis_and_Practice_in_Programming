#include <stdio.h>

int main(){
    int A[4][4];
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	
	for (int i = 0; i < 4; i++) {
		for (int j = 3; j >= 0; j--) {
			printf("%d ", A[j][i]);
		}
		puts("");
	}
	
    return 0;
}
