#include <iostream>

#include "./headers/books.h"
#include "./headers/itfBooks.h"

#include <cppunit/ui/mfc/TestRunner.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

int main() {
  std::cout << "PROGRAMA LIBRERIA\n";
  std::cout << "-----------------\n";

  books objBooks;
  objBooks.setTituloLibro("El ocho");
  objBooks.setPaginas(300);

  std::cout<<"Titulo: "<<objBooks.getTituloLibro()<<"\n";
  std::cout<<"Páginas: "<<objBooks.getPaginas()<<"\n\n";

  /*itfBooks objItfBook;
  objItfBook.EscribirLibro();
  objItfBook.LeerLibro();*/

  itfBooks objItfBook2;
  objItfBook2.LeerLibro();




}