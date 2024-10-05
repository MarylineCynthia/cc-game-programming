#include <iostream>
#include <math.h>
int main(int argc, char** argv){
    float r,l,L,b,h,c1,c2,c3,p,a,n;
    const float pi=3.14;
	std::cout<<"entrer la valeur du rayon du cercle"<<r<<std::endl;
	std::cin>>r;
	std::cout<<"entrer la valeur de la longueur du rectangle"<<L<<std::endl;
	std::cin>>L;
	std::cout<<"entrer la valeur de la largeur du rectangle"<<l<<std::endl;	
	std::cin>>l;
    std::cout<<"entrer la valeur de la base du triangle"<<b<<std::endl;
	std::cin>>b;
	std::cout<<"entrer la valeur de la hauteur du triangle"<<h<<std::endl;	
	std::cin>>h;
	std::cout<<"entrer la valeur des trois cotes du triangle"<<c1<<c2<<c3<<std::endl;	
	std::cin>>c1;
	std::cin>>c2;
	std::cin>>c3;
	std::cout<<"le perimetre d'une figure geometrique est designe par"<<p<<std::endl;
	std::cout<<"l'aire d'une figure geometrique est designee par"<<a<<std::endl;	
	std::cout<<"pour calculer l'aire et le perimetre du cercle entrer 1\n pour calculer l'aire et le perimetre du rectangle entrer 2\n pour calculer l'aire et le perimetre du triangle entrer 3\n"<<std::endl;
	std::cin>>n;
	if(n == 1){
		p=2*pi*r;
        a=pi*pow(r,2);
		}else if(n == 2){
		p=(L+l)*2;
        a=L*l;
	}else if(n == 3){
		p=c1+c2+c3;
        a=(b*h)/2;
		}
	std::cout<<"l'aire et le perimetre de la figure geometrique est"<<a<<p<<std::endl;
	std::cin>>a>>p;      		
}

