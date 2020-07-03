

#ifndef BOOKS_H // include guard
#define BOOKS_H
//#include <iostream>
#include <string>

using namespace std;

class books
{

  unsigned int Codigo;
  string TituloLibro;
  string Autor;
  string Editorial;
  int Paginas;
  string Formato;
  float Precio;
  int Stock;

  public:books(){
    this->Codigo =0;
    this->TituloLibro ="SIN TITULO";
    this->Autor ="SIN AUTOR";
    this->Editorial ="SIN EDITORIAL";
    this->Paginas =0;
    this->Formato ="SIN FORMATO";
    this->Precio =0;
    this->Stock =0;
   };

  ~books(){};          // Destructor



  public:void setCodigo(const unsigned int Codigo);
  public:void setTituloLibro(const string);
  public:void setAutor(const string);
  public:void setEditorial(const string);
  public:void setPaginas(const int);
  public:void setFormato(const string);
  public:void setPrecio(const float);
  public:void setStock(const int);

  public:unsigned int getCodigo();
  public:string getTituloLibro();
  public:string getAutor();
  public:string getEditorial();
  public:int getPaginas();
  public:string getFormato();
  public:float getPrecio();
  public:int getStock();
  
};

#endif