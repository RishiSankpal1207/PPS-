#include <stdio.h>
#define PI 3.141

void findDistance(float wheelDiameter, int *Lrotations, int *Rrotations, float *average){
  float circumference = PI * wheelDiameter;
  float LDistance = *Lrotations * circumference;
  float RDistance = *Rrotations * circumference;
  *average =   (LDistance + RDistance)/2.0; 
  printf("Wheel Circumference   : %.3f\n", circumference);   
  printf("Left Wheel distance   : %.3f cm\n", LDistance);
  printf("Right Wheel distance   : %.3f cm\n", RDistance);
  
}  
int main(){
float wheelDiameter;
int Lrotations;
int Rrotations;
float average;
printf("Enter wheel Diameter: \n");
scanf("%f", &wheelDiameter);
printf("Enter no. of Left rotations: \n");
scanf("%d", &Lrotations);
printf("Enter no. of Right rotations: \n");
scanf("%d", &Rrotations);
findDistance(wheelDiameter, &Lrotations, &Rrotations, &average);
printf("Average Distance   : %.3f", average); 
return 0;
}


