int main() {

  double weight;
  int x;

  printf("Please enter your current earth weight: ");
  scanf("%lf", &weight);

  printf("\nI have information for the following planets:\n\n");
  printf("\t1. Mercury\t2. Venus\t3. Mars\t4. Jupiter\n");
  printf("\t5. Saturn\t6. Uranus\t7. Neptune\n\n");

  printf("Which planet are you visiting? ");
  scanf("%d", &x);

  switch (x) {
    case 1:
      weight = weight * 0.38;
      break;
    case 2:
      weight = weight * 0.91;
      break;
    case 3:
      weight = weight * 0.38;
      break;
    case 4:
      weight = weight * 2.34;
      break;
    case 5:
      weight = weight * 1.06;
      break;
    case 6:
      weight = weight * 0.92;
      break;
    case 7:
      weight = weight * 1.19;
      break;
    default:
      weight = weight;
    }
    printf("\nYour weight: %lf\n", weight);
}

