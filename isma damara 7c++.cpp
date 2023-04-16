#include <stdio.h> 
int main(){
int var = 69;
int* varPtr =&var;
int** varPtrPtr =&varPtr;
printf("Alamat	dari variable pointer var : %d\n", &var);
printf("Alamat	dari variable pointer varPtr : %d\n", &varPtr);
printf("Nilai	dari variable pointer var : %d\n", var);
printf("Alamat	dari variable pointer varPtr : %d\n", *varPtr);
printf("Nilai	dari variable pointer varPtrPtr :%d\n", &varPtrPtr);
printf("Nilai	dari variable pointer varPtrPtr :%d\n", **varPtrPtr);

}

