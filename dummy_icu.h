/* we are a bit lazy to maintain the declarations in GAS syntax, so instead
 * we write them in plain C. */  

#define DECLARE_NOP(x) \
	void x(void) {}
