#ifndef USUARIO_HPP
#define USUARIO_HPP
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
class Usuario {
private:
	int id;
	string username;
	string contrasena;
	bool esAdmin;
public:
	Usuario();
	Usuario(int,string,string,bool);
    int getId() const;
    string getUsername() const;
    string getContrasena() const;
    bool getEsAdmin() const;
    void setId(int id);
    void setUsername(string username);
    void setContrasena(string contrasena);
    void setEsAdmin(bool esAdmin);
    void guardarUsuario(ofstream*);
    Usuario* cargarUsuario(ifstream*);
};
#endif