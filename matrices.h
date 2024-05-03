void getMatrixElements(int row, int column, float matrix[row][column]) {
printf("\nEnter elements: \n");
	for (int i = 0; i < row; ++i) {
      	for (int j = 0; j < column; ++j) {
          printf("Enter a%d%d: ", i + 1, j + 1);
          scanf("%f", &matrix[i][j]);
      }
   }
}
void display(int row, int column, float result[row][column]) {
printf("\nOutput Matrix:\n");
   	for (int i = 0; i < row; ++i) {
      	for (int j = 0; j < column; ++j) {
         	printf("%.3f  ", result[i][j]);
         	if (j == column - 1)
          printf("\n");
      }
   }
}
