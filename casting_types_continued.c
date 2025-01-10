int main()

  char targetChar;
  int sourceInt = 99;
  double sourceDouble = 55.67;

  targetChar = (char)sourceInt;
  targetChar = sourceDouble;

  printf("source int %d, source double, %.2f, target %c\n", sourceInt, sourceDouble, targetChar);

}
