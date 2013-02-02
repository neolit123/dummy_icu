/* we do not compile this file, as the real icuucXX.dll is likely
 * to be required. a crash in QtCore is possible at
 * TextCodec15codecForUtfTextERK10QByteArray(), which hints about unicode
 * conversation dependencies.
 * 
 * so, NOPs are not acceptable here if QtCore was built with ICU.
 * on the other hand rolling your own methods is still possible, but perhaps
 * too much of task for a 1mb DLL replacement. */

#include "dummy_icu.h"

DECLARE_NOP_SUFFIX_VER(u_errorName)
DECLARE_NOP_SUFFIX_VER(u_strToLower)
DECLARE_NOP_SUFFIX_VER(u_strToUpper)
DECLARE_NOP_SUFFIX_VER(ucnv_open)
DECLARE_NOP_SUFFIX_VER(ucnv_close)
DECLARE_NOP_SUFFIX_VER(ucnv_compareNames)
DECLARE_NOP_SUFFIX_VER(ucnv_countAliases)
DECLARE_NOP_SUFFIX_VER(ucnv_countAvailable)
DECLARE_NOP_SUFFIX_VER(ucnv_fromUnicode)
DECLARE_NOP_SUFFIX_VER(ucnv_toUnicode)
DECLARE_NOP_SUFFIX_VER(ucnv_getAlias)
DECLARE_NOP_SUFFIX_VER(ucnv_getAvailableName)
DECLARE_NOP_SUFFIX_VER(ucnv_getDefaultName)
DECLARE_NOP_SUFFIX_VER(ucnv_getMaxCharSize)
DECLARE_NOP_SUFFIX_VER(ucnv_getStandardName)
DECLARE_NOP_SUFFIX_VER(ucnv_setSubstChars)
DECLARE_NOP_SUFFIX_VER(ures_open)
DECLARE_NOP_SUFFIX_VER(ures_close)
DECLARE_NOP_SUFFIX_VER(ures_getStringByKey)
