#include <stdio.h>
#include <math.h>

int main()
{
  int s1[1001], s2[1001], n, i, ost, summ, degree, count, eq;
  count = 0;
  i = 0;
  while ((scanf("%d", &s1[i])) != EOF) {
    i++;
  }
  printf("\n");
  printf("Введенный массив:\n");
  for (int j = 0; j < i; j++) {
    printf("%d: ", j + 1);
    printf("%d\n", s1[j]);
    eq = s1[j];
    while (s1[j] != 0) {
      ost = s1[j] % 10;
      s1[j] = s1[j] / 10;
      summ += ost * pow(2, degree);
      degree++;
      if (ost != 0 && ost != 1) {
        count++;
      }
    s2[j] = summ;
    summ = 0;
    }
    s1[j] = eq;
    degree = 0;
  }
  printf("\n");
  if (count != 0) {
    printf("Вы неправильно ввели двоичные числа\n");
  }
  else {
    printf("Полученный массив:\n");
    for (int j = 0; j < i; j++) {
      printf("%d: ", j + 1);
      printf("%d\n", s2[j]);
    }
  }
}
