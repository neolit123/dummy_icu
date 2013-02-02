/* we are a bit lazy to maintain the declarations in GAS syntax, so instead
 * we write them in plain C. */  

#ifndef ICU_VER
	#define ICU_VER 49
#endif

#define DECLARE_NOP(x) \
	void x(void) {}

#define DECLARE_NOP_SUFFIX_PASTE(a, b) \
	void a##_##b(void) {}
#define DECLARE_NOP_SUFFIX(a, b) \
	DECLARE_NOP_SUFFIX_PASTE(a, b)
#define DECLARE_NOP_SUFFIX_VER(a) \
	DECLARE_NOP_SUFFIX(a, ICU_VER)

#define DECLARE_NOP_CONCAT_PASTE(a, b, c) \
	void a##b##c(void) {}
#define DECLARE_NOP_CONCAT(a, b, c) \
	DECLARE_NOP_CONCAT_PASTE(a, b, c)
