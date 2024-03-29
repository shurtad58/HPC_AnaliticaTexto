#include <map>
#include "mpi.h"
#include <string>
#include <sstream>

typedef struct frec {
    int frec;
    string doc_id;
    string title;
} frecuencia;

class contPal {
    public:
    int valor;
    contPal(): valor(0){}
    void operator++(int) {valor++;}
};

ostream &operator<<(ostream &st, contPal &wc) {
  return st << wc.valor;

map<string, map<string, frec> > 0;
map<string, map<string, frec> > 1;
map<string, map<string, frec> > 2;

MPI_Comm comm = MPI_COMM_WORLD;


int main(int argc, char *argv[]) {
    string files[3] = //{"./datasets/1.csv", "../datasets/2.csv", "../datasets/3.csv"};
  
  
  }
