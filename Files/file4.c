#include <stdio.h>

int main(void){

  //Definindo ponteiro do tipo FILE
  FILE *p;

  //A função fopen chama o arquivo texto
  //*fopen(Caminho_do_arquivo, modo_de_abertura);
  //No caso o Caminho_do_arquivo é onde irá o nome e se necessário a especificação do
  //diretório onde o arquivo referênciado está.
  //Por exemplo: O arquivo teste.txt, está em /etc/teste/
  //Para acessar ele com fopen é necessário inserir
  //fopen("/etc/teste/teste.txt")
  //Caso esteja na mesma pasta do executavel, basta colocar o nome do arquivo de texto

  //Metodos de abertura dos arquivos
  /*

  ===== LEITURA =====
  (r) -> Faz a abertura dos arquivos em modo leitura
  Exemplo: *p = fopen('teste.txt', 'r');

  (r+) -> Ao adicionar o + é possível realizar a leitura e escrita
  Exemplo: *p = fopen('teste.txt', 'r');

  (rb) -> Abre o arquivo para leitura, porém em modo binário
  Exemplo: *p = fopen('teste.txt', 'rb');
  ===== FIM =====

  ===== ESCRITA =====
  (w) -> Abre arquivo para escrita
  Exemplo: *p = fopen('teste.txt', 'w');

  (w+) -> 



  */




  return 0;
}
