#!/bin/sh

i386-pe-windres --preprocessor "i386-pe-pcc -E -P" -O coff -o res.o menu.rc
i386-pe-pcc -c menu.c
i386-pe-pcc -o menu.exe -Wl,--subsystem,windows menu.o res.o
