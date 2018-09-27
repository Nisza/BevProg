#include "std_lib_facilities.h"

int main()
{
int a = 10;
int b = 20;

//cout << a << " <-a " << b << " <-b " "\n"; 
a=a xor b;
//cout << a << " <-a " << b << " <-b " "\n";

b=a xor b;
//cout << a << " <-a " << b << " <-b " "\n";

a=a xor b;
//cout << a << " <-a " << b << " <-b " "\n";

cout << a;
cout << " ";
cout << b;

}
