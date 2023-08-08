#include <stdlib.h>
#include "table.h"
#include "multiply.h"

int main(void) {
  printf("%d * %d = %d\n", 2, 3, multiply(2, 3));
  exit(EXIT_SUCCESS);
}
