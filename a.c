#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <assert.h>
#include <errno.h>
#include "myshell.h"

/*
 * Initializes the shell process, in particular its signal handling,
 * so that when an keyboard interrupt signal (Ctrl-C) is received by
 * the shell, it is instead directed to the process currently running
 * in the foreground.
 */

void initialize_signal_handling(void) {
  
  // if(process is running in the foreground)
  // else {

  // }
}

/*
 * Checks if any background processes have finished, without blocking
 * to wait for them. If any processes finished, prints a message for
 * each finished process containing the PID of the process.
 */
void print_finished_background_processes(void)
{

  /* TO BE COMPLETED BY THE STUDENT */
}

/*
 * Reads a command line from standard input into a line buffer. If a
 * command-line could be read successfully (even if empty), returns a
 * positive value. If the reading process is interrupted by a keyboard
 * interrupt signal (Ctrl-C), returns 0. If a line cannot be read for
 * any other reason, including if an EOF (end-of-file) is detected in
 * standard input, exits the program (using the `exit` system call).
 *
 * The buffer is expected to be at least COMMAND_LINE_MAX_SIZE bytes
 * long. If the command line is longer than supported by this buffer
 * size (including line-feed character and null termination byte),
 * then ignores the full line and returns 0.
 *
 * If the command-line contains a comment character, any text
 * following the comment character is stripped from the command-line.
 *
 * Parameters:
 *  - line: pointer pointing to the start of the line buffer.
 * Returns:
 *  - 1 if a line could be read successfully, even if empty. 0 if the
 *    line could not be read due to a keyboard interrupt or for being
 *    too long.
 */

int read_command_line(char *line)
{
  char string[COMMAND_LINE_MAX_SIZE+2];
  fgets(string,COMMAND_LINE_MAX_SIZE+2,stdin);
  printf("reading string:\n");
  printf("%s\n",string);
  line = string;
  int length = strlen(line);
  printf("Name length: %u\n", length-1);
  printf("%d, %ld\n", length >= COMMAND_LINE_MAX_SIZE+2, strlen(line));

  if (length >= COMMAND_LINE_MAX_SIZE+2) {
    printf("Command line too long.\n");
    return 0;
  }

  return 1;
}

/*
 * Executes the command (or commands) listed in the specified
 * command-line, according to the rules in the assignment
 * description. The line may contain no command at all, or may contain
 * multiple commands separated by operators like '&', ';' or '|'.
 *
 * Parameters:
 *  - line: string corresponding to the command line to be
 *    executed. This is typically the same line parsed by
 *    read_command_line, though for testing purposes you must assume
 *    that this can be any string containing commands in an
 *    appropriate format.
 */
void run_command_line(char *line) {
  
  /* TO BE COMPLETED BY THE STUDENT */
}
