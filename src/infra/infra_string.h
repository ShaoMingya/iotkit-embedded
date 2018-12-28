#ifndef _INFRA_STRING_H_
#define _INFRA_STRING_H_

#include "infra_types.h"

int8_t infra_hex2char(uint8_t hex);
void infra_hex2str(uint8_t *input, uint16_t input_len, char *output);
int infra_randstr(char *random, int length);

#endif

