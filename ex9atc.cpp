// un atttribut statique ne peut pas etre initialiser a linterieru de la clase 
#include<iostream>
using namespace std;
class test{
	public:
		static int cmp;
	void call(){
		cmp ++ ;
		cout <<cmp<<"\n";
	}
	
};
int test::cmp=0;
int main()
{
	test t1,t2;
	t1.call();
	t2.call();
	
}
