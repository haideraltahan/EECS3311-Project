/*
 * Class TIME_MEASUREMENT
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_970 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_1_970 [] = {0xFF01,245,969,0xFFFF};
static const EIF_TYPE_INDEX egt_2_970 [] = {0xFF01,969,0xFFFF};
static const EIF_TYPE_INDEX egt_3_970 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_970 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_970 [] = {0xFF01,969,0xFFFF};
static const EIF_TYPE_INDEX egt_6_970 [] = {0xFF01,969,0xFFFF};
static const EIF_TYPE_INDEX egt_7_970 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_970 [] = {0xFF01,16,0xFFFF};
static const EIF_TYPE_INDEX egt_9_970 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_10_970 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_11_970 [] = {0xFF01,17,0xFFFF};
static const EIF_TYPE_INDEX egt_12_970 [] = {0xFF01,969,0xFFFF};
static const EIF_TYPE_INDEX egt_13_970 [] = {0xFF01,964,0xFFFF};
static const EIF_TYPE_INDEX egt_14_970 [] = {0xFF01,232,0xFFFF};
static const EIF_TYPE_INDEX egt_15_970 [] = {0xFF01,232,0xFFFF};


static const struct desc_info desc_970[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_970), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_970), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0197 /*203*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_970), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_970), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_970), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_970), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_970), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_970), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_970), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_970), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_970), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_970), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x0793 /*969*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C7 /*227*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_970), 30, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13561, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13562, 0xFFFFFFFF},
	{EIF_GENERIC(egt_13_970), 13563, 0xFFFFFFFF},
	{EIF_GENERIC(egt_14_970), 13564, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13565, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13566, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13567, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13568, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 13569, 0xFFFFFFFF},
	{EIF_GENERIC(egt_15_970), 13570, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01B5 /*218*/), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x019D /*206*/), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
};
void Init970(void)
{
	IDSC(desc_970, 0, 969);
	IDSC(desc_970 + 1, 1, 969);
	IDSC(desc_970 + 32, 384, 969);
	IDSC(desc_970 + 36, 382, 969);
	IDSC(desc_970 + 42, 380, 969);
}


#ifdef __cplusplus
}
#endif
