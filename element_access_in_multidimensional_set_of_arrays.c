int main() {
  int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
  int sum = 0;

  printf("%i", matrix[3][1]);

  for(int q = 0; q < sizeof(matrix)/sizeof(matrix[0]); q++){
    for(int t = 0; t < sizeof(matrix[0])/sizeof(int); t++){
      sum += matrix[q][t];
    }
  }
}
