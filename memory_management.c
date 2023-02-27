#include <stdlib.h>

/*
gcc -c <file> で<file>.oファイルを作り、size <file>.o, objdump -h <file>.oとかで見れる。
*/

int main(){
  char *p = malloc(100);
  if (p == NULL) {} // メモリが確保できなかった時の処理

  int *p2 = calloc(100, sizeof(int));
  if (p2 == NULL) {} // メモリが確保できなかった時の処理

  char *p3 = realloc(p, 200);
  if (p3 == NULL) {
    // メモリが確保できなかった時の処理
  } else {
    p = p3;
  }

  // 確保したメモリを解放する
  free(p2);
  free(p);
}