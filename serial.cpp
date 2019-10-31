#include <map>
#include <sstream>
#include <string>


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

  map<string, map<string, frecuency> > table;

  int main(int argc, char *argv[]) {
    string files[3] = //{"./articlespart1.csv", "./articlespart2.csv", "./articlespart3.csv"};
  
  
  }