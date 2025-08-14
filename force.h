#ifndef FORCE_H
#define FORCE_H

#include <stdio.h>

void init(void);

#ifdef FORCE_IMPLEMENTATION

void init(void)
{
  printf("Getting started...\n");
}

#endif // ifdef FORCE_IMPLEMENTATION

#endif // ifndef FORCE_H

// vim:sw=2:ts=2:et:
