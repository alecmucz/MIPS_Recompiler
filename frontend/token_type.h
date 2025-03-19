#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

// =============================
// Define all token types using an X-Macro
// =============================
#define TOKEN_TYPES_LIST \
    /* ============================= */ \
    /* R-TYPE INSTRUCTIONS (REGISTER) */\
    /* ============================= */ \
    X(TOKEN_ADD, "add") \
    X(TOKEN_ADDU, "addu") \
    X(TOKEN_SUB, "sub") \
    X(TOKEN_SUBU, "subu") \
    X(TOKEN_AND, "and") \
    X(TOKEN_OR, "or") \
    X(TOKEN_XOR, "xor") \
    X(TOKEN_NOR, "nor") \
    X(TOKEN_SLL, "sll") \
    X(TOKEN_SRL, "srl") \
    X(TOKEN_SRA, "sra") \
    X(TOKEN_SLLV, "sllv") \
    X(TOKEN_SRLV, "srlv") \
    X(TOKEN_SRAV, "srav") \
    X(TOKEN_SLT, "slt") \
    X(TOKEN_SLTU, "sltu") \
    X(TOKEN_MULT, "mult") \
    X(TOKEN_MULTU, "multu") \
    X(TOKEN_DIV, "div") \
    X(TOKEN_DIVU, "divu") \
    X(TOKEN_MFHI, "mfhi") \
    X(TOKEN_MFLO, "mflo") \
    X(TOKEN_MOVN, "movn") \
    X(TOKEN_MOVZ, "movz") \
    X(TOKEN_MTC0, "mtc0") \
    X(TOKEN_MFC0, "mfc0") \
    /* ---- 64-BIT INSTRUCTIONS ---- */ \
    X(TOKEN_DADD, "dadd") \
    X(TOKEN_DADDU, "daddu") \
    X(TOKEN_DSUB, "dsub") \
    X(TOKEN_DSUBU, "dsubu") \
    X(TOKEN_DMULT, "dmult") \
    X(TOKEN_DMULTU, "dmultu") \
    X(TOKEN_DDIV, "ddiv") \
    X(TOKEN_DDIVU, "ddivu") \
    X(TOKEN_MFHI64, "mfhi64") \
    X(TOKEN_MFLO64, "mflo64") \
    /* ============================= */   \
    /* I-TYPE INSTRUCTIONS (IMMEDIATE) */ \
    /* ============================= */   \
    X(TOKEN_ADDI, "addi") \
    X(TOKEN_ADDIU, "addiu") \
    X(TOKEN_ANDI, "andi") \
    X(TOKEN_ORI, "ori") \
    X(TOKEN_XORI, "xori") \
    X(TOKEN_SLTI, "slti") \
    X(TOKEN_SLTIU, "sltiu") \
    X(TOKEN_LUI, "lui") \
    /* ---- 64-BIT INSTRUCTIONS ---- */ \
    X(TOKEN_LWU, "lwu") \
    X(TOKEN_LD, "ld") \
    X(TOKEN_SD, "sd") \
    /* ============================= */ \
    /* J-TYPE INSTRUCTIONS (JUMP) */    \
    /* ============================= */ \
    X(TOKEN_JR, "jr") \
    X(TOKEN_J, "j") \
    X(TOKEN_JAL, "jal") \
    X(TOKEN_JALR, "jalr") \
    X(TOKEN_JIALC, "jialc") \
    X(TOKEN_JRHB, "jrhb") \
    /* ---- 64-BIT INSTRUCTIONS ---- */ \
    X(TOKEN_JR64, "jr64") \
    X(TOKEN_JALR64, "jalr64") \
    /* ============================= */               \
    /* MEMORY REFERENCE INSTRUCTIONS (LOAD/STORE) */  \
    /* ============================= */               \
    X(TOKEN_LW, "lw") \
    X(TOKEN_LH, "lh") \
    X(TOKEN_LHU, "lhu") \
    X(TOKEN_LB, "lb") \
    X(TOKEN_LBU, "lbu") \
    X(TOKEN_SW, "sw") \
    X(TOKEN_SH, "sh") \
    X(TOKEN_SB, "sb") \
    /* ---- 64-BIT INSTRUCTIONS ---- */ \
    X(TOKEN_LDL, "ldl") \
    X(TOKEN_LDR, "ldr") \
    X(TOKEN_SDL, "sdl") \
    X(TOKEN_SDR, "sdr") \
    /* ============================= */ \
    /* META-TOKENS & STRUCTURAL */      \
    /* ============================= */ \
    X(TOKEN_EOF, "EOF") \
    X(TOKEN_ERROR, "error") \
    X(TOKEN_UNKNOWN, "unknown") \
    /* ============================= */ \
    /* DELIMITERS AND SEPARATORS */     \
    /* ============================= */ \
    X(TOKEN_COMMA, ",") \
    X(TOKEN_COLON, ":") \
    X(TOKEN_SEMICOLON, ";") \
    X(TOKEN_LPAREN, "(") \
    X(TOKEN_RPAREN, ")") \
    X(TOKEN_LBRACE, "{") \
    X(TOKEN_RBRACE, "}") \
    /* ============================= */ \
    /* LITERALS AND IDENTIFIERS */      \
    /* ============================= */ \
    X(TOKEN_INT_LITERAL, "int literal") \
    X(TOKEN_FLOAT_LITERAL, "float literal") \
    X(TOKEN_IDENTIFIER, "identifier") \
    X(TOKEN_REGISTER, "register") \
    /* ============================= */ \
    /* OPERATORS */                     \
    /* ============================= */ \
    X(TOKEN_PLUS, "+") \
    X(TOKEN_MINUS, "-") \
    X(TOKEN_STAR, "*") \
    X(TOKEN_SLASH, "/") \
    X(TOKEN_PERCENT, "%") \
    X(TOKEN_EQUAL, "=") \
    X(TOKEN_DIRECTIVE, "directive") \
    X(TOKEN_MACRO, "macro")

typedef enum {
    #define X(name, string) name,
    TOKEN_TYPES_LIST
    #undef X
} TokenType;

extern const char* tokenTypeNames[];

const char* getTokenTypeName(TokenType type);

#endif // TOKEN_TYPE_H
