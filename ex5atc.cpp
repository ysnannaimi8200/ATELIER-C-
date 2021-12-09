#include<iostream>
using namespace std; 
class Animale{
	protected: 
	string name ;
	float age ;
	public :
		Animale(string name,float age){
			this->name=name;
			this->age=age;}		
    void set_value(float age){
    	this->age=age;
		}
	void affiche(){
		cout<<"je suis un animale ,nom ="<<name<<"et jai :"<<age<<endl;
		}
	};
    class Zebra : public Animale{
	private:
		string origine;
	public:
		Zebra(float age, string name , string origine):Animale(name,age)
		{
			this->origine=origine;
			}
    void affiche(){
    	Animale::affiche();
    cout<<"race : zebra "<<"name origine"<< origine<<endl; 
	}	
};		
int main(){
	Zebra z(20,"n1","Afrique");
	z.affiche();
	z.set_value(13);
	z.affiche();
};
