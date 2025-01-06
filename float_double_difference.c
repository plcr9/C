int main() {
  
  int numOfLoops = 50;

  float a = 0.1f;
  float b = 0;
  double x = 0.1;
  double y = 0;

  printf("At the start, our target float b is:%f\n", b);
  printf("At the start, our target double y is:%f\n",y);

  for(int i = 0, i < numOfLoops, i++)
    {
      b += a;
      y += x;
    }

  printf("At the end, our target float b is:%f\n", b);
  printf("At the end, our target double y is:%f\n", y);

}
