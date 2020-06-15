#include <iostream>

#include "./headers/books.h"

int main() {
  std::cout << "PROGRAMA LIBRERIA\n";
  std::cout << "-----------------\n";

  books objBooks;
  objBooks.setTituloLibro("El ocho");
  objBooks.setPaginas(300);

  std::cout<<"Titulo: "<<objBooks.getTituloLibro()<<"\n";
  std::cout<<"Páginas: "<<objBooks.getPaginas()<<"\n";

}