#ifndef TOKEN_H
#define TOKEN_H

#include "token_type.h"

typedef struct {
  TokenType type;
  const char* lexeme;
  //int row;
  //int column;
} Token;

Token* createToken(TokenType type, const char* lexeme);
void freeToken(Token* token);
void printToken(const Token* token);

#endif 
