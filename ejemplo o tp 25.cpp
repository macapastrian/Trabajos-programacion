#include<iostream>
using namespace std;

class Cshape{
	private: 
	int base;
	int altura;
	
	public:
		Cshape(int b, int a);
		int setbase(int b);
		int setaltura(int a);
		float calcularsuptri(int b, int a);
		float calcularsuprec(int b, int a);
};

Cshape::Cshape(int b, int a){
	base = setbase(b);
	altura = setaltura(a);
}

int Cshape::setbase(int b){
	base = b;
	return base;
}

int Cshape::setaltura(int a){
	altura = a;
	return altura;
}

float Cshape::calcularsuptri(int b, int a){
	return b*a/2;
}

float Cshape::calcularsuprec(int b, int a){
	return b*a;
}

int main(){
	int b = 100;
	int a = 15;
	float triangulo, rectangulo;
	
	Cshape formas(a, b);
	
	triangulo = formas.calcularsuptri(b, a);
	rectangulo = formas.calcularsuprec
	(a,b);
	
	cout<<triangulo<<endl;
	cout<<rectangulo<<endl;
}
