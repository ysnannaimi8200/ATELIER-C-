D#include<iostream>
using namespace std;
class Media //cr�ation de la classe media
{
    protected:
    string titre;//d�claration une variable
    public:
    virtual void imprimer();//d�claration des variables
    virtual char *id();
};
class Audio : public Media //cr�ation de la classe audio h�rit�e de la classe media
{

};
class CD : public Audio//cr�ation de la classe cd h�rit�e de la classe audio
{
};
class Cassette : public Audio//cr�ation de la classe cassette h�rit�e de la classe audio
{
 
};
class Disque : public Audio//cr�ation de la classe disque h�rit�e de la classe audio
{
 
};
class Livre : public Media//cr�ation de la classe livre h�rit�e de la classe media
{
    
};
class Presse : public Media//cr�ation de la classe presse h�rit�e de la classe media
{
 
};
class Magazine : public Presse//cr�ation de la classe magazine h�rit�e de la classe presse
{
    
};
class Journal : public Presse//cr�ation de la classe joural h�rit�e de la classe presse
{
    
};
class Revue : public Presse//cr�ation de la classe revue h�rit�e de la classe presse
{
};

