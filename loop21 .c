#include<stdio.h>
int main(){
  int n,a,d,i,term;
printf("enter the first term(a)");
sacnf("%d",&a);
printf("enter the common difference(d)");
scanf("%d",&d);
printf("enter the number of terms(n)");
scanf("%d",&n);
printf("arithmetic progression series\n");
term=a;
for(i=1;i<=n;i++){
  printf("%d",term);
term=term+d;
}
return 0;
}