#include "../headers/itfBooks.h"
#include "../headers/books.h"
#include <iostream>

books objBook;
string stvalor;
int ivalor;
float fvalor;

void itfBooks::EscribirLibro(){
  EscribirCodigo();
  EscribirTitulo();
  EscribirAutor();
  EscribirEditorial();
  EscribirFormato();
  EscribirPaginas();
  EscribirPrecio();
  EscribirStock();
}

void itfBooks::EscribirCodigo(){
  unsigned int pCodigo =0;
  objBook.setCodigo(pCodigo);
}

void itfBooks::EscribirTitulo(){
  std::cout<<"Introduzca "<<DevolverCampo(0)<<": ";
  getline (cin, stvalor); //Para los espacios
  objBook.setTituloLibro(stvalor);
}

void itfBooks::EscribirAutor(){
  std::cout<<"Introduzca "<<DevolverCampo(1)<<": ";
  getline (cin, stvalor);
  objBook.setAutor(stvalor);
}

void itfBooks::EscribirEditorial(){
  std::cout<<"Introduzca "<<DevolverCampo(2)<<": ";
  getline (cin, stvalor);
  objBook.setEditorial(stvalor);
}

void itfBooks::EscribirPaginas(){
  std::cout<<"Introduzca "<<DevolverCampo(3)<<": ";
  cin>>ivalor;
  objBook.setPaginas(ivalor);
}

void itfBooks::EscribirFormato(){
  std::cout<<"Introduzca "<<DevolverCampo(4)<<": ";
  getline (cin, stvalor);
  objBook.setFormato(stvalor);
}

void itfBooks::EscribirPrecio(){
  std::cout<<"Introduzca "<<DevolverCampo(5)<<": ";
  cin>>fvalor;
  objBook.setPrecio(fvalor);
}

void itfBooks::EscribirStock(){
  std::cout<<"Introduzca "<<DevolverCampo(6)<<": ";
  cin>>ivalor;
  objBook.setStock(ivalor);
}

void itfBooks::LeerLibro(){
  for(int i=0; i<sizeof(Campos)/sizeof(Campos[0]); i++)
  {
    std::cout<<DevolverCampo(i)<<": ";
    switch(i){
      case 0: LeerCodigo();
      break;
      case 1: LeerTitulo();
      break;
      case 2: LeerAutor();
      break;
      case 3: LeerEditorial();
      break;
      case 4: LeerFormato();
      break;
      case 5: LeerPaginas();
      break;
      case 6: LeerPrecio();
      break;
      case 7: LeerStock();
      break;
    } 
  }
  
}

void itfBooks::LeerCodigo(){
 std::cout<<objBook.getCodigo()<<"\n";
}
void itfBooks::LeerTitulo(){
  std::cout<<objBook.getTituloLibro()<<"\n";
}

void itfBooks::LeerAutor(){
  std::cout<<objBook.getAutor()<<"\n";
}

void itfBooks::LeerEditorial(){
  std::cout<<objBook.getEditorial()<<"\n";
}

void itfBooks::LeerPaginas(){
  std::cout<<objBook.getPaginas()<<"\n";
}

void itfBooks::LeerFormato(){
  std::cout<<objBook.getFormato()<<"\n";
}

void itfBooks::LeerPrecio(){
  std::cout<<objBook.getPrecio()<<"\n";
}

void itfBooks::LeerStock(){
  std::cout<<objBook.getStock()<<"\n";
}
