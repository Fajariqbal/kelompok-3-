#include <stdio.h>
#include <math.h>;
int main(){
float a=2, value;
float *g= &value; 
value = pow(a,2); 
printf("%f", *g);
	return 0;
}

