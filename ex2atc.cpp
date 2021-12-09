
/*
visibilite 
public  : accesible directement apartir de n'imporrte autre class 
private : accesible uniquemet a linterieur de la classe  
protected : utiliser en heritage accesisble et des sous-classes (classes filles)*/
#include<iostream>
using namespace std; 
class Form{
	protected : 
	 float largeur , hauteur;
	 public :
	Form(float largeur , float hauteur)
	{
		this->largeur=largeur ;
		this->hauteur=hauteur ;
	}
	virtual float area()=0;
};
class Triangle:public Form{
	public:
     Triangle(float x, float y):Form(x,y)
		{}
	float area(){
		return(largeur*hauteur)/2; }	
	}; 
class rectangle:public Form{
	public:
     rectangle(float x, float y):Form(x,y)
		{}
	float area(){
		return(largeur*hauteur);
		}
};
int main()
{
Form *T[2];
T[0]=new Triangle(3,2);
T[1]=new rectangle(5,6);
	cout<<"la surface de Trianglengle est : "<<T[0]->area()<<endl;
	cout<<"la surface de rectangle est : "<<T[1]->area();
    } 

 
