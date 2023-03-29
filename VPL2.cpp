#include <iostream>
#include <cstddef>

using namespace std;

// 1) A funcao deve adicionar dez a uma variavel inteira
//Esse 1° * indica o endereço, o 2° * indica que como recebeu a variável como endereço você coloca o * para acessar o valor daquele endereço
void add10(int *n) {
  *n=*n+10;
}

// 2) A funcao deve comparar dois endereços, retornando true se apontarem para a mesma posicao na memoria e false caso contrario
bool compare_end(int *num1, int *num2) {
  // Esse não tem * porque estamos acessando o edereço que recebemos na função mesmo
  if(num1==num2) return true;
  return false;
}

// 3) A funcao deve comparar os valores armazenados em dois enderecos, retornando true se forem iguais e false caso contrario
bool compare_val(int *num1, int *num2) {
  // Novamente, tem * porque estamos acessando valores
  if(*num1==*num2) return true;
  return false;
}

// 4) A funcao deve receber o ponteiro para um numero inteiro e retornar o ponteiro para um caractere
char* cast_TO_char(int *n) {
  // Acha tamanho do caractere que você recebeu
  // Nesse exemplo vamos alocar essa variável na heap para que possamos acessar o valor dela e não apenas o endereço
  int tam = sizeof(char)
  char* c = new char(tam);
  *c = (char)(*n);
  return c;
  free(c);
}

// 5) A funcao deve imprimir todos os caracteres ate que o caracter ‘/0’ seja encontrado.
// O parametro e um ponteiro para a primeira posicao do vetor de caracteres
// A funcao deve adicionar uma quebra de linha '\n' apos exibir a cadeia de caracteres.
void print_char(char *n) {
  cout<<"Vamos imprimir os valores até achar /0"<<endl;
  for(int i = 0; *(n+i)!="\0";i++){
    cout<<*(n+i)<<endl;
  }
  cout<<endl;
  return 0;
}

// 6) A funcao deve imprimir uma string.
// O parametro e a referencia para um string.
// A funcao deve adicionar uma quebra de linha '\n' apos exibir a string.
void print_string(string &str) {
  //Nesse caso como estamos usando &, não é necessário o uso dos * porque o computador já entende q estamos acessando o valor da variavel
  char a = str;
  cout<<a<<endl;
  return 0;
}

// 7) A funcao deve concatenar uma string (end) ao final de outra (begin)
void concatenar_string(string &begin, string end) {
  string juntar = end + begin;
}

// 8) A funcao deve uma alocar um array com 10 posicoes e
// inicializa-las com o identificador da sua posição
void aloca_array(int** arr) {
  int tam2 = sizeof(int);
  arr=(int)malloc(tam2*10);
  for (int j = 0; j < 10; j++) {
    (*arr)[j] = j;
  }
}

// 9) A funcao deve exibir os valores armazenados em um array
// Os valores devem ser separados por um espaco
// Adicione uma quebra de linha após exibir os valores
void exibe_array(int* arr) {
  for(int i=0;i<11;i++)
  cout<<*(arr+i)<<" ";
  cout<<endl;
  return 0;
}

// 10) A funcao deve adicionar o offset (pos) ao endereco (arr),
// e retornar um ponteiro para a nova posicao
int* retorna_addr_array_pos(int* arr, int pos) {
  int* nova_pos = *arr+pos;
  return (nova_pos);
}

// 11) A funcao deve liberar a memória utilizada pelo array
void libera_array(int* arr) {
  free(arr);
}

int main(){
  int num1 = 10, num2 = 20, num3 = 10;
  int num4 = 'a';

  add10(&num1);
  cout << num1 << endl;
  cout << compare_end(&num1, &num2) << endl;
  cout << compare_val(&num1, &num2) << endl;
  cout << compare_end(&num1, &num3) << endl;
  cout << compare_val(&num1, &num2) << endl;
  char *c = cast_TO_char(&num4);
  printf("%c\n",c[0]);

  char text[21] = "PDS II is the best!\0";
  print_char(text);

  string text2 = "PDS II is great!";
  print_string(text2);
 
  concatenar_string(text2, " It is really nice! =D");
  print_string(text2);

  int *array;
  aloca_array(&array);
  int *p6 = retorna_addr_array_pos(array, 6);
  *p6 = *p6 * *p6 * 3.1415;
  cout << "Position 6: " << *p6 << " -> " << (p6 - array) << endl;
  exibe_array(array);
  libera_array(array);

  return 0;
}
