

#ifndef BOOKS_H // include guard
#define BOOKS_H
//#include <iostream>
#include <string>

using namespace std;

class books
{

  string TituloLibro;
  string Autor;
  string Editorial;
  int Paginas;
  string Formato;
  float Precio;

  public:books(){ };
  ~books(){};          // Destructor




  public:void setTituloLibro(const string);
  //public:void setAutor(){};
  //public:void setEditorial(){};
  public:void setPaginas(const int);
  //public:void setFormato(){};
  //public:void setPrecio(){};

  public:string getTituloLibro();
  //public:void getAutor(){};
  //public:void getEditorial(){};
  public:int getPaginas();
  //public:void getFormato(){};
  //public:void getPrecio(){};

  
  
};




  

#endif