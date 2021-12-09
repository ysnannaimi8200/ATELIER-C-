#include<iostream>
using namespace std; 
class Mere 
{
	public :
		Mere();
		~Mere() ;
		virtual void display() ;	
} ;
class Fille : public Mere {
	public :
		Fille() ;
		~Fille() ;
		void display() ;
};
Mere::Mere() { } ;
Mere::~Mere() { } ;
Fille::Fille() { } ;
Fille::~Fille() { } ;
void Mere :: display() {
	cout<<"la mère est appelee";
};
void Fille :: display () {
	cout <<"la fille est appelee" ;
};
int main() {
	Fille f1;
	f1.display();
};
