include $(RTEMS_ROOT)/make/custom/@RTEMS_BSP@.cfg
include $(top_srcdir)/../automake/compile.am

include $(top_srcdir)/ada.am

noinst_PROGRAMS = ada_tm25
ada_tm25_SOURCES = tm25.adb config.h tmtest.adb tmtest.ads
ada_tm25_SOURCES += init.c

ada_tm25$(EXEEXT): tm25.adb init.$(OBJEXT)
	$(GNATCOMPILE) -margs -a $< -o $@

