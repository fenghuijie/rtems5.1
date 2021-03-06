/*
* @file
* @brief pthread_equal() API Conformance Test
*/

/*
* COPYRIGHT (c) 1989-2009.
* On-Line Applications Research Corporation (OAR).
*
* The license and distribution terms for this file may be
* found in the file LICENSE in this distribution or at
* http://www.rtems.org/license/LICENSE.
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <pthread.h>

#ifndef _POSIX_THREADS
#error "rtems is supposed to have pthread_equal"
#endif

int test( void );

int test( void )
{
  pthread_t  id_1 = 0;
  pthread_t  id_2 = 0;
  int        result;

  result = pthread_equal( id_1, id_2 );

  return result;
}
