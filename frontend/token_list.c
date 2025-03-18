#include "token_list.h"
#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

void init_token_list(TokenList* tokenList){
  tokenList->arr = malloc(sizeof(Token) * INITIAL_CAPACITY);
  if (tokenList->arr == NULL) {
    fprintf(stderr, "Failed to allocate memory for Token List\n");
    exit(EXIT_FAILURE);
  }
  tokenList->size = 0;
  tokenList->capacity = INITIAL_CAPACITY;
}   

void free_token_list(TokenList* tokenList){ 
  if (tokenList->arr == NULL || tokenList->size == 0){ return; }
  Token* curr = tokenList->arr;
  Token* end  = tokenList->arr + tokenList->size;
  for (; curr != end; curr++){
    if (curr->lexeme != NULL){
      free((void*)curr->lexeme);
      curr->lexeme = NULL;
      curr->type = TOKEN_UNKNOWN;
    }
  }
  free(tokenList->arr);
  tokenList->arr = NULL;
  tokenList->size = 0;
  tokenList->capacity = INITIAL_CAPACITY;
}

void token_list_resize(TokenList* tokenList){
  size_t new_capacity = tokenList->capacity * 2; // Test Growth Factor Here
  Token* new_arr = (Token*)realloc(tokenList->arr, new_capacity * sizeof(Token));

  if (new_arr == NULL){
    fprintf(stderr, "Failed to resize Token List\n");
    exit(EXIT_FAILURE); 
  }
  tokenList->arr = new_arr;
  tokenList->capacity = new_capacity;
  printf("Resized Token List\n");
}

void token_list_clear(TokenList* tokenList){
  if (tokenList->arr == NULL || tokenList->size == 0) { return; }
  Token* curr = tokenList->arr;
  Token* end  = tokenList->arr + tokenList->size;
  for (; curr != end; curr++){
    if (curr->lexeme != NULL){
      free((void*)curr->lexeme);
      curr->lexeme = NULL;
      curr->type = TOKEN_UNKNOWN;
    }
  }
}

void token_list_append(TokenList* tokenList, Token token){
  size_t index = tokenList->size;
  if (index == tokenList->capacity){
    printf("Token List is Full, Resizing...");
    token_list_resize(tokenList);
  }
  tokenList->arr[index].type = token.type;
  tokenList->arr[index].lexeme = strdup(token.lexeme);
  tokenList->size++;
}

void token_list_pop_back(TokenList* tokenList){
  if (tokenList->size == 0){
    return;
  }
  size_t back = tokenList->size - 1;
  free((void*)tokenList->arr[back].lexeme);
  tokenList->arr[back].lexeme = NULL;
  tokenList->arr[back].type = TOKEN_UNKNOWN;
  tokenList->size--;
}

const Token* token_list_get(TokenList* tokenList, size_t index){
  if (index < tokenList->size){
    return &tokenList->arr[index];
  }
  return NULL;
}
