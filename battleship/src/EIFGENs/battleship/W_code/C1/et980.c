/*
 * Code for class ETF_SHIP
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F980_8460(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F980_8461(EIF_REFERENCE);
extern EIF_TYPED_VALUE F980_8462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F980_8463(EIF_REFERENCE);
extern EIF_TYPED_VALUE F980_8464(EIF_REFERENCE);
extern void EIF_Minit980(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ETF_SHIP}.make */
void F980_8460 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i4
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_i4
#define arg4 arg4x.it_b
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_b = * (EIF_BOOLEAN *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU(SK_BOOL,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 979, Current, 0, 4, 14744);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(979, Current, 14744);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6249, 0x10000000, 1); /* size */
	*(EIF_INTEGER_32 *)(Current + RTWA(6249, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6250, 0x10000000, 1); /* row */
	*(EIF_INTEGER_32 *)(Current + RTWA(6250, dtype)) = (EIF_INTEGER_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6251, 0x10000000, 1); /* col */
	*(EIF_INTEGER_32 *)(Current + RTWA(6251, dtype)) = (EIF_INTEGER_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6252, 0x04000000, 1); /* dir */
	*(EIF_BOOLEAN *)(Current + RTWA(6252, dtype)) = (EIF_BOOLEAN) arg4;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {ETF_SHIP}.size */
EIF_TYPED_VALUE F980_8461 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6249,Dtype(Current)));
	return r;
}


/* {ETF_SHIP}.row */
EIF_TYPED_VALUE F980_8462 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6250,Dtype(Current)));
	return r;
}


/* {ETF_SHIP}.col */
EIF_TYPED_VALUE F980_8463 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(6251,Dtype(Current)));
	return r;
}


/* {ETF_SHIP}.dir */
EIF_TYPED_VALUE F980_8464 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(6252,Dtype(Current)));
	return r;
}


void EIF_Minit980 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
