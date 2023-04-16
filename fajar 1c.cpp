#include <iostream>
using namespace std;
int main(){ 
int var, b, c;
int* varPtr = &var;
int* g = &b;
int* h = &c;
cout<<	"alamat	memori:\n"<< &var;
cout<<	"\nisi varPtr:"<<*varPtr;
cout<<	"\nalamat memori:"<< &b;
cout<<	"\nisi g:"<<*g;
cout<<	"\nalamat memori:"<< &c;
cout<<	"\nisi h:"<<*h;
}

