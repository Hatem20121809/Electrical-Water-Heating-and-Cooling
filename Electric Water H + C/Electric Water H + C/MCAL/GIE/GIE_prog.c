
#include "../../LIBRARY/errorState.h"
#include "../../LIBRARY/stdTypes.h"

#include "GIE_int.h"


ES_t GIE_enuInit(void)
{
	asm("SEI");
	return ES_OK;
}

ES_t GIE_enuEnable(void)
{
	asm("SEI");
	return ES_OK;
}

ES_t GIE_enuDisable(void)
{
	asm("CLI");
	return ES_OK;
}
