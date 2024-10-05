#include <iostream>

int main(){
	unsigned int f,n,i;
	std::cout<<"entrer un nombre entier positif "<<n<<std::endl;
	std::cin>>n;
	f=n;
	for(i=1;i<n;i++){
		f=f*(n-i);
	}
	std::cout<<"le factoriel du nombre n est: "<<f<<std::endl;
	return 0;
}

