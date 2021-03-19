#ifndef BLOG_HPP
#define BLOG_HPP
#include<string>
#include <vector>
#include<iostream>
#include "Usuario.hpp"
#include "Publicacion.hpp"
using namespace std;
class Blog {
private:
	string nombre;
	vector<Usuario*> usuarios;
public:
	Blog();
	Blog(string,vector<Usuario*>);
    string getNombre() const;
    vector<Usuario*> get() const;
    void setNombre(string nombre);
    void agregarUsuarios(vector<Usuario*> usuarios);
    void verPublicaciones();
	bool compare(Publicacion*, Publicacion*);
	void cargarArchivos(string,string);
	void escribirUsuarios(string);
	void escribirPublicaciones(string);
};
#endif