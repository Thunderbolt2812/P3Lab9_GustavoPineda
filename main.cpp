#include <iostream>
#include "Blog.hpp"
#include "Publicacion.hpp"
#include "Usuario.hpp"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
bool empty(ifstream& archivo){
    return archivo.peek() == ifstream::traits_type::eof();
}
int cont = 1;
int main(int argc, char** argv) {
	ifstream* Usuarios = new ifstream("Usuarios.bin",ios::binary);
	if(Usuarios->is_open()){
		if(empty(*Usuarios)){
			Usuarios->close();
			ofstream* Usuari = new ofstream("Usuarios.bin");
			Usuario* admin = new Usuario(cont,"admin","1111",true);
			admin->guardarUsuario(Usuari);
			Usuari->close();
		}else{
			Usuarios->close();
			string user,contrasena;
			cout<<"Login"<<endl;
			cout<<"Username: ";
			cin>>user;
			cout<<endl<<"Contrasena: ";
			cin>>contrasena;
			cout<<endl;
			
		}
	}
	
	return 0;
}