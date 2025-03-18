#ifndef TOKEN_LIST_H
#define TOKEN_LIST_H

#include <stdlib.h>
#include <string.h>
#include "token.h"

typedef struct {
  Token* arr;
  size_t size;
  size_t capacity;
} TokenList;

void init_token_list(TokenList* tokenList);
void free_token_list(TokenList* tokenList);

void token_list_resize(TokenList* tokenList);
void token_list_clear(TokenList* tokenList);

void token_list_append(TokenList* tokenList, Token token);
void token_list_pop_back(TokenList* tokenList);
const Token* token_list_get(TokenList* tokenList, size_t index);

#endif
