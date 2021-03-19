#include "Usuario.hpp"

Usuario::Usuario(){}

Usuario::Usuario(int id,string username,string contrasena ,bool esAdmin,vector<Publicacion*> publicaciones){
	this->id = id;
	this->username = username;
	this->contrasena = contrasena;
	this->esAdmin = esAdmin;
	this->publicaciones=publicaciones;
}
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
void Usuario::guardarUsuario(ofstream* fileOf){	
	fileOf->write((char*)&id,sizeof(id));
	size_t tamS = username.size();
	fileOf->write((char *) &tamS, sizeof(size_t));
    fileOf->write(&username[0], tamS);
    
    size_t tamC = contrasena.size();
	fileOf->write((char *) &tamC, sizeof(size_t));
    fileOf->write(&contrasena[0], tamC);
    int num;
    if(esAdmin){
    	num = 1;
	}else{
		num = 0;
	}
	fileOf->write((char*)&num,sizeof(num));
}
Usuario* Usuario::cargarUsuario(ifstream* fileIf){
	Usuario* user;
	int tam = 0;
	fileIf->open("Usuarios.bin",ios::in|ios::binary);
	fileIf->seekg(0,ios::end);
	tam = (int)fileIf->tellg();
	fileIf->seekg(0,ios::beg);
	while(fileIf->tellg()<tam){
		fileIf->read((char*)&id,sizeof(id));
		size_t tamS = username.size();
		fileIf->read((char *) &tamS, sizeof(size_t));
	    fileIf->read(&username[0], tamS);
	    
	    size_t tamC = contrasena.size();
		fileIf->read((char *) &tamC, sizeof(size_t));
	    fileIf->read(&contrasena[0], tamC);
	    int num;
	    if(esAdmin){
	    	num = 1;
		}else{
			num = 0;
		}
		fileIf->read((char*)&num,sizeof(num));
	}
	return user;
}