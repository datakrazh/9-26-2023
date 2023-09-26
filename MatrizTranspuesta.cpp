#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	int n, i, j, suma;
	srand(time(NULL));
	printf("ingrese la longitud de la matriz:\n");
	scanf("%d", &n);
	int A[n][n];
	
	printf("Matriz:\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%10;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz Transpuesta:\n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			printf("%d ", A[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}
