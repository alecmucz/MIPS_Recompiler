#ifndef TOKEN_TYPE_H
#define TOKEN_TYPE_H

typedef enum {
  // =============================
  // R-TYPE INSTRUCTIONS (REGISTER)
  // =============================

  // ---- 32-BIT INSTRUCTIONS ----
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

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_DADD,      // dadd
  // TOKEN_DADDU,     // daddu
  // TOKEN_DSUB,      // dsub
  // TOKEN_DSUBU,     // dsubu
  // TOKEN_DMULT,     // dmult
  // TOKEN_DMULTU,    // dmultu
  // TOKEN_DDIV,      // ddiv
  // TOKEN_DDIVU,     // ddivu
  // TOKEN_MFHI64,    // mfhi (64-bit)
  // TOKEN_MFLO64,    // mflo (64-bit)

  // =============================
  // I-TYPE INSTRUCTIONS (IMMEDIATE)
  // =============================

  // ---- 32-BIT INSTRUCTIONS ----
  TOKEN_ADDI,     // addi
  TOKEN_ADDIU,    // addiu
  TOKEN_ANDI,     // andi
  TOKEN_ORI,      // ori
  TOKEN_XORI,     // xori
  TOKEN_SLTI,     // slti
  TOKEN_SLTIU,    // sltiu
  TOKEN_LUI,      // lui

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_LWU,       // lwu
  // TOKEN_LD,        // ld
  // TOKEN_SD,        // sd

  // =============================
  // J-TYPE INSTRUCTIONS (JUMP)
  // =============================

  // ---- 32-BIT INSTRUCTIONS ----
  TOKEN_JR,       // jr
  TOKEN_J,        // j
  TOKEN_JAL,      // jal
  TOKEN_JALR,     // jalr
  TOKEN_JIALC,    // jialc
  TOKEN_JRHB,     // jrhb

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_JR64,      // jr (64-bit)
  // TOKEN_JALR64,    // jalr (64-bit)

  // =============================
  // MEMORY REFERENCE INSTRUCTIONS (LOAD/STORE)
  // =============================

  // ---- 32-BIT INSTRUCTIONS ----
  TOKEN_LW,       // lw
  TOKEN_LH,       // lh
  TOKEN_LHU,      // lhu
  TOKEN_LB,       // lb
  TOKEN_LBU,      // lbu
  TOKEN_SW,       // sw
  TOKEN_SH,       // sh
  TOKEN_SB,       // sb

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_LDL,       // ldl
  // TOKEN_LDR,       // ldr
  // TOKEN_SDL,       // sdl
  // TOKEN_SDR,       // sdr

  // =============================
  // CONDITIONAL INSTRUCTIONS (BRANCH)
  // =============================

  // ---- 32-BIT INSTRUCTIONS ----
  TOKEN_BEQ,      // beq
  TOKEN_BNE,      // bne
  TOKEN_BLEZ,     // blez
  TOKEN_BGTZ,     // bgtz
  TOKEN_BLTZ,     // bltz
  TOKEN_BGEZ,     // bgez

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_DSLT,      // dslt
  // TOKEN_DSLTU,     // dsltu
  // TOKEN_DSEQ,      // dseq
  // TOKEN_DSNE,      // dsne

  // =============================
  // FLOATING POINT INSTRUCTIONS
  // =============================

  // ---- SINGLE PRECISION (32-bit) ----
  TOKEN_ADDS,     // add.s
  TOKEN_SUBS,     // sub.s
  TOKEN_MULS,     // mul.s
  TOKEN_DIVS,     // div.s
  TOKEN_CVTSW,    // cvt.s.w

  // ---- DOUBLE PRECISION (64-bit) ----
  // TOKEN_ADDD,      // add.d
  // TOKEN_SUBD,      // sub.d
  // TOKEN_MULD,      // mul.d
  // TOKEN_DIVD,      // div.d

  // =============================
  // SYSTEM CALL INSTRUCTIONS (SYSCALLS)
  // =============================
  TOKEN_SYSCALL,  // syscall
  TOKEN_BREAK,    // break

  // ---- 64-BIT INSTRUCTIONS ----
  // TOKEN_SYSCALL64, // syscall (64-bit)
  // TOKEN_BREAK64,   // break (64-bit)

  // =============================
  // META-TOKENS & STRUCTURAL
  // =============================
  TOKEN_EOF,        // End of file
  TOKEN_ERROR,      // Error
  TOKEN_UNKNOWN,    // Unknown token
  TOKEN_NEWLINE,    // Newline
  TOKEN_WHITESPACE, // Whitespace

  // =============================
  // DELIMITERS AND SEPARATORS
  // =============================
  TOKEN_COMMA,      // ,
  TOKEN_COLON,      // :
  TOKEN_SEMICOLON,  // ;
  TOKEN_LPAREN,     // (
  TOKEN_RPAREN,     // )
  TOKEN_LBRACE,     // {
  TOKEN_RBRACE,     // }

  // =============================
  // LITERALS AND IDENTIFIERS
  // =============================
  TOKEN_INT_LITERAL,   // Integer literal
  TOKEN_FLOAT_LITERAL, // Floating point literal
  TOKEN_IDENTIFIER,    // Identifier
  TOKEN_REGISTER,      // Register (, , etc.)

  // =============================
  // OPERATORS
  // =============================
  TOKEN_PLUS,      // +
  TOKEN_MINUS,     // -
  TOKEN_STAR,      // *
  TOKEN_SLASH,     // /
  TOKEN_PERCENT,   // %
  TOKEN_EQUAL,     // =

  // =============================
  // PREPROCESSOR AND DIRECTIVES
  // =============================
  TOKEN_DIRECTIVE, // .data, .text, etc.
  TOKEN_MACRO      // macro
} TokenType;

#endif // TOKEN_TYPE_H
