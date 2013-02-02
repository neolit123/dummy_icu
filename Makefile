# NOTES:
# - set ICU_VER to the target version e.g. 49
# - see icuuc.c for info on why icuucXX.dll isn't compiled
# - expect only icuinXX.dll and icudtXX.dll in ./bin/

ICU_VER = 49
CC = gcc
LINK = gcc
CFLAGS = -DICU_VER=$(ICU_VER) -Os
LDFLAGS = -shared -s
HEADER = dummy_icu.h 
OUT = bin
OBJ_EXT = o
OBJ = icuin.$(OBJ_EXT) icudt.$(OBJ_EXT) \
#	icuuc.$(OBJ_EXT)

DLL = $(OUT)/icuin$(ICU_VER).dll $(OUT)/icudt$(ICU_VER).dll \
#	$(OUT)/icuuc$(ICU_VER).dll

ALL: $(DLL)

$(OUT)/icuin$(ICU_VER).dll: icuin.o Makefile
	$(CC) icuin.o -o $(OUT)/icuin$(ICU_VER).dll $(LDFLAGS)

$(OUT)/icudt$(ICU_VER).dll: icudt.o Makefile
	$(CC) icudt.o -o $(OUT)/icudt$(ICU_VER).dll $(LDFLAGS)

# $(OUT)/icuuc$(ICU_VER).dll: icuuc.o Makefile
#	$(CC) icuuc.o -o $(OUT)/icuuc$(ICU_VER).dll $(LDFLAGS)

icuin.$(OBJ_EXT): icuin.c $(HEADER) Makefile
	$(CC) icuin.c -c -o icuin.$(OBJ_EXT) $(CFLAGS)

icudt.$(OBJ_EXT): icudt.c $(HEADER) Makefile
	$(CC) icudt.c -c -o icudt.$(OBJ_EXT) $(CFLAGS)

# icuuc.$(OBJ_EXT): icuuc.c $(HEADER) Makefile
#	$(CC) icuuc.c -c -o icuuc.$(OBJ_EXT) $(CFLAGS)

CLEAN:
	rm $(OUT)/*.dll $(OBJ)
