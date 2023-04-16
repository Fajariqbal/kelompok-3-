#include <stdio.h> 
int main (){
int var, a, b;
int* varPtr = &var;
int* g = &a;
int* h = &b;
printf("alamat dari var :%x \n", &var);
printf("Nilai dari varPtr :%x\n", *varPtr);
printf("alamat dari a :%x \n", &a);
printf("Nilai dari g :%x\n", *g);
printf("alamat dari b :%x \n", &b);
printf("Nilai dari h :%x\n", *h);
}
;

