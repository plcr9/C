int main() {
  char bookVersionReview = 'A';
  char movieVersionReview = 'B';
  double ticketPrice = 10.25;
  double bookPrice = 19.99;

  movieVersionReview = 'C';

  ticketPrice = bookPrice;

  printf("The book version has a review store of %c and costs $%.2f\n", bookVersionReview, bookPrice);

  printf("The movie version has a review score of %c and costs $%.2f\n", movieVersionReview, ticketPrice);
}
