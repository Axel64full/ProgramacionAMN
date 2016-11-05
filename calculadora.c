#include<iostream>
#include<stdlib.h>
using namespace std;
class SUMA
{
public:
int a, b, c;
void operacion(void)
{
system("color 1A");
cout<<"ingrese primer numero a sumar\n";
cin>>a;
cout<<"ingrese segundo numero asumar\n";
cin>>b;
c=a+b;
cout<<"el resultado es;\n";
cout<<a+b<<endl;
}
};
int main()
{
SUMA total;
total.operacion();
}
