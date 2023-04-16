#include <iostream>
using namespace std;
void kuadratkan(int* value) {
 *value = (*value) * (*value);
}
int main() {
 int var = 23;
 cout << "Nilai sebelum di-kuadratkan: " << var << 
endl;
 kuadratkan(&var);
 cout << "Nilai setelah di-kuadratkan: " << var << endl;
 return 0;
}
