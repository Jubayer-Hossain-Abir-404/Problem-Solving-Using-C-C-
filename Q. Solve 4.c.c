 #include<stdio.h>

 int comb(int n, int r);
 int perm(int n, int r);
 int fact(int n);

 int main ()
 {
     int n, r;

     scanf("%d %d", &n, &r);

     printf("nCr and nPr are %d %d", comb(n,r), perm(n,r));

     return 0;


 }

 int comb(int n, int r)
 {
     int f_n, sum,f_nr, f_r, t;

     t = n-r;

     f_n = fact(n);
     f_r = fact(r);
     f_nr = fact(t);

     sum = f_n/(f_r*f_nr);

     return sum;

 }

 int perm(int n, int r)
 {
     int f_n, sum, f_nr, t;

     t = n-r;

     f_n = fact(n);

     f_nr = fact(t);

     sum = f_n/(f_nr);

     return sum;

 }

 int fact(int n)
 {
     int fact = 1, i;

     for(i=n;i>0;i--)
     {
         fact *= i;

     }

     return fact;




 }


