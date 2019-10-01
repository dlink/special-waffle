/* Test the use of set path functionality */

#include "setpath_defs.h"

int main(void) {

  printf("This is test2\n");

  // setup infile, outfile, detail_file
  setpath();

  // display infile
  printf("infile: %s\n", in_path);
  
  #include "turbine_setpath_fn.h"
}
