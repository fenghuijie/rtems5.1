/*  Init
 *
 *  This routine is the initialization task for this test program.
 *  It is called from init_exec and has the responsibility for creating
 *  and starting the tasks that make up the test.  If the time of day
 *  clock is required for the test, it should also be set to a known
 *  value by this function.
 *
 *  Input parameters:  NONE
 *
 *  Output parameters:  NONE
 *
 *  COPYRIGHT (c) 1989-1999.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h>
#include <stdlib.h>

extern void domathf(void);

#if __rtems__
#include <tmacros.h>

const char rtems_test_name[] = "MATHF";

/* NOTICE: the clock driver is explicitly disabled */
#define CONFIGURE_APPLICATION_DOES_NOT_NEED_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_SIMPLE_CONSOLE_DRIVER

#define CONFIGURE_MAXIMUM_TASKS           1
#define CONFIGURE_INIT_TASK_ATTRIBUTES    RTEMS_FLOATING_POINT

#define CONFIGURE_INITIAL_EXTENSIONS RTEMS_TEST_INITIAL_EXTENSION

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE

#define CONFIGURE_INIT_TASK_ATTRIBUTES RTEMS_FLOATING_POINT

#define CONFIGURE_INIT
#include <rtems/confdefs.h>

rtems_task Init(
  rtems_task_argument ignored
)
#else
int main( void )
#endif
{
#if __rtems__
  rtems_print_printer_fprintf_putc(&rtems_test_printer);
  TEST_BEGIN();
#endif

  domathf();

#if __rtems__
  TEST_END();
#endif
  exit( 0 );
}
