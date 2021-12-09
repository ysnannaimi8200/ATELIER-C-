D#include<iostream>
using namespace std;
class Media //création de la classe media
{
    protected:
    string titre;//déclaration une variable
    public:
    virtual void imprimer();//déclaration des variables
    virtual char *id();
};
class Audio : public Media //création de la classe audio héritée de la classe media
{

};
class CD : public Audio//création de la classe cd héritée de la classe audio
{
};
class Cassette : public Audio//création de la classe cassette héritée de la classe audio
{
 
};
class Disque : public Audio//création de la classe disque héritée de la classe audio
{
 
};
class Livre : public Media//création de la classe livre héritée de la classe media
{
    
};
class Presse : public Media//création de la classe presse héritée de la classe media
{
 
};
class Magazine : public Presse//création de la classe magazine héritée de la classe presse
{
    
};
class Journal : public Presse//création de la classe joural héritée de la classe presse
{
    
};
class Revue : public Presse//création de la classe revue héritée de la classe presse
{
};

