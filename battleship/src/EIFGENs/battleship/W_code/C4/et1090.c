/*
 * Code for class ETF_TYPE_CONSTRAINTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1090_9428(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9429(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9430(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9431(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9432(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9433(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9434(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9435(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1090_9436(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9437(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9438(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9439(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9440(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9441(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9442(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9443(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9444(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9445(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9446(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9447(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9448(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9449(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9450(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9451(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9452(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9453(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9454(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9455(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1090_9456(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit1090(void);

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

/* {ETF_TYPE_CONSTRAINTS}.is_column */
EIF_TYPED_VALUE F1090_9428 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_column";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15682);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15682);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: COLUMN = 1 .. 12\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: COLUMN = 1 .. 12",23,1501283890);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 12)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_row */
EIF_TYPED_VALUE F1090_9429 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_row";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	EIF_BOOLEAN tb7;
	EIF_BOOLEAN tb8;
	EIF_BOOLEAN tb9;
	EIF_BOOLEAN tb10;
	EIF_BOOLEAN tb11;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15683);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15683);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}",49,1284506237);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = '\01';
	tb7 = '\01';
	tb8 = '\01';
	tb9 = '\01';
	tb10 = '\01';
	tb11 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7160, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7161, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb11 = (arg1 == ti8_1);
	}
	if (!tb11) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7162, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb10 = (arg1 == ti8_1);
	}
	if (!tb10) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7163, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb9 = (arg1 == ti8_1);
	}
	if (!tb9) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7164, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb8 = (arg1 == ti8_1);
	}
	if (!tb8) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7165, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb7 = (arg1 == ti8_1);
	}
	if (!tb7) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7166, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb6 = (arg1 == ti8_1);
	}
	if (!tb6) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7167, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb5 = (arg1 == ti8_1);
	}
	if (!tb5) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7168, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb4 = (arg1 == ti8_1);
	}
	if (!tb4) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7169, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb3 = (arg1 == ti8_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7170, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb2 = (arg1 == ti8_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7171, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (( etf_v ~ A ) or else ( etf_v ~ B ) or else ( etf_v ~ C ) or else ( etf_v ~ D ) or else ( etf_v ~ E ) or else ( etf_v ~ F ) or else ( etf_v ~ G ) or else ( etf_v ~ H ) or else ( etf_v ~ I ) or else ( etf_v ~ J ) or else ( etf_v ~ K ) or else ( etf_v ~ L ))", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		tb4 = '\01';
		tb5 = '\01';
		tb6 = '\01';
		tb7 = '\01';
		tb8 = '\01';
		tb9 = '\01';
		tb10 = '\01';
		tb11 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7160, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7161, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb11 = (arg1 == ti8_1);
		}
		if (!tb11) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7162, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb10 = (arg1 == ti8_1);
		}
		if (!tb10) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7163, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb9 = (arg1 == ti8_1);
		}
		if (!tb9) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7164, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb8 = (arg1 == ti8_1);
		}
		if (!tb8) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7165, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb7 = (arg1 == ti8_1);
		}
		if (!tb7) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7166, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb6 = (arg1 == ti8_1);
		}
		if (!tb6) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7167, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb5 = (arg1 == ti8_1);
		}
		if (!tb5) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7168, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb4 = (arg1 == ti8_1);
		}
		if (!tb4) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7169, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb3 = (arg1 == ti8_1);
		}
		if (!tb3) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7170, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb2 = (arg1 == ti8_1);
		}
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7171, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_coordinate */
EIF_TYPED_VALUE F1090_9430 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_coordinate";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15684);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15684);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,186,197,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg1, 1089, l_feature_name, 1, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12]\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: COORDINATE = TUPLE[row: ROW = {A, B, C, D, E, F, G, H, I, J, K, L}; column: COLUMN = 1 .. 12]",100,1156708189);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	ti8_1 = eif_integer_64_item(RTCW(arg1),1);
	ui8_1 = ti8_1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7153, dtype))(Current, ui8_1x)).it_b);
	if (tb2) {
		ti8_1 = eif_integer_64_item(RTCW(arg1),2);
		ui8_1 = ti8_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ui8_1x)).it_b);
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = is_row(etf_v.row) and then is_column(etf_v.column)", EX_POST);
		tb1 = '\0';
		ti8_1 = eif_integer_64_item(RTCW(arg1),1);
		ui8_1 = ti8_1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7153, dtype))(Current, ui8_1x)).it_b);
		if ((EIF_BOOLEAN)(Result == tb2)) {
			ti8_1 = eif_integer_64_item(RTCW(arg1),2);
			ui8_1 = ti8_1;
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7152, dtype))(Current, ui8_1x)).it_b);
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef ui8_1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_level */
EIF_TYPED_VALUE F1090_9431 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_level";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15685);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15685);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: LEVEL = {easy, medium, hard, advanced}\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: LEVEL = {easy, medium, hard, advanced}",45,916681853);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_i4);
	ti8_1 = (EIF_INTEGER_64) ti4_1;
	if (!((arg1 == ti8_1))) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7173, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb3 = (arg1 == ti8_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7174, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb2 = (arg1 == ti8_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7175, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		tb1 = (arg1 == ti8_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (( etf_v ~ easy ) or else ( etf_v ~ medium ) or else ( etf_v ~ hard ) or else ( etf_v ~ advanced ))", EX_POST);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7172, dtype))(Current)).it_i4);
		ti8_1 = (EIF_INTEGER_64) ti4_1;
		if (!((arg1 == ti8_1))) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7173, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb3 = (arg1 == ti8_1);
		}
		if (!tb3) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7174, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb2 = (arg1 == ti8_1);
		}
		if (!tb2) {
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7175, dtype))(Current)).it_i4);
			ti8_1 = (EIF_INTEGER_64) ti4_1;
			tb1 = (arg1 == ti8_1);
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_grid_size */
EIF_TYPED_VALUE F1090_9432 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_grid_size";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15686);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15686);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: GRID_SIZE = 4 .. 12\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: GRID_SIZE = 4 .. 12",26,2116718642);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (4 <= etf_v) and then (etf_v <= 12)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 4L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_number_of_ships */
EIF_TYPED_VALUE F1090_9433 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_number_of_ships";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15687);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15687);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: NUMBER_OF_SHIPS = 1 .. 7\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: NUMBER_OF_SHIPS = 1 .. 7",31,2122095671);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 7)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_max_shots */
EIF_TYPED_VALUE F1090_9434 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_max_shots";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15688);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15688);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: MAX_SHOTS = 1 .. 144\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: MAX_SHOTS = 1 .. 144",27,138313012);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 144)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.is_number_of_bombs */
EIF_TYPED_VALUE F1090_9435 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_number_of_bombs";
	RTEX;
#define arg1 arg1x.it_i8
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT64,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15689);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1089, Current, 15689);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("comment(\"etf_v: NUMBER_OF_BOMBS = 1 .. 7\")", EX_PRE);
		tr1 = RTMS_EX_H("etf_v: NUMBER_OF_BOMBS = 1 .. 7",31,349283639);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(7180, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1)) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("Result = (1 <= etf_v) and then (etf_v <= 7)", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(Result == ((EIF_BOOLEAN) ((EIF_INTEGER_64) ((EIF_INTEGER_32) 1L) <= arg1))) && ((EIF_BOOLEAN) (arg1 <= (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef ur1
#undef arg1
}

/* {ETF_TYPE_CONSTRAINTS}.a */
EIF_TYPED_VALUE F1090_9436 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.b */
EIF_TYPED_VALUE F1090_9437 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.c */
EIF_TYPED_VALUE F1090_9438 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.d */
EIF_TYPED_VALUE F1090_9439 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.e */
EIF_TYPED_VALUE F1090_9440 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.f */
EIF_TYPED_VALUE F1090_9441 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.g */
EIF_TYPED_VALUE F1090_9442 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.h */
EIF_TYPED_VALUE F1090_9443 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.i */
EIF_TYPED_VALUE F1090_9444 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.j */
EIF_TYPED_VALUE F1090_9445 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.k */
EIF_TYPED_VALUE F1090_9446 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.l */
EIF_TYPED_VALUE F1090_9447 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.easy */
EIF_TYPED_VALUE F1090_9448 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.medium */
EIF_TYPED_VALUE F1090_9449 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.hard */
EIF_TYPED_VALUE F1090_9450 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 15L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.advanced */
EIF_TYPED_VALUE F1090_9451 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 16L);
	return r;
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items */
EIF_TYPED_VALUE F1090_9452 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 0, 15677);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1089, Current, 15677);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000358, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,856,221,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(3);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(4);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(5);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(6);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(7);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(8);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(9);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(10);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(11);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(12);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	tr1 = RTMS_EX_H("K",1,75);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(13);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	tr1 = RTMS_EX_H("L",1,76);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(14);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	tr1 = RTMS_EX_H("easy",4,1700885369);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(15);
	ui4_1 = ((EIF_INTEGER_32) 14L);
	tr1 = RTMS_EX_H("medium",6,1899711341);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(16);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	tr1 = RTMS_EX_H("hard",4,1751216740);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTHOOK(17);
	ui4_1 = ((EIF_INTEGER_32) 16L);
	tr1 = RTMS_EX_H("advanced",8,899231588);
	ur1 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ui4_1x, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.enum_items_inverse */
EIF_TYPED_VALUE F1090_9453 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "enum_items_inverse";
	RTEX;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 0, 15678);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1089, Current, 15678);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800065E, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,1630,0xFF01,232,197,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = RTMS_EX_H("A",1,65);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(3);
	tr1 = RTMS_EX_H("B",1,66);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(4);
	tr1 = RTMS_EX_H("C",1,67);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(5);
	tr1 = RTMS_EX_H("D",1,68);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(6);
	tr1 = RTMS_EX_H("E",1,69);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(7);
	tr1 = RTMS_EX_H("F",1,70);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(8);
	tr1 = RTMS_EX_H("G",1,71);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(9);
	tr1 = RTMS_EX_H("H",1,72);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(10);
	tr1 = RTMS_EX_H("I",1,73);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(11);
	tr1 = RTMS_EX_H("J",1,74);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(12);
	tr1 = RTMS_EX_H("K",1,75);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(13);
	tr1 = RTMS_EX_H("L",1,76);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(14);
	tr1 = RTMS_EX_H("easy",4,1700885369);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(15);
	tr1 = RTMS_EX_H("medium",6,1899711341);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(16);
	tr1 = RTMS_EX_H("hard",4,1751216740);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTHOOK(17);
	tr1 = RTMS_EX_H("advanced",8,899231588);
	ur1 = tr1;
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 16L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ui8_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ui8_1
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_table */
EIF_TYPED_VALUE F1090_9454 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_table";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(29);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,tr12);
	RTLR(20,tr13);
	RTLR(21,tr14);
	RTLR(22,ur4);
	RTLR(23,loc4);
	RTLR(24,loc5);
	RTLR(25,loc6);
	RTLR(26,loc7);
	RTLR(27,loc8);
	RTLR(28,loc9);
	RTLIU(29);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1089, Current, 9, 0, 15679);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1089, Current, 15679);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001D0, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,464,0xFF01,1075,0xFF01,232,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF80001D0, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("level",5,1703087468);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc1))(loc1, ur1x, ur2x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("new_game",8,1289924453);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF80001D0, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("level",5,1703087468);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc2))(loc2, ur1x, ur2x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("debug_test",10,723132276);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(Current, 3, 0xF80001D0, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate",10,1779599461);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc3))(loc3, ur1x, ur2x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(Current, 4, 0xF80001D0, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate1",11,311742769);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(18,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(18,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(18,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,8);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("coordinate2",11,311742770);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc4))(loc4, ur1x, ur2x);
	RTHOOK(19);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("bomb",4,1651469666);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(20);
	RTDBGAL(Current, 5, 0xF80001D0, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(20,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc5))(loc5);
	RTHOOK(22);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("undo",4,1970168943);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(23);
	RTDBGAL(Current, 6, 0xF80001D0, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(23,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc6))(loc6);
	RTHOOK(25);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("redo",4,1919247471);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(26);
	RTDBGAL(Current, 7, 0xF80001D0, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(26,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc7))(loc7);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("GRID_SIZE",9,1678369093);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("dimension",9,642722414);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_SHIPS",15,799322451);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(29,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(29,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("ships",5,1752623731);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(30);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("MAX_SHOTS",9,857008979);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(30,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(30,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("max_shots",9,69849715);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(31);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_BOMBS",15,916890963);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(31,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(31,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("num_bombs",9,1156572531);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc7))(loc7, ur1x, ur2x);
	RTHOOK(32);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("custom_setup",12,365685616);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(33);
	RTDBGAL(Current, 8, 0xF80001D0, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(33,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(34);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc8))(loc8);
	RTHOOK(35);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("GRID_SIZE",9,1678369093);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(35,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(35,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("dimension",9,642722414);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(36);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_SHIPS",15,799322451);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(36,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(36,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("ships",5,1752623731);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(37);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("MAX_SHOTS",9,857008979);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(37,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(37,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("max_shots",9,69849715);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(38);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_BOMBS",15,916890963);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(38,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(38,2);
	ur1 = RTCCL(tr1);
	tr2 = RTMS_EX_H("num_bombs",9,1156572531);
	ur2 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", loc8))(loc8, ur1x, ur2x);
	RTHOOK(39);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("custom_setup_test",17,1479641460);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(40);
	RTDBGAL(Current, 9, 0xF80001D0, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(40,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc9))(loc9);
	RTHOOK(42);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("give_up",7,62701680);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.evt_param_types_list */
EIF_TYPED_VALUE F1090_9455 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "evt_param_types_list";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui8_1x = {{0}, SK_INT64};
#define ui8_1 ui8_1x.it_i8
	EIF_TYPED_VALUE ui8_2x = {{0}, SK_INT64};
#define ui8_2 ui8_2x.it_i8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE tr5 = NULL;
	EIF_REFERENCE tr6 = NULL;
	EIF_REFERENCE tr7 = NULL;
	EIF_REFERENCE tr8 = NULL;
	EIF_REFERENCE tr9 = NULL;
	EIF_REFERENCE tr10 = NULL;
	EIF_REFERENCE tr11 = NULL;
	EIF_REFERENCE tr12 = NULL;
	EIF_REFERENCE tr13 = NULL;
	EIF_REFERENCE tr14 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(29);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,ur1);
	RTLR(6,tr3);
	RTLR(7,tr4);
	RTLR(8,tr5);
	RTLR(9,tr6);
	RTLR(10,ur2);
	RTLR(11,loc2);
	RTLR(12,loc3);
	RTLR(13,tr7);
	RTLR(14,tr8);
	RTLR(15,tr9);
	RTLR(16,tr10);
	RTLR(17,ur3);
	RTLR(18,tr11);
	RTLR(19,tr12);
	RTLR(20,tr13);
	RTLR(21,tr14);
	RTLR(22,ur4);
	RTLR(23,loc4);
	RTLR(24,loc5);
	RTLR(25,loc6);
	RTLR(26,loc7);
	RTLR(27,loc8);
	RTLR(28,loc9);
	RTLIU(29);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	
	RTEAA(l_feature_name, 1089, Current, 9, 0, 15680);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1089, Current, 15680);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001D0, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,464,0xFF01,332,0xFF01,1075,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2969, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", Result))(Result);
	RTHOOK(3);
	RTDBGAL(Current, 1, 0xF800014C, 0, 0); /* loc1 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(3,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc1))(loc1);
	RTHOOK(5);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(5,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(5,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc1))(loc1, ur1x);
	RTHOOK(6);
	ur1 = RTCCL(loc1);
	tr1 = RTMS_EX_H("new_game",8,1289924453);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(7);
	RTDBGAL(Current, 2, 0xF800014C, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(7,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc2))(loc2);
	RTHOOK(9);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("LEVEL",5,1163865420);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 4L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr6 = RTMS_EX_H("easy",4,1700885369);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("medium",6,1899711341);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("hard",4,1751216740);
	*((EIF_REFERENCE *)tr5+2) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr6 = RTMS_EX_H("advanced",8,899231588);
	*((EIF_REFERENCE *)tr5+3) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = tr4;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(9,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(9,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc2))(loc2, ur1x);
	RTHOOK(10);
	ur1 = RTCCL(loc2);
	tr1 = RTMS_EX_H("debug_test",10,723132276);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(11);
	RTDBGAL(Current, 3, 0xF800014C, 0, 0); /* loc3 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(11,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(12);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc3))(loc3);
	RTHOOK(13);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(13,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(13,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(13,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(13,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(13,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(13,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc3))(loc3, ur1x);
	RTHOOK(14);
	ur1 = RTCCL(loc3);
	tr1 = RTMS_EX_H("fire",4,1718186597);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(15);
	RTDBGAL(Current, 4, 0xF800014C, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(15,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(16);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc4))(loc4);
	RTHOOK(17);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(17,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(17,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(17,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(17,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(17,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(17,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc4))(loc4, ur1x);
	RTHOOK(18);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("COORDINATE",10,355500357);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1084, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,981,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr5 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr5) = 2L;
		memset(tr5, 0, RT_SPECIAL_VISIBLE_SIZE(tr5));
	}
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("row",3,7499639);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("ROW",3,5394263);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1083, 0x01).id);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	{
		static EIF_TYPE_INDEX typarr0[] = {344,0xFF01,232,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr13 = RTLNSP2(typres0.id,EO_REF,ui4_1,sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr13) = 12L;
		memset(tr13, 0, RT_SPECIAL_VISIBLE_SIZE(tr13));
	}
	tr14 = RTMS_EX_H("A",1,65);
	*((EIF_REFERENCE *)tr13+0) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("B",1,66);
	*((EIF_REFERENCE *)tr13+1) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("C",1,67);
	*((EIF_REFERENCE *)tr13+2) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("D",1,68);
	*((EIF_REFERENCE *)tr13+3) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("E",1,69);
	*((EIF_REFERENCE *)tr13+4) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("F",1,70);
	*((EIF_REFERENCE *)tr13+5) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("G",1,71);
	*((EIF_REFERENCE *)tr13+6) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("H",1,72);
	*((EIF_REFERENCE *)tr13+7) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("I",1,73);
	*((EIF_REFERENCE *)tr13+8) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("J",1,74);
	*((EIF_REFERENCE *)tr13+9) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("K",1,75);
	*((EIF_REFERENCE *)tr13+10) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr14 = RTMS_EX_H("L",1,76);
	*((EIF_REFERENCE *)tr13+11) = (EIF_REFERENCE) tr14;
	RTAR(tr13,tr14);
	tr12 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr13)))(tr13).it_r;
	ur4 = tr12;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7145, Dtype(tr11)))(tr11, ur4x);
	RTNHOOK(18,1);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,2);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,3);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+0) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr7 = RTLN(eif_new_type(981, 0x01).id);
	tr8 = RTMS_EX_H("column",6,2015129454);
	ur2 = tr8;
	tr9 = RTLN(eif_new_type(1088, 0x01).id);
	tr10 = RTMS_EX_H("COLUMN",6,1412992846);
	ur3 = tr10;
	tr11 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr11)))(tr11, ui8_1x, ui8_2x);
	RTNHOOK(18,4);
	ur4 = RTCCL(tr11);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr9)))(tr9, ur3x, ur4x);
	RTNHOOK(18,5);
	ur3 = RTCCL(tr9);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(6263, Dtype(tr7)))(tr7, ur2x, ur3x);
	RTNHOOK(18,6);
	tr6 = RTCCL(tr7);
	*((EIF_REFERENCE *)tr5+1) = (EIF_REFERENCE) tr6;
	RTAR(tr5,tr6);
	tr4 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2685, Dtype(tr5)))(tr5).it_r;
	ur2 = RTCCL(tr4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7147, Dtype(tr3)))(tr3, ur2x);
	RTNHOOK(18,7);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(18,8);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc4))(loc4, ur1x);
	RTHOOK(19);
	ur1 = RTCCL(loc4);
	tr1 = RTMS_EX_H("bomb",4,1651469666);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(20);
	RTDBGAL(Current, 5, 0xF800014C, 0, 0); /* loc5 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(20,1);
	loc5 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(21);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc5))(loc5);
	RTHOOK(22);
	ur1 = RTCCL(loc5);
	tr1 = RTMS_EX_H("undo",4,1970168943);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(23);
	RTDBGAL(Current, 6, 0xF800014C, 0, 0); /* loc6 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(23,1);
	loc6 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(24);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc6))(loc6);
	RTHOOK(25);
	ur1 = RTCCL(loc6);
	tr1 = RTMS_EX_H("redo",4,1919247471);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(26);
	RTDBGAL(Current, 7, 0xF800014C, 0, 0); /* loc7 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(26,1);
	loc7 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(27);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc7))(loc7);
	RTHOOK(28);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("GRID_SIZE",9,1678369093);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(28,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(28,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc7))(loc7, ur1x);
	RTHOOK(29);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_SHIPS",15,799322451);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(29,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(29,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc7))(loc7, ur1x);
	RTHOOK(30);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("MAX_SHOTS",9,857008979);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(30,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(30,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc7))(loc7, ur1x);
	RTHOOK(31);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_BOMBS",15,916890963);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(31,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(31,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc7))(loc7, ur1x);
	RTHOOK(32);
	ur1 = RTCCL(loc7);
	tr1 = RTMS_EX_H("custom_setup",12,365685616);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(33);
	RTDBGAL(Current, 8, 0xF800014C, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(33,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(34);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc8))(loc8);
	RTHOOK(35);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("GRID_SIZE",9,1678369093);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 4L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(35,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(35,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc8))(loc8, ur1x);
	RTHOOK(36);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_SHIPS",15,799322451);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(36,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(36,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc8))(loc8, ur1x);
	RTHOOK(37);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("MAX_SHOTS",9,857008979);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 144L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(37,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(37,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc8))(loc8, ur1x);
	RTHOOK(38);
	tr1 = RTLN(eif_new_type(1088, 0x01).id);
	tr2 = RTMS_EX_H("NUMBER_OF_BOMBS",15,916890963);
	ur1 = tr2;
	tr3 = RTLN(eif_new_type(1079, 0x01).id);
	ui8_1 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 1L);
	ui8_2 = (EIF_INTEGER_64) ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7142, Dtype(tr3)))(tr3, ui8_1x, ui8_2x);
	RTNHOOK(38,1);
	ur2 = RTCCL(tr3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7149, Dtype(tr1)))(tr1, ur1x, ur2x);
	RTNHOOK(38,2);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2337, "extend", loc8))(loc8, ur1x);
	RTHOOK(39);
	ur1 = RTCCL(loc8);
	tr1 = RTMS_EX_H("custom_setup_test",17,1479641460);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTHOOK(40);
	RTDBGAL(Current, 9, 0xF800014C, 0, 0); /* loc9 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,332,0xFF01,1075,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(2879, Dtype(tr1)))(tr1);
	RTNHOOK(40,1);
	loc9 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(41);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2329, "compare_objects", loc9))(loc9);
	RTHOOK(42);
	ur1 = RTCCL(loc9);
	tr1 = RTMS_EX_H("give_up",7,62701680);
	ur2 = tr1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(3001, "extend", Result))(Result, ur1x, ur2x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(43);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(11);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui8_1
#undef ui8_2
#undef ui4_1
}

/* {ETF_TYPE_CONSTRAINTS}.comment */
EIF_TYPED_VALUE F1090_9456 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "comment";
	RTEX;
#define arg1 arg1x.it_r
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1089, Current, 0, 1, 15681);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(1089, Current, 15681);
	RTCC(arg1, 1089, l_feature_name, 1, eif_new_type(232, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit1090 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
