#include "stdio.h"

struct Logger
{
  enum { ok, warn, danger } loglevel;
};

void Log(struct Logger logger, const char* string)
{
  const char* logprefix = "OK";
  
  if (logger.loglevel == 0) {;} else if (logger.loglevel == 1) {logprefix == "WARN";} else if (logger.loglevel == 2) {logprefix = "DANGER";} else {logprefix = "UNKNOWN";}
  
  printf("%s: %s\n", logprefix, string);
}

int main(void)
{
  struct Logger logger;
  logger.loglevel = 4;
  Log(logger, "gay rights");

  return 0;
}
