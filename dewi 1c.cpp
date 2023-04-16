#include <iostream>
using namespace std;
int main(){
int var1 = 10, var2 = 20, var3 = 30;
int *pointer1 = &var1;
int *pointer2 = &var2;
int *pointer3 = &var3;
cout<<"alamat memori:"<< &var1<<endl;
cout<<"isi varPtr :" <<*pointer1<<endl;
cout<< "alamat memori:"<< &var1<<endl;
cout<<"isi varptr :" <<*pointer2<<endl;
cout<<"alamat memori:"<<&var3<<endl;
cout<<"isi varptr:" <<*pointer3<<endl;
}

