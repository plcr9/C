int getRandonNumber() {
  int randomNumber = rand() % 1000 + 1;
  return randomNumber;
}

int main(void) {
  srand(time(NULL));
  int randomNumber = 0;
  printf("My random number is: %d", randomNumber);
}
