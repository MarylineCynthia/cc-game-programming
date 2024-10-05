#include<iostream>
#include<math.h>

int main(int argc, char** arg){
    float ab, bc, ac,x1,x2,x3,y1,y2,y3;
    int n;
	std::cout<<"entrer les coordonnees du point a"<<x1<<y1<<std::endl;
	std::cin>>x1>>y1;
	std::cout<<"entrer les coordonnees du point b"<<x2<<y2<<std::endl;
	std::cin>>x2>>y2;
	std::cout<<"entrer les coordonnees du point c"<<x3<<y3<<std::endl;
	std::cin>>x3>>y3;
	std::cout<<"pour calculer la longueur de ab entrer 1\n pour calculer la longueur de bc entrer 2\n pour calculer la longueur de ac entrer 3\n";
	std::cin>>n;
	if(n == 1){
		ab = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		std::cout<<"la longueur de ab est de:"<<ab<<std::endl;
	}else if(n == 2){
		bc = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
		std::cout<<"la longueur de bc est de:"<<bc<<std::endl;
	}else if(n == 3){
		ac = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
		std::cout<<"la longueur de ac est de:"<<ac<<std::endl;
	}
	
	return 0;
}

