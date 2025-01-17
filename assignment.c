int main() {
  int timeServerCrashed = 5;
  double losses = 500.95;

  losses *= timesServerCrashed;
  losses /= 2;

  printf("Total losses: $%.2f\n", losses);
}
