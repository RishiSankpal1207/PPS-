#include <stdio.h>

int main(){
int numarray[10] = {1,2,3,4,5,6,7,8,9,10};
int max = numarray[0];
int min = numarray[0];

for(int i = 0; i < sizeof(numarray)/sizeof(int); i++){
     if(numarray[i] > max){
        max = numarray[i];
        }
      if(numarray[i] < min){
        min = numarray[i];
        }
}
int difference = max - min;
printf("%d", difference);
return 0;
}
