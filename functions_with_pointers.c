void incrementAge(int* agePointer) {
  *agePointer += 1;
}

int main(void) {
  int age = 42
  incrementAge(&age);
  printf("%d\n", age);
}
