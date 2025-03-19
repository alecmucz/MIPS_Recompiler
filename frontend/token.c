#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void printToken(const Token* token){
  if (token != NULL){
    printf("Token(Type: %s, Lexeme: '%s')\n", getTokenTypeName(token->type), token->lexeme);
  }
}

