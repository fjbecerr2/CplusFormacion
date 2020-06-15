#include "../headers/books.h"

//using namespace nmspbooks;

void books::setTituloLibro(const string pTituloLibro){
  this->TituloLibro = pTituloLibro;
};


string books::getTituloLibro(){
  return this->TituloLibro;
};

void books::setPaginas(const int pPaginas){
  this->Paginas = pPaginas;
};

int books::getPaginas(){
  return this->Paginas;
};