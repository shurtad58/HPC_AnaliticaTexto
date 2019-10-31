#include <map>
#include <sstream>
#include <string>
#include <omp.h>

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

#pragma omp parallel
  {
    string index =   "";
    string id =      "";
    string title =   "";
    string content = "";

 while (ip.good()) {
    #pragma omp critical
    {
      getline(ip, index,   '\t');
      getline(ip, id,      '\t');
      getline(ip, title,   '\t');
      getline(ip, content, '\n');
    }

    int main(int argc, char *argv[]) {
    string files[3] = //{"./datasets/1.csv", "../datasets/2.csv", "../datasets/3.csv"};
  
  
  }