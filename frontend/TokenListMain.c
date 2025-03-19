#include "token_list.h"

int main(){
  TokenList tokenList;
  init_token_list(&tokenList);

  // Example 1 : addi $t0, $t1, 10
  Token* addi = createToken(TOKEN_ADDI,"addi");
  Token* var0 = createToken(TOKEN_REGISTER,"$t0");
  Token* comma0 = createToken(TOKEN_COMMA, ",");
  Token* var1 = createToken(TOKEN_REGISTER,"$t1");
  Token* comma1 = createToken(TOKEN_COMMA, ",");

  token_list_append(&tokenList, addi);
  token_list_append(&tokenList, var0);
  token_list_append(&tokenList, comma0);
  token_list_append(&tokenList, var1);
  token_list_append(&tokenList, comma1);

  for (int i = 0; i < tokenList.size; i++){
    printToken(&tokenList.arr[i]);
  }

  freeToken(addi);
  freeToken(var0);
  freeToken(comma0);
  freeToken(var1);
  freeToken(comma1);

  free_token_list(&tokenList);

  return 0;
}
