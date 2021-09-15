#include<stdio.h>
int main(){  
  float a[3][3],b[3][3],c[3][3];
  int  i, j, k;
  float determinanta=0,determinantb=0;
  for(i = 0 ;i < 3;i++){
      for(j = 0;j < 3;j++){
	  scanf("%f", &a[i][j]);
}
}
for(i = 0 ;i < 3;i++){
      for(j = 0;j < 3;j++){
	  scanf("%f", &b[i][j]);
}
}
for(i = 0; i < 3; i++){
determinanta = determinanta + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));}
  for(i = 0; i < 3; i++){
determinantb = determinantb + (b[0][i] * (b[1][(i+1)%3] * b[2][(i+2)%3] - b[1][(i+2)%3] * b[2][(i+1)%3]));}
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
else
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
else
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