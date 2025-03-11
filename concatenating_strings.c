int main() {
  
  char s1[14] = "London";
  char s2[] = "Bridge";

  char n[20] = "New";
  char y[] = "York";
  char c[] = "City";

  strcat(s1, s2);

  printf("%s\n", s1);

  strcat(n, y);
  strcat(n, c);

  printf("%s", n);

}
