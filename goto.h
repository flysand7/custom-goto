#ifndef GOTO_h
#define GOTO_h

// The  `do`  loop  executes exactly once if
//   no jump is performed
// When  `continue`  is executed the jump is
//   performed  to the condition of the loop
//   if the condition (GOTO__nl) is non-zero
//   then  switch  is  executed and the jump
//   to the corresponding label is executed.
// DO NOT define label zero. Start from one.
//   GOTO(0)  is used to jump to the end of
//   the block.

#define GOTO_block_start \
  int GOTO__nl = 0; \
  do { \
    switch(GOTO__nl) { \
      case 0:

#define GOTO_block_end \
      GOTO_nl = 0; \
      continue; \
    } \
  } while(GOTO__nl)

#define GOTO(nl)  GOTO__nl = nl; continue
#define LABEL(nl) case cl

#endif