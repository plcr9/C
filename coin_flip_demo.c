int main() {

  srand (time(NULL));
  int coin = rand() % 2;

  if (coin == 0) {
    printf("Heads\n");
  } else {
    printf("Tails\n");
  }
}
