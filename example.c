#include<goto.h>

int do_something_with_files()
{
  GOTO_block_start;
    FILE *file = read_file();
    if(!file) GOTO(1);

    char *buffer = alloc_mem();
    if(!buffer) GOTO(1);

    read_file_into_buffer(file, buffer);
    GOTO(0); // goto the end of the block

    LABEL(1): return -1;
  GOTO_block_end;

  return 0;
}

int main(void)
{
  return do_something_with_files();
}