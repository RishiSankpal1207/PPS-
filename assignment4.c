#include <stdio.h>
int main(){
int i,j,r,c;
printf("Enter rows and columns: \n");
scanf("%d %d", &r, &c);
int sensor1[r][c], sensor2[r][c], compiled[r][c];
printf("Enter data for sensor 1: ");
for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
        scanf("%d", &sensor1[i][j]);
         }   
      }
printf("Enter data for sensor 2: \n");
for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
       scanf("%d", &sensor2[i][j]);
       }
     }
for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
       compiled[i][j] = sensor1[i][j] + sensor2[i][j];      
       }
    }
printf("\nSum of readings from sensor 1 and sensor 2\n");
for(i = 0; i < r; i++){
    for(j = 0; j < c; j++){
       printf("%d", compiled[i][j]);
       }
    printf("\n");
   }
return 0;
}    
