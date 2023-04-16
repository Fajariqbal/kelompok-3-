#include <stdio.h>
int main() {
 int a = 10, b = 20, c = 30; // tiga variabel biasa
 int *ptrA = &a, *ptrB = &b, *ptrC = &c; // tiga 
variabel pointer
 // mencetak nilai ketiga variabel biasa 
menggunakan dereference
 printf("Nilai dari variabel a: %d\n", *ptrA);
 printf("Nilai dari variabel b: %d\n", *ptrB);
 printf("Nilai dari variabel c: %d\n", *ptrC)
 return 0;
}
