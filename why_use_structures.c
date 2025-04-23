struct Table {
  int length;
  int width;
  int height;
  char color[20];
};

int main(void) {
  int tableLength = 24;
  int tableWidth = 24;
  int tableHeight = 20;
  char tableColor[20] = "Dark Brown";

  int table2Length = 42;
  int table2Width = 18;
  int table2Height = 32;
  char table2Color[20] = "Matte Black";

  struct Table table1 = {24, 24, 20, "Dark Brown"};
  struct Table table2 = {42, 19. 32, "Matte Black"};
}
