#include <iostream>
int main() {
 int a = 10, b = 20, c = 30; // tiga variabel 
biasa
 int *ptrA = &a, *ptrB = &b, *ptrC = &c; 
// tiga variabel pointer
std::cout << "Nilai dari variabel a yang 
ditunjuk oleh ptrA: " << *ptrA << std::endl;
 std::cout << "Nilai dari variabel b yang 
ditunjuk oleh ptrB: " << *ptrB << std::endl;
 std::cout << "Nilai dari variabel c yang 
ditunjuk oleh ptrC: " << *ptrC << std::endl;
 return 0;
}
