#include <stdio.h>
#include <stdlib.h>

float** cMatrix(int lines, int columns);
void freeMatrix(float** matrix, int lines);
void printMatrix(float** matrix, int lines, int columns);
float** tMatrix(float** matrix, int lines, int columns);

int main() {
	
	int nLines = 0;
	int nColumns = 0;	
	printf("Please input the numbers for setting the lines and rows of the matrix.\n\nNumber of Lines:\n");
	scanf("%d", &nLines);
	printf("\nNumber of Columns:\n");
	scanf("%d", &nColumns);

	float** nMatrix = cMatrix(nLines, nColumns);

	printf("Printing matrix numbers...\n");

	printMatrix(nMatrix, nLines, nColumns);

	printf("Transposing matrixes...\n");

	float** ttMatrix = tMatrix(nMatrix, nLines, nColumns);

	printMatrix(ttMatrix, nColumns, nLines);

	freeMatrix(nMatrix, nLines);

	freeMatrix(ttMatrix, nLines);
	

	return 0;
}

float** cMatrix(int lines, int columns){

	float** nMatrix = (float**)malloc(lines * sizeof(float*));

	if (!nMatrix){
		printf("Failed to allocate matrix lines...");
		exit(1);
	}

	for (int i = 0; i < lines; i++){
		nMatrix[i] = (float*)malloc(columns * sizeof(float));
		
		if(!nMatrix[i]){
		printf("Failed to allocate matrix columns...");
		exit(1);
		}
	}

	for (int i = 0; i < lines; i++){
		for (int j = 0; j < columns; j++){
			nMatrix[i][j] = i*columns + j + 1;
		}
	}

	return nMatrix;

}
			
void freeMatrix(float** nMatrix, int lines){

	for(int i =0; i < lines; i++){
		free(nMatrix[i]);
	}

	free(nMatrix);
}

void printMatrix(float** nMatrix, int lines, int columns){

	for (int i = 0; i < lines; i++){
		for (int j = 0; j < columns; j++){
			printf("%10.2f", nMatrix[i][j]);
		}
	printf("\n");	
	
	}
}

float** tMatrix(float** nMatrix, int lines, int columns){

	float** ttMatrix = cMatrix(columns, lines);

	for (int i = 0; i < lines; i++){
		for (int j = 0; j < columns; j++){
			ttMatrix[i][j] = nMatrix[i][j];
		}
	}
   return ttMatrix;

}	
