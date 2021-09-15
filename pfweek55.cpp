#include<stdio.h>
int main(){  
  float a[3][3],b[3][3],c[3][3];
  int  i, j, k;
  float determinanta=0,determinantb=0;
  scanf("%f", &a[0][0]);
  scanf("%f", &a[0][1]);
  scanf("%f", &a[0][2]);
  scanf("%f", &a[1][0]);
  scanf("%f", &a[1][1]);
  scanf("%f", &a[1][2]);
  scanf("%f", &a[2][0]);
  scanf("%f", &a[2][1]);
  scanf("%f", &a[2][2]);
  scanf("%f", &b[0][0]);
  scanf("%f", &b[0][1]);
  scanf("%f", &b[0][2]);
  scanf("%f", &b[1][0]);
  scanf("%f", &b[1][1]);
  scanf("%f", &b[1][2]);
  scanf("%f", &b[2][0]);
  scanf("%f", &b[2][1]);
  scanf("%f", &b[2][2]);
   determinanta = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
    determinantb = b[0][0] * ((b[1][1]*b[2][2]) - (b[2][1]*b[1][2])) -b[0][1] * (b[1][0]
   * b[2][2] - b[2][0] * b[1][2]) + b[0][2] * (b[1][0] * b[2][1] - b[2][0] * b[1][1]);
   printf("\n det a = %.2f\n", determinanta);
  printf("\n det b = %.2f\n", determinantb);
  if(determinanta!=0){
  printf("inverse a = \n");
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++)
printf("%.2f\t",((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]))/ determinanta);
printf("\n");
}
}
else if(determinanta==0)
{
	printf("matrix a is singular\n");
}
if(determinantb!=0){
printf("inverse b = \n");
for(i = 0; i < 3; i++){
for(j = 0; j < 3; j++)
printf("%.2f\t",((b[(j+1)%3][(i+1)%3] * b[(j+2)%3][(i+2)%3]) - (b[(j+1)%3][(i+2)%3] * b[(j+2)%3][(i+1)%3]))/ determinantb);
printf("\n");
}
}
else if(determinantb==0)
{
	printf("matrix b is singular\n");
}
for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
    c[i][j]=0;
    for(k=0; k<3;k++)
       c[i][j] = a[i][j] + b[i][j];
  }
 }
 printf("\n matrix a+b \n"); 
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
     printf(" %.2f",c[i][j]);
  printf("\n");
 }
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
  {
    c[i][j]=0;
    for(k=0; k<3;k++)
       c[i][j] = a[i][j] - b[i][j];
  }
 }
 printf("\n matrix a-b \n"); 
 for(i=0; i<3; i++)
 {
  for(j=0; j<3; j++)
     printf(" %.2f",c[i][j]);
  printf("\n");
 }

   return 0;
}