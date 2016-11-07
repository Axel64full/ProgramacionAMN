//calculadora orientada a objetos en c++ //
#include<iostream> 
#include<stdlib.h>
using namespace std;
class GUARDAR
{
public:
float a, b, c;
void guard(void)
{
system("color 1A");
cout<<"ingrese primer numero\n";
cin>>a;
cout<<"ingrese segundo numero\n";
cin>>b;
system("cls");
}

void suma(void)
{
	cout<<"Tu suma es:\n";
	cout<<a+b<<endl;
}
void resta(void)
{
		cout<<"Tu resta es:\n";
	cout<<a-b<<endl;
}
void multiplicacion(void)
{
		cout<<"Tu multiplicacion es: \n";
	cout<<a*b<<endl;
}
void divicion(void)
{
	if (b==0)
	{
		cout<< "lo siento mi logica no me permite esta operacion \n";
		GUARDAR total;
		total.guard();
   }
	else 
	{
		cout<<"Tu divicion  es: \n ";
		cout<<a/b<<endl;
    }
}
};

int main()
{
	GUARDAR total;
	int d;
	system("color 1A");
	cout<<"Que desea hacer ?";
	cout<<"\n";
	cout<<" 1.- Sumar";
	cout<<"\n";
	cout<<" 2.- Restar";
	cout<<"\n";
	cout<<" 3.- Multiplicar";
	cout<<"\n";
	cout<<" 4.- Dividir";
	cout<<"\n";
	cin>>d;
	switch (d)
	{
	case 1 :  
        total.guard();
		total.suma();
            break;  
    case 2 :  
        total.guard();
		total.resta(); 
            break;  
    case 3 :  
        total.guard();
		total.multiplicacion(); 
		 break; 
    case 4 :  
        total.guard();
		total.divicion(); 
            break;  
    }
    cout<<"Desea realizar alguna otra operacion \n 1.- Si \n 2.-NO     ";
	d=0;
	cin>>d;
	if (d==1)
	{
		return main();
		system("cls");
	}
	else
	{
		exit(0);
	}
}
