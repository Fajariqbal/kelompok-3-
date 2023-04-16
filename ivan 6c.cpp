#include <iostream>
using namespace std;
int main(){
int var = 69;
int* varPtr = &var;
int**varPtrPtr	= &varPtr;
cout << "Alamat dari variable pointer varPtr :" << &varPtr << endl;
cout << "nilai dari variabel pointer varPtr :" << *varPtr << endl;
cout << "Alamat dari variable var :" << &var << endl;
cout << "nilai dari variable var:" << var << endl;
cout << "Alamat dari variable pointer varPtrPtr :" << &varPtrPtr << endl;
cout << "niali dari variable pointer varPtrPtr :" << **varPtrPtr << endl;

}

