/* we do not compile this file, as the real icuuc49.dll is likely
 * to be required. a crash in QtCore is possible at
 * TextCodec15codecForUtfTextERK10QByteArray(), which hints about unicode
 * conversation dependencies.
 * 
 * so, NOPs are not acceptible here if QtCore was built with ICU.
 * on the other hand rolling your own methods is still possible, but pehaps
 * too much of task for a 1mb DLL replacement. */

#include "dummy_icu.h"

DECLARE_NOP(u_errorName_49)
DECLARE_NOP(u_strToLower_49)
DECLARE_NOP(u_strToUpper_49)
DECLARE_NOP(ucnv_open_49)
DECLARE_NOP(ucnv_close_49)
DECLARE_NOP(ucnv_compareNames_49)
DECLARE_NOP(ucnv_countAliases_49)
DECLARE_NOP(ucnv_countAvailable_49)
DECLARE_NOP(ucnv_fromUnicode_49)
DECLARE_NOP(ucnv_toUnicode_49)
DECLARE_NOP(ucnv_getAlias_49)
DECLARE_NOP(ucnv_getAvailableName_49)
DECLARE_NOP(ucnv_getDefaultName_49)
DECLARE_NOP(ucnv_getMaxCharSize_49)
DECLARE_NOP(ucnv_getStandardName_49)
DECLARE_NOP(ucnv_setSubstChars_49)
DECLARE_NOP(ures_open_49)
DECLARE_NOP(ures_close_49)
DECLARE_NOP(ures_getStringByKey_49)
