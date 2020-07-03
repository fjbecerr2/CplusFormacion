#ifndef GENERADORES_H // include guard
#define GENERADORES_H

class generadores{

  private:
    String codigo;
    String dni;

    public:GenerarCodigo();
    public:DevolverCodigo();

    public:GenerarNumeroDNI();
    public:GenerarLetraDNI();
    public:GenerarDNI();

    public:DevolverNumeroDNI();
    public:DevolverLetraDNI();
    public:DevolverDNI();
}


#endif