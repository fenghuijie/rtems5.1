/**
 * @file
 *
 * @ingroup RTEMSScoreTOD
 *
 * @brief Convert Ticks To Seconds
 */

/*  COPYRIGHT (c) 1989-2014.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */


#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/score/todimpl.h>
#include <rtems/config.h>

uint32_t TOD_TICKS_PER_SECOND_method(void)
{
  return (TOD_MICROSECONDS_PER_SECOND /
      rtems_configuration_get_microseconds_per_tick());
}
