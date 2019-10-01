#include <stdio.h>
#include <unistd.h>

/* Stub out timer functions when on Mac OS */
#ifdef __APPLE_CC__
   void start_timing(void) {}
   void stop_timing(void) {}
   double get_wall_clock_diff(void) { return (double)0; }
   double get_nanodiff(void) { return (double)0; }
#else
   #include "time_functions_19.h"
#endif

int main(void) {
  double n;
  printf("test\n");

  #ifdef __APPLE_CC__
  printf("Mac osx\n");
  #endif
  
  // test timer
  start_timing();

  // Do work here 
  sleep(1);

  // Stop timer
  stop_timing();

  // Report
  n = get_wall_clock_diff();
  printf("wall_clock: %f\n", n);
  n = get_nanodiff();
  printf("nanodiff: %f\n", n);
}
