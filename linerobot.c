#include <stdio.h>

struct sensor {
int sensorId;
char sensorPosition[10], lineCondition[10];
int sensorReading;
}
int numberOfSensors;
int total = 0;
float average = 0;
int main(){

   printf("Enter number of sensors: \n");
   scanf("%d", &numberOfSensors);
   struct sensor sensors[numberOfSensors];
        
        for(int i = 1; i <= numberOfSensors; i++){
            printf("Enter Sensor Id: \n");
            scanf("%d", &sensors[i].sensorId);
            printf("Enter sensor reading: \n");
            scanf("%d", &sensors[i].sensorReading);
            printf("Enter sensor position: \n");
            scanf("%d", &sensors[i].sensorPosition);
            
            printf("Details of each sensor: \n");
            printf("For Sensor %d: \n", i);
            printf("Sensor ID: %d \n", sensors[i].sensorId);
            printf("Sensor Reading: %d \n", sensors[i].sensorReading); 
            printf("Sensor Position: %s \n", sensors[i].sensorPosition);
           
            if(sensors[i].sensorReading >=0 && sensors[i].sensorReading <= 300){
               printf("Sensor %d is on line", i); } 
            if(sensors[i].sensorReading >=301 && sensors[i].sensorReading <= 600){
               printf("Sensor %d is near edge", i); }
            if(sensors[i].sensorReading >= 601 && sensors[i].sensorReading <= 1023){
               printf("sensor %d is off line\n", i); }
            
            
            
            }
            
            
            
     
      return 0;
 }      
            
            
 

