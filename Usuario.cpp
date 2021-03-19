#include "Usuario.hpp"

Usuario::Usuario(){}

Usuario::Usuario(int id,string username,string contrasena ,bool esAdmin){
	this->id = id;
	this->username = username;
	this->contrasena = contrasena;
	this->esAdmin = esAdmin;
}
int Usuario::getId() const{
	return this->id;
}
string Usuario::getUsername() const{
	return this->username;
}
string Usuario::getContrasena() const{
	return this->contrasena;
}
bool Usuario::getEsAdmin() const{
	return this->esAdmin;
}
void Usuario::setId(int id){
	this->id = id;
}
void Usuario::setUsername(string username){
	this->username = username;
}
void Usuario::setContrasena(string contrasena){
	this->contrasena = contrasena;
}
void Usuario::setEsAdmin(bool esAdmin){
	this->esAdmin = esAdmin;
}
void Usuario::guardarUsuario(ofstream*){
	
}
Usuario* Usuario::cargarUsuario(ifstream*){
	
}