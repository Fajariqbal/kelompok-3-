#include <stdio.h> 
int main(){
int var[10] = {1,2,3,4,5,6,7,8,9,10};
int i;
int* varPtr = var;
for (i=0; i<10 ;i++){
printf("%d", *varPtr); varPtr++;
}
}


