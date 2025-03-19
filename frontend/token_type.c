#include "token_type.h"

const char* tokenTypeNames[] = {
    #define X(name, string) #name,
    TOKEN_TYPES_LIST
    #undef X
};

const char* getTokenTypeName(TokenType type) {
    if (type >= 0 && type < sizeof(tokenTypeNames) / sizeof(tokenTypeNames[0])) {
        return tokenTypeNames[type];
    }
    return "UNKNOWN";
}
