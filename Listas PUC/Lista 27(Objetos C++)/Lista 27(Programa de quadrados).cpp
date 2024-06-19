#include <iostream>
#define MAX 5
using namespace std;

typedef class Quadrado{
  private:
    float lado;
    string cor;
  public:
    void getLado(){
      float lado;
      cout << "Digite aqui o tamanho do lado do Quadrado TESTE: ";
      cin >> lado;
      setLado(lado);
    }
    void setLado(float lado){
      this->lado = lado;
    }
    void writeLado(){
      cout << "\nO lado do quadrado é: " << this->lado;
    }
}Quadrado;

typedef class QuadradoRead{
  private:
    float lado;
    string cor;
  public:
    void getLado(int i){
      float lado;
      cout << "\nDigite aqui o tamanho do lado do " << i + 1 << "° Quadrado: ";
      cin >> lado;
      setLado(lado);
    }
    void setLado(float lado){
      this->lado = lado;
    }

    void getCor(int i){
      string cor;
      cout << "\nDigite aqui a cor do " << i + 1 << "º quadrado: ";
      cin >> cor;
      setCor(cor);
    }
    void setCor(string cor){
      this->cor = cor;
    }

    float listLado(){
      return this->lado;
    }
    string listCor(){
      return this->cor;
    }
    float listArea(){
      return this->lado * this->lado;
    }
    float listPer(){
      return this->lado * 4;
    }
}QuadradoRead;

int menu(){
  int choice;  
  cout << "\n\nDigite 1 para inserir um novo Quadrado\nDigite 2 para listar os quadrados que você já inseriu\nDigite 0 para sair\n-> ";
  cin >> choice;
  return choice;
};

int main() {
  //Leitura e listagem de 2 formas de caracterizar instâncias(Normal e ponteiros)
  Quadrado Q1;
  Q1.getLado();
  Quadrado *Q2 = new Quadrado;
  Q2->getLado();
  //Os dois quadrados já recebem valores do teclado
  Q1.writeLado();
  Q2->writeLado();
  
  //-------------------------------------------------
  //Criação do vetor de quadrados à serem inseridos
  QuadradoRead *Qs[MAX];
  //Menu para inserção e escritura de novos quadrados
  cout << "\n\n\nINÍCIO DO PROGRAMA DE QUADRADOS";
  int redirect = -1, i = 0;
  while(redirect != 0){
    redirect = menu();
    if(redirect == 1 && i < MAX){
      Qs[i] = new QuadradoRead;
      Qs[i]->getLado(i);
      Qs[i]->getCor(i);
      i++;
    }
    else if(redirect == 1 && i >= MAX){
      cout << "\nLimite de quadrados atingido.";
    }
    else if(redirect == 2){
      for(int j = 0; j < i; j++){
        cout << "\n\nLado do " << j + 1 << "º quadrado: " << Qs[j]->listLado();
        cout << "\nCor do " << j + 1 << "º quadrado: " << Qs[j]->listCor();
        cout << "\nArea do " << j + 1 << "º quadrado: " << Qs[j]->listArea();
        cout << "\nPerímetro do " << j + 1 << "º quadrado: " << Qs[j]->listPer() << "\n";
      }
    }
    else if(redirect != 0){
      cout << "\nOperação inválida, tente novamente";
    }
  }
  return 0;
} 