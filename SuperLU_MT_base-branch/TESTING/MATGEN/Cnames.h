#ifndef __SUPERLU_CNAMES /* allow multiple inclusions */
#define __SUPERLU_CNAMES

/*
 * These macros define how C routines will be called.  ADD_ assumes that
 * they will be called by fortran, which expects C routines to have an
 * underscore postfixed to the name (Suns, and the Intel expect this).
 * NOCHANGE indicates that fortran will be calling, and that it expects
 * the name called by fortran to be identical to that compiled by the C
 * (RS6K's do this).  UPCASE says it expects C routines called by fortran
 * to be in all upcase (CRAY wants this). 
 */

#define ADD_       0
#define NOCHANGE   1
#define UPCASE     2
#define C_CALL     3

#ifdef UpCase
#define F77_CALL_C UPCASE
#endif

#ifdef NoChange
#define F77_CALL_C NOCHANGE
#endif

#ifdef Add_
#define F77_CALL_C ADD_
#endif

#ifndef F77_CALL_C
#define F77_CALL_C ADD_
#endif

#if (F77_CALL_C == ADD_)
/*
 * These defines set up the naming scheme required to have a fortran 77
 * routine call a C routine
 * No redefinition necessary to have following Fortran to C interface:
 *           FORTRAN CALL               C DECLARATION
 *           call dgemm(...)           void dgemm_(...)
 *
 * This is the default.
 */

#endif

#if (F77_CALL_C == UPCASE)
/*
 * These defines set up the naming scheme required to have a fortran 77
 * routine call a C routine 
 * following Fortran to C interface:
 *           FORTRAN CALL               C DECLARATION
 *           call dgemm(...)           void DGEMM(...)
 */
#define sasum_    SASUM
#define isamax_   ISAMAX
#define scopy_    SCOPY
#define sscal_    SSCAL
#define sger_     SGER
#define snrm2_    SNRM2
#define ssymv_    SSYMV
#define sdot_     SDOT
#define saxpy_    SAXPY
#define ssyr2_    SSYR2
#define srot_     SROT
#define sgemv_    SGEMV
#define strsv_    STRSV
#define sgemm_    SGEMM
#define strsm_    STRSM

#define dasum_    SASUM
#define idamax_   ISAMAX
#define dcopy_    SCOPY
#define dscal_    SSCAL
#define dger_     SGER
#define dnrm2_    SNRM2
#define dsymv_    SSYMV
#define ddot_     SDOT
#define daxpy_    SAXPY
#define dsyr2_    SSYR2
#define drot_     SROT
#define dgemv_    SGEMV
#define dtrsv_    STRSV
#define dgemm_    SGEMM
#define dtrsm_    STRSM

#define scasum_   SCASUM
#define icamax_   ICAMAX
#define ccopy_    CCOPY
#define cscal_    CSCAL
#define scnrm2_   SCNRM2
#define caxpy_    CAXPY
#define cgemv_    CGEMV
#define ctrsv_    CTRSV
#define cgemm_    CGEMM
#define ctrsm_    CTRSM
#define cgerc_    CGERC
#define chemv_    CHEMV
#define cher2_    CHER2

#define dzasum_   DZASUM
#define izamax_   IZAMAX
#define zcopy_    ZCOPY
#define zscal_    ZSCAL
#define dznrm2_   DZNRM2
#define zaxpy_    ZAXPY
#define zgemv_    ZGEMV
#define ztrsv_    ZTRSV
#define zgemm_    ZGEMM
#define ztrsm_    ZTRSM
#define zgerc_    ZGERC
#define zhemv_    ZHEMV
#define zher2_    ZHER2

#define c_bridge_dgssv_ C_BRIDGE_DGSSV
#endif

#if (F77_CALL_C == NOCHANGE)
/*
 * These defines set up the naming scheme required to have a fortran 77
 * routine call a C routine 
 * for following Fortran to C interface:
 *           FORTRAN CALL               C DECLARATION
 *           call dgemm(...)           void dgemm(...)
 */

#define sasum_    sasum
#define isamax_   isamax
#define scopy_    scopy
#define sscal_    sscal
#define sger_     sger
#define snrm2_    snrm2
#define ssymv_    ssymv
#define sdot_     sdot
#define saxpy_    saxpy
#define ssyr2_    ssyr2
#define srot_     srot
#define sgemv_    sgemv
#define strsv_    strsv
#define sgemm_    sgemm
#define strsm_    strsm

#define dasum_    dasum
#define idamax_   idamax
#define dcopy_    dcopy
#define dscal_    dscal
#define dger_     dger
#define dnrm2_    dnrm2
#define dsymv_    dsymv
#define ddot_     ddot
#define daxpy_    daxpy
#define dsyr2_    dsyr2
#define drot_     drot
#define dgemv_    dgemv
#define dtrsv_    dtrsv
#define dgemm_    dgemm
#define dtrsm_    dtrsm

#define scasum_   scasum
#define icamax_   icamax
#define ccopy_    ccopy
#define cscal_    cscal
#define scnrm2_   scnrm2
#define caxpy_    caxpy
#define cgemv_    cgemv
#define ctrsv_    ctrsv
#define cgemm_    cgemm
#define ctrsm_    ctrsm
#define cgerc_    cgerc
#define chemv_    chemv
#define cher2_    cher2

#define dzasum_   dzasum
#define izamax_   izamax
#define zcopy_    zcopy
#define zscal_    zscal
#define dznrm2_   dznrm2
#define zaxpy_    zaxpy
#define zgemv_    zgemv
#define ztrsv_    ztrsv
#define zgemm_    zgemm
#define ztrsm_    ztrsm
#define zgerc_    zgerc
#define zhemv_    zhemv
#define zher2_    zher2

#define c_bridge_dgssv_ c_bridge_dgssv
#endif

#endif /* __SUPERLU_CNAMES */
