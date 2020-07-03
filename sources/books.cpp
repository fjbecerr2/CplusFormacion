#include "../headers/books.h"

//using namespace nmspbooks;

void books::setCodigo(const unsigned int pCodigo){
  this->Codigo =pCodigo;
}

unsigned int books::getCodigo(){
  return this->Codigo;
}

void books::setTituloLibro(const string pTituloLibro){
  this->TituloLibro = pTituloLibro;
};


string books::getTituloLibro(){
  return this->TituloLibro;
};

void books::setAutor(const string pAutor){
  this->Autor = pAutor;
};


string books::getAutor(){
  return this->Autor;
};

void books::setEditorial(const string pEditorial){
  this->Editorial = pEditorial;
};


string books::getEditorial(){
  return this->Editorial;
};

void books::setPaginas(const int pPaginas){
  this->Paginas = pPaginas;
};

int books::getPaginas(){
  return this->Paginas;
};


void books::setFormato(const string pFormato){
  this->Formato = pFormato;
};


string books::getFormato(){
  return this->Formato;
};

void books::setPrecio(const float pPrecio){
  this->Precio = pPrecio;
};

float books::getPrecio(){
  return this->Precio;
};

void books::setStock(const int pStock){
  this->Stock = pStock;
};

int books::getStock(){
  return this->Stock;
};

