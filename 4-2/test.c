#include<stdio.h>
#include<math.h>
int fact(int n);
int main(void) {
 double x=2.2;
//  scanf("%lf", &x);
 int i = 1, j, k;
 double s = 1.0000;
 if (x == 0) {
  printf("1.0000");
 } else {
  while (pow(x, i) / fact(i) >= 0.00001) {
   s += pow(x, i) / fact(i);
   i++;
  }
  s += pow(x, i) / fact(i);
  printf("%.4lf", s);
 }
}
int fact(int n) {
 double s = 1;
 for (int i = 1; i <= n; i++) {
  s *= i;

 }
 return s;
}