int main() {

  int k = 2000;
  int* ptr = &k;

  printf("%i\n", *ptr);

  *ptr = 961;

  printf("%i\n", k);
  
}
