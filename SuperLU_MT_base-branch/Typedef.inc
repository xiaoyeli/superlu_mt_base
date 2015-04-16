@beginskip
	<Typedef.inc>

	This file defines macros that will be used in the extraction 
	of the basefile.
@endskip
@precision SINGLE
	@define version @Single Precision Version@
	@define mod_type @float@
	@define MOD_TYPE @FLOAT@
	@define mod_pre	 @s@
	@define MOD_PRE	 @S@
	@define type @float@
	@define TYPE @FLOAT@
	@define pre @s@
	@define PRE @S@
	@define SC_PRE @S@
	@define Dtype_PRE @SLU_S@
	@define scan_fmt @%f@

@precision DOUBLE
	@define version @Double Precision Version@
	@define mod_type @double@
	@define MOD_TYPE @DOUBLE@
	@define mod_pre	 @d@
	@define MOD_PRE	 @D@
	@define type @double@
	@define TYPE @DOUBLE@
	@define pre @d@
	@define PRE @D@
	@define SC_PRE @S@
	@define Dtype_PRE @SLU_D@
	@define scan_fmt @%lf@

@precision SCOMPLEX
	@define version @Single Complex Version@
	@define mod_type @float@
	@define MOD_TYPE @FLOAT@
	@define mod_pre	 @s@
	@define MOD_PRE	 @S@
	@define type @complex@
	@define TYPE @COMPLEX@
	@define pre @c@
	@define PRE @C@
	@define SC_PRE @C@
	@define Dtype_PRE @SLU_C@
	@define scan_fmt @%f%f@

@precision DCOMPLEX
	@define version @Double Complex Version@
	@define mod_type @double@
	@define MOD_TYPE @DOUBLE@
	@define mod_pre	 @d@
	@define MOD_PRE	 @D@
	@define type @doublecomplex@
	@define TYPE @DOUBLE COMPLEX@
	@define pre @z@
	@define PRE @Z@
	@define SC_PRE @C@
	@define Dtype_PRE @SLU_Z@
	@define scan_fmt @%lf%lf@

