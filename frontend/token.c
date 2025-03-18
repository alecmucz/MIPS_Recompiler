#include "token.h"
#include <stdlib.h>

Token* createToken(TokenType type, const char* lexeme){
  Token* token = (Token*)malloc(sizeof(Token));
  if(token == NULL) return NULL; 

  token->type = type;
  token->lexeme = strdup(lexeme);
  if (token->lexeme == NULL) {
    free(token);
  }

  return token;
}

void freeToken(Token* token){
  if (token != NULL){
    free((void *) token->lexeme);
    free(token);
  }
}

void printToken(Token* token){
  if (token != NULL){
    printf("Token(Type: %d, Lexeme: '%s')\n", token->type, token->lexeme);
  }
}

