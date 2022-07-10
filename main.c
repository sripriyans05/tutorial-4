#include<stdio.h>
#include<math.h>
int main() {
 int p[10], q[10];
 int r[10],s[10];
 int n, i,e1=0;
 float magnitude,angle,a1,b1,c1;
 printf("Enter elements of vector p:\n");
 for(i = 0; i < 2; i++)
   scanf("%d", &p[i]);
   printf("Enter elements of vector q:\n");
   for(i = 0; i < 2; i++)
    scanf("%d", &q[i]);
    for (i = 0; i < 2; i++)
      r[i] = p[i] + q[i];
    printf("Add vector:");
    for (i = 0; i < 2; i++)
      printf("%d ", r[i]);
      magnitude=sqrt(pow(r[0],2)+pow(r[1],2));
      printf("\nMagnitude of r vector is %f\n",magnitude);
      for(i=0;i<2;i++)
      {
          s[i]=p[i]*q[i];
          e1=e1+s[i];
      }
     
      a1=sqrt(pow(p[0],2)+pow(p[1],2));        
       printf("%f\n",a1);
      b1=sqrt(pow(q[0],2)+pow(q[1],2));        
       printf("%f\n",b1);
      c1=a1*b1;  
       angle=e1/c1;
       printf("angle between the vector is cos θ = %f",angle);
     
   
}