#include <stdio.h>
int main() {
 char* name = "Dewi";
 char* ptr = name;
 printf("%c\n", 'F'); // Menampilkan huruf pertama F
 while (*ptr != '\0') {
 ptr++;
 }
 ptr--;
 printf("%c\n", *ptr); // Menampilkan angka akhir 
NIM, yaitu 9
 return 0;
}

