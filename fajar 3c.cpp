#include <iostream>	
using namespace std;
int main(){
int var[10] = {1,2,3,4,5,6,7,8,10};
int i;
int* varPtr = var;
for (i=0; i<9 ;i++){
cout << *varPtr; varPtr++;
}
}

