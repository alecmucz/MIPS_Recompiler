#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

typedef enum {
  // =============================
  // R-TYPE INSTRUCTIONS (Register)
  // =============================
  TOKEN_ADD,      // add
  TOKEN_ADDU,     // addu
  TOKEN_SUB,      // sub
  TOKEN_SUBU,     // subu
  TOKEN_AND,      // and
  TOKEN_OR,       // or
  TOKEN_XOR,      // xor
  TOKEN_NOR,      // nor
  TOKEN_SLL,      // sll
  TOKEN_SRL,      // srl
  TOKEN_SRA,      // sra
  TOKEN_SLLV,     // sllv
  TOKEN_SRLV,     // srlv
  TOKEN_SRAV,     // srav
  TOKEN_SLT,      // slt
  TOKEN_SLTU,     // sltu
  TOKEN_MULT,     // mult
  TOKEN_MULTU,    // multu
  TOKEN_DIV,      // div
  TOKEN_DIVU,     // divu
  TOKEN_MFHI,     // mfhi
  TOKEN_MFLO,     // mflo
  TOKEN_MOVN,     // movn
  TOKEN_MOVZ,     // movz
  TOKEN_MTC0,     // mtc0
  TOKEN_MFC0,     // mfc0

  // =============================
  // I-TYPE INSTRUCTIONS (Immediate)
  // =============================
  TOKEN_ADDI,     // addi
  TOKEN_ADDIU,    // addiu
  TOKEN_ANDI,     // andi
  TOKEN_ORI,      // ori
  TOKEN_XORI,     // xori
  TOKEN_SLTI,     // slti
  TOKEN_SLTIU,    // sltiu
  TOKEN_LUI,      // lui

  // =============================
  // J-TYPE INSTRUCTIONS (Jump)
  // =============================
  TOKEN_JR,       // jr
  TOKEN_J,        // j
  TOKEN_JAL,      // jal
  TOKEN_JALR,     // jalr
  TOKEN_JIALC,    // jialc
  TOKEN_JRHB,     // jrhb

  // =============================
  // MEMORY REFERENCE INSTRUCTIONS
  // =============================
  TOKEN_LW,       // lw
  TOKEN_LH,       // lh
  TOKEN_LHU,      // lhu
  TOKEN_LB,       // lb
  TOKEN_LBU,      // lbu
  TOKEN_SW,       // sw
  TOKEN_SH,       // sh
  TOKEN_SB,       // sb
  TOKEN_LWL,      // lwl
  TOKEN_LWR,      // lwr
  TOKEN_SWL,      // swl
  TOKEN_SWR,      // swr

  // =============================
  // CONDITIONAL INSTRUCTIONS (Branch)
  // =============================
  TOKEN_BEQ,      // beq
  TOKEN_BNE,      // bne
  TOKEN_BLEZ,     // blez
  TOKEN_BGTZ,     // bgtz
  TOKEN_BLTZ,     // bltz
  TOKEN_BGEZ,     // bgez
  TOKEN_BLTZAL,   // bltzal
  TOKEN_BGEZAL,   // bgezal

  // =============================
  // FLOATING POINT INSTRUCTIONS
  // =============================
  TOKEN_ADDS,     // add.s
  TOKEN_SUBS,     // sub.s
  TOKEN_MULS,     // mul.s
  TOKEN_DIVS,     // div.s
  TOKEN_CVTSW,    // cvt.s.w
  TOKEN_C_EQ_S,   // c.eq.s
  TOKEN_C_LT_S,   // c.lt.s
  TOKEN_C_LE_S,   // c.le.s

  // =============================
  // SYSTEM CALL INSTRUCTIONS
  // =============================
  TOKEN_SYSCALL,  // syscall
  TOKEN_BREAK,    // break
  TOKEN_ERET,     // eret
  TOKEN_WAIT,     // wait

  // =============================
  // ATOMIC INSTRUCTIONS (Sync)
  // =============================
  TOKEN_LL,       // ll
  TOKEN_SC,       // sc
  TOKEN_SYNC,     // sync

  // =============================
  // EXTRA INSTRUCTIONS
  // =============================
  TOKEN_CACHE,    // cache
  TOKEN_PREF,     // pref

  // =============================
  // META-TOKENS & STRUCTURAL
  // =============================
  TOKEN_EOF,       // End of file
  TOKEN_ERROR,     // Error/Unknown token
  TOKEN_UNKNOWN,   // Unknown instruction
  TOKEN_NEWLINE,   // \n
  TOKEN_WHITESPACE,// Whitespace (tabs, spaces)

  // Comments
  TOKEN_COMMENT,   // // or /* */

  // Delimiters & Separators
  TOKEN_COMMA,     // ,
  TOKEN_COLON,     // :
  TOKEN_SEMICOLON, // ;
  TOKEN_LPAREN,    // (
  TOKEN_RPAREN,    // )
  TOKEN_LBRACE,    // {
  TOKEN_RBRACE,    // }

  // Literals & Identifiers
  TOKEN_INT_LITERAL,   // 123, 0x7F, etc.
  TOKEN_FLOAT_LITERAL, // 1.5, 2.75, etc.
  TOKEN_IDENTIFIER,    // variable names, labels
  TOKEN_REGISTER,      // , , etc.

  // Operators
  TOKEN_PLUS,      // +
  TOKEN_MINUS,     // -
  TOKEN_STAR,      // *
  TOKEN_SLASH,     // /
  TOKEN_PERCENT,   // %
  TOKEN_EQUAL,     // =
  TOKEN_AMPERSAND, // &
  TOKEN_PIPE,      // |
  TOKEN_CARET,     // ^
  TOKEN_TILDE,     // ~
  TOKEN_LT,        // <
  TOKEN_GT,        // >
  TOKEN_LE,        // <=
  TOKEN_GE,        // >=
  TOKEN_EQ,        // ==
  TOKEN_NE,        // !=

  // Preprocessor/Directives
  TOKEN_DIRECTIVE, // .data, .text, .globl, etc.
  TOKEN_MACRO      // Inline macro definitions

} TokenType;

#endif // TOKEN_TYPE_H
