#include <iostream>
#include <string>
using namespace std;
int main() {
 string name = "Dewi";
 char* ptr = &name[0];
 cout << "F" << endl; // Menampilkan 
huruf pertama F
 while (*ptr != '\0') {
 ptr++;
 }
 ptr--;
 cout << *ptr << endl; // Menampilkan 
angka akhir NIM, yaitu 9
 return 0;
}
