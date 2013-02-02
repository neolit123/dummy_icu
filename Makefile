# NOTES:
# see icuuc49.c for info on why icuuc49.dll isn't compiled
# expect icuin49.dll and icudt49.dll in ./bin/

CC = gcc
LDFLAGS = -shared -s
HEADER = dummy_icu.h 
OUT = bin
DLL = $(OUT)/icuin49.dll $(OUT)/icudt49.dll \
#	$(OUT)/icuuc49.dll
	
ALL: $(DLL)

$(OUT)/icuin49.dll: icuin49.c $(HEADER) Makefile
	$(CC) icuin49.c -o $(OUT)/icuin49.dll $(LDFLAGS)

$(OUT)/icudt49.dll: icudt49.c $(HEADER) Makefile
	$(CC) icudt49.c -o $(OUT)/icudt49.dll $(LDFLAGS)

# $(OUT)/icuuc49.dll: icuuc49.c $(HEADER) Makefile
#	$(CC) icuuc49.c -o $(OUT)/icuuc49.dll $(LDFLAGS)

CLEAN:
	rm $(DLL)
