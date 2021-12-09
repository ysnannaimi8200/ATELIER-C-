// l'objet M appeler le constructeur 
// puis "}" la fin dexecution il apelle le destructeur 
#include<iostream>
using namespace std;
class myclass{
	public:
		myclass();
		~myclass();
	};
myclass::myclass()
{
	cout<<"je suis le constructeur "<< endl;
		}		

myclass::~myclass()
{
	cout<<"je suis le destructeur "<< endl;
}
int main ()
{
	myclass m;
	cout<<"fin"<<endl;
}
