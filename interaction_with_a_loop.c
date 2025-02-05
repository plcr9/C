int main() {
  int pin = 0;
  int tries = 0;

  printf("Bank Of Bob:\n");
  printf("Enter your PIN: ");
  scanf("%d", &pin);

  tries++;

  while (pin != 1234 && tries < 3) {
    printf("Enter your PIN: ");
    scanf("%d", &pin);
    tries++;
  }

  if (pin == 1234) {
    printf("PIN accepted!\n");
    printf("You have now access.\n");
  }
}
