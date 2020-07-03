
#ifndef ITFBOOKS_H // include guard
#define ITFBOOKS_H

#include <iostream>
using namespace std;

class itfBooks
{

  private:
    string Campos[8] ={
      "Codigo",
      "Titulo",
      "Autor",
      "Editorial",
      "Paginas",
      "Formato",
      "Precio",
      "Stock"
    };

  public:itfBooks(){

  };

  public: inline string DevolverCampo(int pCampo){
    return this->Campos[pCampo];
  }

  public:void EscribirLibro();

  public:void EscribirCodigo();
  public:void EscribirTitulo();
  public:void EscribirAutor();
  public:void EscribirEditorial();
  public:void EscribirPaginas();
  public:void EscribirFormato();
  public:void EscribirPrecio();
  public:void EscribirStock();

  public:void LeerLibro();

  public:void LeerCodigo();
  public:void LeerTitulo();
  public:void LeerAutor();
  public:void LeerEditorial();
  public:void LeerPaginas();
  public:void LeerFormato();
  public:void LeerPrecio();
  public:void LeerStock();
  
};
 

#endif