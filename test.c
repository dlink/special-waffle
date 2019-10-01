#include <stdio.h>

#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

#define LINE_LENGTH 80

/* Read Input file one char at a time - Output to STDOUT one char at a time */
void read_file_bychar(void) {
  FILE *fp;
  char ch;
  
  fp = fopen(INPUT_FILE, "r");
  while((ch = getc(fp)) != EOF) {
    putchar(ch);
  }
  fclose(fp);
}

/* Read Input file one char at a time - to Output file one char at at time */
void read_write_file_bychar(void) {
  FILE *fp, *fp2;
  char ch;
  
  fp = fopen(INPUT_FILE, "r");
  fp2 = fopen(OUTPUT_FILE, "w");
  while((ch = getc(fp)) != EOF) {
    putc(ch, fp2);
  }
  fclose(fp);
  fclose(fp2);
    
}

/* Read Input file one line at a time - output to STDOUT one line at a time */

void read_file_byline(void) {
  FILE *fp;
  char line[LINE_LENGTH+1];

  fp = fopen(INPUT_FILE, "r");
  while(fgets(line, LINE_LENGTH, fp) != NULL) {
    fputs(line, stdout);
  }
  fclose(fp);
}

/* Read Input file one line at a time - to Output file one line at a time */

void read_write_file_byline(void) {
  FILE *fp, *fp2;
  char line[LINE_LENGTH+1];

  fp = fopen(INPUT_FILE, "r");
  fp2 = fopen(OUTPUT_FILE, "w");
  while(fgets(line, LINE_LENGTH, fp) != NULL) {
    fputs(line, fp2);
  }
  fclose(fp);
  fclose(fp2);
}

void main() {
  /* read_file_bychar(); */
  /* read_write_file_bychar(); */
  /* read_file_byline(); */
  read_write_file_byline();
}
