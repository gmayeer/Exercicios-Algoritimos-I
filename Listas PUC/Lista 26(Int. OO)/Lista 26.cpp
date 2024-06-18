#include <iostream>

//Criação do OBJETO
class Quadrado{
  public:
  float lado;
};

int main() {

  //OBJETO em variável
  Quadrado Q1;
  Quadrado Q2;
  //Leitura do lado parametrizado
  Q1.lado = 4;
  //Leitura do lado USUÁRIO
  do{
    std::cout << "\nDigite aqui o tamanho do lado do quadrado: ";
    std::cin >> Q2.lado;
  }while(Q2.lado < 0);
  //Escrevendo o lado
  std::cout << "\nTamanho do lado: " << Q2.lado;
  //Calculando o perímetro
  float perimetro = Q2.lado * 4;
  //Calculando a área
  float area = Q2.lado * Q2.lado;

  //Escrevendo perímetro
  std::cout << "\nPerímetro do quadrado lido: " << perimetro;
  //Escrevendo a área
  std::cout << "\nÁrea do quadrado lido: " << area;
}