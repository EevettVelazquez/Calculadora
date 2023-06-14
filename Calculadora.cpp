#include <iostream>
#include <math.h>


using namespace std;

int main(){
	
	int num;
	int nu; 
	float res; 
	int opc;
	
	
	cout<<"escoger operacion a realizar: "<<endl;
	cout<<"1) suma"<<endl;
	cout<<"2) resta"<<endl;
	cout<<"3) division"<<endl;
	cout<<"4) multiplicacion"<<endl;
	cin>>opc;
	cout<<"ingrese numero uno: "<<endl;
	cin>>num;
	cout<<"ingrese numero dos: "<<endl;
	cin>>nu;
	
	
switch(opc){
		
		case 1:	
			res= num+nu;
		cout<<"su resultado es: "<<res<<endl;
		break;
		
		case 2:
			res= num-nu;
		cout<<"su resultado es: "<<res<<endl;	
		break;
		
		case 3:
			if (nu!=0){
				res= num/nu;
				cout<<"su reslutado es: "<<res<<endl;
			}else{
				cout<<"division invalida"<<endl;
			}
			
		break;
		
		case 4:
			res= num*nu;
		cout<<"su resultado es: "<<res<<endl;
		break;
}								
		
	}
