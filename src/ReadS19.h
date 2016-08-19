#ifndef ReadS19_H
#define ReadS19_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <CException.h>

typedef enum {ERR_FAILED_TO_OPEN} ERR;


void readS19(char *fileName);
void S19Interpret(char *line);


#endif // ReadS19_H