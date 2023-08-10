#include <stdlib.h>
#include <string.h>
#include "math.h"
#include "table.h"

void helper(void);

int main(int argc, char **argv) {
  int a, b;
  if (argc == 3) {
    if (strcmp(*(argv + 1), "-t") == 0) {
      a = atoi(*(argv + 2));
      if ((a >= 2) && (a <= 9)) {
        table(a - 2);
      } else {
        helper();
      }
    } else {
      helper();
    }
  } else if (argc == 4) {
    if (strcmp(*(argv + 1), "-m") == 0) {
      a = atoi(*(argv + 2));
      b = atoi(*(argv + 3));
      printf("\n\t%d * %d = %d\n", a, b, multiply(a, b));
    } else {
      helper();
    }
  } else {
    helper();
  }
  exit(EXIT_SUCCESS);
}

void helper(void) {
  char *message = "\nOlá, Betânia!\n\n"
                  "Eu sou a sua calculadora pessoal, e irei ajudá-la a\n"
                  "se preparar para as provas. No momento, lhe ofereço\n"
                  "apenas três opções de uso. São elas:\n\n"
                  "\t-t:\ttabelas\n"
                  "\t-m:\tmultiplicação\n"
                  "\t-h:\timprime esta mensagem de ajuda\n\n"
                  "Por exemplo:\n\n"
                  "1) Para ver a tábua de multiplicação de 7, digite\n\n"
                  "\t./calc -t 7\n\n"
                  "em seu terminal e, então, aperte a tecla Enter.\n"
                  "Atualmente, possuo tábuas de multiplicação para\n"
                  "os números de 2 a 9.\n\n"
                  "2) Caso queira que eu multiplique os números, digamos,\n"
                  "2379 e 562, digite\n\n"
                  "\t./calc -m 2379 562\n\n"
                  "e, então, aperte Enter.\n\n"
                  "3) Para ver esta mensagem novamente, digite\n\n"
                  "\t./calc -h\n\n"
                  "Aguarde novas funcionalidades num futuro próximo. Além\n"
                  "disso, você dizer ao papai como ele poderia melhorar o\n"
                  "aplicativo para você. Melhor ainda, vocês poderiam\n"
                  "trabalhar juntos nestas melhorias. Não seria ótimo?\n\n"
                  "Bons estudos e um ótimo dia!\n";
  printf("%s\n", message);
}
