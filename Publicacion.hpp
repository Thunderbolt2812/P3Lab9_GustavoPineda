#ifndef PUBLICACION_HPP
#define PUBLICACION_HPP
#include<string>
#include<fstream>
#include<iostream>
using namespace std;
class Usuario;
class Publicacion {
private:
	int idPublicacion;
	string titulo;
	Usuario* autor;
	string texto;
public:
	Publicacion();
	Publicacion(int,string,Usuario*,string);
    int getIdPublicacion() const;
    string getTitulo() const;
    string getAutor() const;
    bool getTexto() const;
    void setIdPublicacion(int idPublicacion);
    void setTitulo(string titulo);
    void setContrasena(string contrasena);
    void setEsAdmin(bool esAdmin);
    void guardarPublicacion(ofstream*);
    Publicacion* cargarPublicacion(ifstream*);
};
#endif