#include<iostream>
using namespace std;
class Personne{
	private :
		string nom;
		string prenom;
		string dt; 
	public:
		Personne(string nom,string prenom,string dt) { 
		
		this->nom=nom ;
		this->prenom=prenom;
		this->dt=dt;
	}
	virtual void affiche()
	{
		cout<<"nom="<<nom<<endl;
		cout<<"prenom="<<prenom<<endl;
		cout<<"date de naissance:"<<dt<<endl;
		
	}	
};
class Employe:public Personne 
{
	protected:
		float salaire;
	public:
		Employe(string nom , string prenom ,string dt , float salaire):Personne(nom,prenom,dt)
    {
    	this->salaire=salaire;
	}
	virtual void affiche(){
		Personne::affiche();
		cout<<"salaire="<<salaire<<endl;
	}
	};
class chef:public Employe
{
	protected:
		string service;
	public:
	chef(string nom , string prenom ,string dt , float salaire , string service):Employe(nom,prenom,dt,salaire)
	{
		this->service=service;
	}
	virtual void affiche(){
		Employe::affiche();
		cout<<"service="<<service<<endl;
	}
	
};
int main()
{
	int i; 
	Personne *T[5];
	T[0]=new Personne("yassine","annaimi","08/02/2000");
	T[1]=new Employe("yassine","annaimi","08/02/2000",10000);
	T[2]=new chef("yassine","annaimi","08/02/2000",20000,"qualite");
	for(i=0; i<5;i++)
	  T[i]->affiche();	
};
   

