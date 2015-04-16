SRC = ./SRC
TST = ./TESTING
EXM = ./EXAMPLE
BLS = ./CBLAS
FOR = ./FORTRAN
TGTSRC = ../SuperLU_MT/SRC
TGTTST = ../SuperLU_MT/TESTING
TGTEXM = ../SuperLU_MT/EXAMPLE
TGTBLS = ../SuperLU_MT/CBLAS
TGTFOR = ../SuperLU_MT/FORTRAN

all: single double scomplex dcomplex

single: $(TGTSRC)/psgssv.c \
	$(TGTSRC)/psgssvx.c \
	$(TGTSRC)/psgstrf.c \
	$(TGTSRC)/psgstrf_bmod1D.c \
	$(TGTSRC)/psgstrf_bmod1D_mv2.c \
	$(TGTSRC)/psgstrf_bmod2D.c \
	$(TGTSRC)/psgstrf_bmod2D_mv2.c \
	$(TGTSRC)/psgstrf_column_bmod.c \
	$(TGTSRC)/psgstrf_column_dfs.c \
	$(TGTSRC)/psgstrf_copy_to_ucol.c \
	$(TGTSRC)/psgstrf_factor_snode.c \
	$(TGTSRC)/psgstrf_init.c \
	$(TGTSRC)/psgstrf_panel_bmod.c \
	$(TGTSRC)/psgstrf_panel_dfs.c \
	$(TGTSRC)/psgstrf_pivotL.c \
	$(TGTSRC)/psgstrf_snode_bmod.c \
	$(TGTSRC)/psgstrf_snode_dfs.c \
	$(TGTSRC)/psgstrf_thread.c \
	$(TGTSRC)/psgstrf_thread_finalize.c \
	$(TGTSRC)/psgstrf_thread_init.c \
	$(TGTSRC)/psmemory.c \
	$(TGTSRC)/pssp_defs.h \
	$(TGTSRC)/psutil.c \
	$(TGTSRC)/sgscon.c \
	$(TGTSRC)/sgsequ.c \
	$(TGTSRC)/sgsrfs.c \
	$(TGTSRC)/sgstrs.c \
	$(TGTSRC)/slacon.c \
	$(TGTSRC)/slangs.c \
	$(TGTSRC)/slaqgs.c \
	$(TGTSRC)/smyblas2.c \
	$(TGTSRC)/smatgen.c \
	$(TGTSRC)/spivotgrowth.c \
	$(TGTSRC)/sreadhb.c \
	$(TGTSRC)/sreadrb.c \
	$(TGTSRC)/sreadmt.c \
	$(TGTSRC)/ssp_blas2.c \
	$(TGTSRC)/ssp_blas3.c \
	\
	$(TGTTST)/sp_sconvert.c \
	$(TGTTST)/psgst01.c \
	$(TGTTST)/psgst02.c \
	$(TGTTST)/psgst04.c \
	$(TGTTST)/psgst07.c \
	$(TGTTST)/psdrive.c \
	\
	$(TGTEXM)/pslinsol.c \
	$(TGTEXM)/pslinsolx.c \
	$(TGTEXM)/pslinsolx1.c \
	$(TGTEXM)/psrepeat.c \
	$(TGTEXM)/psspmd.c

$(TGTSRC)/psgssv.c:	$(SRC)/pxgssv.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgssvx.c:	$(SRC)/pxgssvx.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf.c:	$(SRC)/pxgstrf.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_bmod1D.c:	$(SRC)/pxgstrf_bmod1D.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_bmod1D_mv2.c:	$(SRC)/pxgstrf_bmod1D_mv2.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_bmod2D.c:	$(SRC)/pxgstrf_bmod2D.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_bmod2D_mv2.c:	$(SRC)/pxgstrf_bmod2D_mv2.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_column_bmod.c:	$(SRC)/pxgstrf_column_bmod.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_column_dfs.c:	$(SRC)/pxgstrf_column_dfs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_copy_to_ucol.c:	$(SRC)/pxgstrf_copy_to_ucol.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_factor_snode.c:	$(SRC)/pxgstrf_factor_snode.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_init.c:	$(SRC)/pxgstrf_init.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_panel_bmod.c:	$(SRC)/pxgstrf_panel_bmod.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_panel_dfs.c:	$(SRC)/pxgstrf_panel_dfs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_pivotL.c:	$(SRC)/pxgstrf_pivotL.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_snode_bmod.c:	$(SRC)/pxgstrf_snode_bmod.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_snode_dfs.c:	$(SRC)/pxgstrf_snode_dfs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_thread.c:	$(SRC)/pxgstrf_thread.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_thread_finalize.c:	$(SRC)/pxgstrf_thread_finalize.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psgstrf_thread_init.c:	$(SRC)/pxgstrf_thread_init.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psmemory.c:	$(SRC)/pxmemory.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/pssp_defs.h:	$(SRC)/pxsp_defs.h.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/psutil.c:	$(SRC)/pxutil.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sgscon.c:	$(SRC)/xgscon.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sgsequ.c:	$(SRC)/xgsequ.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sgsrfs.c:	$(SRC)/xgsrfs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sgstrs.c:	$(SRC)/xgstrs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/slacon.c:	$(SRC)/xlacon.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/slangs.c:	$(SRC)/xlangs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/slaqgs.c:	$(SRC)/xlaqgs.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/smyblas2.c:	$(SRC)/xmyblas2.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/smatgen.c:   $(SRC)/xmatgen.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/spivotgrowth.c:	$(SRC)/xpivotgrowth.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sreadhb.c:	$(SRC)/xreadhb.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sreadrb.c:	$(SRC)/xreadrb.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/sreadmt.c:	$(SRC)/xreadmt.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/ssp_blas2.c:	$(SRC)/xsp_blas2.base
	extract -b $? -o $@ precision=single

$(TGTSRC)/ssp_blas3.c:	$(SRC)/xsp_blas3.base
	extract -b $? -o $@ precision=single

$(TGTTST)/sp_sconvert.c:   $(TST)/sp_xconvert.base
	extract -b $? -o $@ precision=single

$(TGTTST)/psgst01.c:       $(TST)/pxgst01.base
	extract -b $? -o $@ precision=single

$(TGTTST)/psgst02.c:    $(TST)/pxgst02.base
	extract -b $? -o $@ precision=single

$(TGTTST)/psgst04.c:    $(TST)/pxgst04.base
	extract -b $? -o $@ precision=single

$(TGTTST)/psgst07.c:  $(TST)/pxgst07.base
	extract -b $? -o $@ precision=single

$(TGTTST)/psdrive.c:  $(TST)/pxdrive.base
	extract -b $? -o $@ precision=single

$(TGTEXM)/pslinsol.c:    $(EXM)/pxlinsol.base
	extract -b $? -o $@ precision=single

$(TGTEXM)/pslinsolx.c:    $(EXM)/pxlinsolx.base
	extract -b $? -o $@ precision=single

$(TGTEXM)/pslinsolx1.c:    $(EXM)/pxlinsolx1.base
	extract -b $? -o $@ precision=single

$(TGTEXM)/psrepeat.c:    $(EXM)/pxrepeat.base
	extract -b $? -o $@ precision=single

$(TGTEXM)/psspmd.c:    $(EXM)/pxspmd.base
	extract -b $? -o $@ precision=single

double: $(TGTSRC)/pdgssv.c \
	$(TGTSRC)/pdgssvx.c \
	$(TGTSRC)/pdgstrf.c \
	$(TGTSRC)/pdgstrf_bmod1D.c \
	$(TGTSRC)/pdgstrf_bmod1D_mv2.c \
	$(TGTSRC)/pdgstrf_bmod2D.c \
	$(TGTSRC)/pdgstrf_bmod2D_mv2.c \
	$(TGTSRC)/pdgstrf_column_bmod.c \
	$(TGTSRC)/pdgstrf_column_dfs.c \
	$(TGTSRC)/pdgstrf_copy_to_ucol.c \
	$(TGTSRC)/pdgstrf_factor_snode.c \
	$(TGTSRC)/pdgstrf_init.c \
	$(TGTSRC)/pdgstrf_panel_bmod.c \
	$(TGTSRC)/pdgstrf_panel_dfs.c \
	$(TGTSRC)/pdgstrf_pivotL.c \
	$(TGTSRC)/pdgstrf_snode_bmod.c \
	$(TGTSRC)/pdgstrf_snode_dfs.c \
	$(TGTSRC)/pdgstrf_thread.c \
	$(TGTSRC)/pdgstrf_thread_finalize.c \
	$(TGTSRC)/pdgstrf_thread_init.c \
	$(TGTSRC)/pdmemory.c \
	$(TGTSRC)/pdsp_defs.h \
	$(TGTSRC)/pdutil.c \
	$(TGTSRC)/dgscon.c \
	$(TGTSRC)/dgsequ.c \
	$(TGTSRC)/dgsrfs.c \
	$(TGTSRC)/dgstrs.c \
	$(TGTSRC)/dlacon.c \
	$(TGTSRC)/dlangs.c \
	$(TGTSRC)/dlaqgs.c \
	$(TGTSRC)/dmyblas2.c \
	$(TGTSRC)/dmatgen.c \
	$(TGTSRC)/dpivotgrowth.c \
	$(TGTSRC)/dreadhb.c \
	$(TGTSRC)/dreadrb.c \
	$(TGTSRC)/dreadmt.c \
	$(TGTSRC)/dsp_blas2.c \
	$(TGTSRC)/dsp_blas3.c \
	\
	$(TGTTST)/sp_dconvert.c \
	$(TGTTST)/pdgst01.c \
	$(TGTTST)/pdgst02.c \
	$(TGTTST)/pdgst04.c \
	$(TGTTST)/pdgst07.c \
	$(TGTTST)/pddrive.c \
	\
	$(TGTEXM)/pdlinsol.c \
	$(TGTEXM)/pdlinsolx.c \
	$(TGTEXM)/pdlinsolx1.c \
	$(TGTEXM)/pdrepeat.c \
	$(TGTEXM)/pdspmd.c

$(TGTSRC)/pdgssv.c:	$(SRC)/pxgssv.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgssvx.c:	$(SRC)/pxgssvx.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf.c:	$(SRC)/pxgstrf.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_bmod1D.c:	$(SRC)/pxgstrf_bmod1D.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_bmod1D_mv2.c:	$(SRC)/pxgstrf_bmod1D_mv2.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_bmod2D.c:	$(SRC)/pxgstrf_bmod2D.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_bmod2D_mv2.c:	$(SRC)/pxgstrf_bmod2D_mv2.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_column_bmod.c:	$(SRC)/pxgstrf_column_bmod.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_column_dfs.c:	$(SRC)/pxgstrf_column_dfs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_copy_to_ucol.c:	$(SRC)/pxgstrf_copy_to_ucol.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_factor_snode.c:	$(SRC)/pxgstrf_factor_snode.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_init.c:	$(SRC)/pxgstrf_init.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_panel_bmod.c:	$(SRC)/pxgstrf_panel_bmod.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_panel_dfs.c:	$(SRC)/pxgstrf_panel_dfs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_pivotL.c:	$(SRC)/pxgstrf_pivotL.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_snode_bmod.c:	$(SRC)/pxgstrf_snode_bmod.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_snode_dfs.c:	$(SRC)/pxgstrf_snode_dfs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_thread.c:	$(SRC)/pxgstrf_thread.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_thread_finalize.c:	$(SRC)/pxgstrf_thread_finalize.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdgstrf_thread_init.c:	$(SRC)/pxgstrf_thread_init.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdmemory.c:	$(SRC)/pxmemory.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdsp_defs.h:	$(SRC)/pxsp_defs.h.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/pdutil.c:	$(SRC)/pxutil.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dgscon.c:	$(SRC)/xgscon.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dgsequ.c:	$(SRC)/xgsequ.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dgsrfs.c:	$(SRC)/xgsrfs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dgstrs.c:	$(SRC)/xgstrs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dlacon.c:	$(SRC)/xlacon.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dlangs.c:	$(SRC)/xlangs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dlaqgs.c:	$(SRC)/xlaqgs.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dmyblas2.c:	$(SRC)/xmyblas2.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dmatgen.c:   $(SRC)/xmatgen.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dpivotgrowth.c:	$(SRC)/xpivotgrowth.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dreadhb.c:	$(SRC)/xreadhb.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dreadrb.c:	$(SRC)/xreadrb.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dreadmt.c:	$(SRC)/xreadmt.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dsp_blas2.c:	$(SRC)/xsp_blas2.base
	extract -b $? -o $@ precision=double

$(TGTSRC)/dsp_blas3.c:	$(SRC)/xsp_blas3.base
	extract -b $? -o $@ precision=double

$(TGTTST)/sp_dconvert.c:   $(TST)/sp_xconvert.base
	extract -b $? -o $@ precision=double

$(TGTTST)/pdgst01.c:       $(TST)/pxgst01.base
	extract -b $? -o $@ precision=double

$(TGTTST)/pdgst02.c:    $(TST)/pxgst02.base
	extract -b $? -o $@ precision=double

$(TGTTST)/pdgst04.c:    $(TST)/pxgst04.base
	extract -b $? -o $@ precision=double

$(TGTTST)/pdgst07.c:  $(TST)/pxgst07.base
	extract -b $? -o $@ precision=double

$(TGTTST)/pddrive.c:  $(TST)/pxdrive.base
	extract -b $? -o $@ precision=double

$(TGTEXM)/pdlinsol.c:    $(EXM)/pxlinsol.base
	extract -b $? -o $@ precision=double

$(TGTEXM)/pdlinsolx.c:    $(EXM)/pxlinsolx.base
	extract -b $? -o $@ precision=double

$(TGTEXM)/pdlinsolx1.c:    $(EXM)/pxlinsolx1.base
	extract -b $? -o $@ precision=double

$(TGTEXM)/pdrepeat.c:    $(EXM)/pxrepeat.base
	extract -b $? -o $@ precision=double

$(TGTEXM)/pdspmd.c:    $(EXM)/pxspmd.base
	extract -b $? -o $@ precision=double

scomplex: \
	$(TGTSRC)/pcgssv.c \
	$(TGTSRC)/pcgssvx.c \
	$(TGTSRC)/pcgstrf.c \
	$(TGTSRC)/pcgstrf_bmod1D.c \
	$(TGTSRC)/pcgstrf_bmod1D_mv2.c \
	$(TGTSRC)/pcgstrf_bmod2D.c \
	$(TGTSRC)/pcgstrf_bmod2D_mv2.c \
	$(TGTSRC)/pcgstrf_column_bmod.c \
	$(TGTSRC)/pcgstrf_column_dfs.c \
	$(TGTSRC)/pcgstrf_copy_to_ucol.c \
	$(TGTSRC)/pcgstrf_factor_snode.c \
	$(TGTSRC)/pcgstrf_init.c \
	$(TGTSRC)/pcgstrf_panel_bmod.c \
	$(TGTSRC)/pcgstrf_panel_dfs.c \
	$(TGTSRC)/pcgstrf_pivotL.c \
	$(TGTSRC)/pcgstrf_snode_bmod.c \
	$(TGTSRC)/pcgstrf_snode_dfs.c \
	$(TGTSRC)/pcgstrf_thread.c \
	$(TGTSRC)/pcgstrf_thread_finalize.c \
	$(TGTSRC)/pcgstrf_thread_init.c \
	$(TGTSRC)/pcmemory.c \
	$(TGTSRC)/pcsp_defs.h \
	$(TGTSRC)/pcutil.c \
	$(TGTSRC)/scomplex.c \
	$(TGTSRC)/slu_scomplex.h \
	$(TGTSRC)/cgscon.c \
	$(TGTSRC)/cgsequ.c \
	$(TGTSRC)/cgsrfs.c \
	$(TGTSRC)/cgstrs.c \
	$(TGTSRC)/clacon.c \
	$(TGTSRC)/clangs.c \
	$(TGTSRC)/claqgs.c \
	$(TGTSRC)/cmyblas2.c \
	$(TGTSRC)/cmatgen.c \
	$(TGTSRC)/cpivotgrowth.c \
	$(TGTSRC)/creadhb.c \
	$(TGTSRC)/creadrb.c \
	$(TGTSRC)/creadmt.c \
	$(TGTSRC)/csp_blas2.c \
	$(TGTSRC)/csp_blas3.c \
	\
	$(TGTTST)/sp_cconvert.c \
	$(TGTTST)/pcgst01.c \
	$(TGTTST)/pcgst02.c \
	$(TGTTST)/pcgst04.c \
	$(TGTTST)/pcgst07.c \
	$(TGTTST)/pcdrive.c \
	\
	$(TGTEXM)/pclinsol.c \
	$(TGTEXM)/pclinsolx.c \
	$(TGTEXM)/pclinsolx1.c \
	$(TGTEXM)/pcrepeat.c \
	$(TGTEXM)/pcspmd.c

$(TGTSRC)/pcgssv.c:	$(SRC)/pxgssv.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgssvx.c:	$(SRC)/pxgssvx.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf.c:	$(SRC)/pxgstrf.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_bmod1D.c:	$(SRC)/pxgstrf_bmod1D.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_bmod1D_mv2.c:	$(SRC)/pxgstrf_bmod1D_mv2.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_bmod2D.c:	$(SRC)/pxgstrf_bmod2D.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_bmod2D_mv2.c:	$(SRC)/pxgstrf_bmod2D_mv2.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_column_bmod.c:	$(SRC)/pxgstrf_column_bmod.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_column_dfs.c:	$(SRC)/pxgstrf_column_dfs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_copy_to_ucol.c:	$(SRC)/pxgstrf_copy_to_ucol.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_factor_snode.c:	$(SRC)/pxgstrf_factor_snode.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_init.c:	$(SRC)/pxgstrf_init.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_panel_bmod.c:	$(SRC)/pxgstrf_panel_bmod.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_panel_dfs.c:	$(SRC)/pxgstrf_panel_dfs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_pivotL.c:	$(SRC)/pxgstrf_pivotL.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_snode_bmod.c:	$(SRC)/pxgstrf_snode_bmod.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_snode_dfs.c:	$(SRC)/pxgstrf_snode_dfs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_thread.c:	$(SRC)/pxgstrf_thread.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_thread_finalize.c:	$(SRC)/pxgstrf_thread_finalize.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcgstrf_thread_init.c:	$(SRC)/pxgstrf_thread_init.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcmemory.c:	$(SRC)/pxmemory.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcsp_defs.h:	$(SRC)/pxsp_defs.h.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/pcutil.c:	$(SRC)/pxutil.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/scomplex.c:	$(SRC)/xcomplex.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/slu_scomplex.h:	$(SRC)/slu_xcomplex.h.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cgscon.c:	$(SRC)/xgscon.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cgsequ.c:	$(SRC)/xgsequ.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cgsrfs.c:	$(SRC)/xgsrfs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cgstrs.c:	$(SRC)/xgstrs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/clacon.c:	$(SRC)/xlacon.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/clangs.c:	$(SRC)/xlangs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/claqgs.c:	$(SRC)/xlaqgs.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cmyblas2.c:	$(SRC)/xmyblas2.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cmatgen.c:   $(SRC)/xmatgen.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/cpivotgrowth.c:	$(SRC)/xpivotgrowth.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/creadhb.c:	$(SRC)/xreadhb.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/creadrb.c:	$(SRC)/xreadrb.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/creadmt.c:	$(SRC)/xreadmt.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/csp_blas2.c:	$(SRC)/xsp_blas2.base
	extract -b $? -o $@ precision=scomplex

$(TGTSRC)/csp_blas3.c:	$(SRC)/xsp_blas3.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/sp_cconvert.c:   $(TST)/sp_xconvert.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/pcgst01.c:       $(TST)/pxgst01.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/pcgst02.c:    $(TST)/pxgst02.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/pcgst04.c:    $(TST)/pxgst04.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/pcgst07.c:  $(TST)/pxgst07.base
	extract -b $? -o $@ precision=scomplex

$(TGTTST)/pcdrive.c:  $(TST)/pxdrive.base
	extract -b $? -o $@ precision=scomplex

$(TGTEXM)/pclinsol.c:    $(EXM)/pxlinsol.base
	extract -b $? -o $@ precision=scomplex

$(TGTEXM)/pclinsolx.c:    $(EXM)/pxlinsolx.base
	extract -b $? -o $@ precision=scomplex

$(TGTEXM)/pclinsolx1.c:    $(EXM)/pxlinsolx1.base
	extract -b $? -o $@ precision=scomplex

$(TGTEXM)/pcrepeat.c:    $(EXM)/pxrepeat.base
	extract -b $? -o $@ precision=scomplex

$(TGTEXM)/pcspmd.c:    $(EXM)/pxspmd.base
	extract -b $? -o $@ precision=scomplex

dcomplex: \
	$(TGTSRC)/pzgssv.c \
	$(TGTSRC)/pzgssvx.c \
	$(TGTSRC)/pzgstrf.c \
	$(TGTSRC)/pzgstrf_bmod1D.c \
	$(TGTSRC)/pzgstrf_bmod1D_mv2.c \
	$(TGTSRC)/pzgstrf_bmod2D.c \
	$(TGTSRC)/pzgstrf_bmod2D_mv2.c \
	$(TGTSRC)/pzgstrf_column_bmod.c \
	$(TGTSRC)/pzgstrf_column_dfs.c \
	$(TGTSRC)/pzgstrf_copy_to_ucol.c \
	$(TGTSRC)/pzgstrf_factor_snode.c \
	$(TGTSRC)/pzgstrf_init.c \
	$(TGTSRC)/pzgstrf_panel_bmod.c \
	$(TGTSRC)/pzgstrf_panel_dfs.c \
	$(TGTSRC)/pzgstrf_pivotL.c \
	$(TGTSRC)/pzgstrf_snode_bmod.c \
	$(TGTSRC)/pzgstrf_snode_dfs.c \
	$(TGTSRC)/pzgstrf_thread.c \
	$(TGTSRC)/pzgstrf_thread_finalize.c \
	$(TGTSRC)/pzgstrf_thread_init.c \
	$(TGTSRC)/pzmemory.c \
	$(TGTSRC)/pzsp_defs.h \
	$(TGTSRC)/pzutil.c \
	$(TGTSRC)/dcomplex.c \
	$(TGTSRC)/slu_dcomplex.h \
	$(TGTSRC)/zgscon.c \
	$(TGTSRC)/zgsequ.c \
	$(TGTSRC)/zgsrfs.c \
	$(TGTSRC)/zgstrs.c \
	$(TGTSRC)/zlacon.c \
	$(TGTSRC)/zlangs.c \
	$(TGTSRC)/zlaqgs.c \
	$(TGTSRC)/zmyblas2.c \
	$(TGTSRC)/zmatgen.c \
	$(TGTSRC)/zpivotgrowth.c \
	$(TGTSRC)/zreadhb.c \
	$(TGTSRC)/zreadrb.c \
	$(TGTSRC)/zreadmt.c \
	$(TGTSRC)/zsp_blas2.c \
	$(TGTSRC)/zsp_blas3.c \
	\
	$(TGTTST)/sp_zconvert.c \
	$(TGTTST)/pzgst01.c \
	$(TGTTST)/pzgst02.c \
	$(TGTTST)/pzgst04.c \
	$(TGTTST)/pzgst07.c \
	$(TGTTST)/pzdrive.c \
	\
	$(TGTEXM)/pzlinsol.c \
	$(TGTEXM)/pzlinsolx.c \
	$(TGTEXM)/pzlinsolx1.c \
	$(TGTEXM)/pzrepeat.c \
	$(TGTEXM)/pzspmd.c

$(TGTSRC)/pzgssv.c:	$(SRC)/pxgssv.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgssvx.c:	$(SRC)/pxgssvx.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf.c:	$(SRC)/pxgstrf.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_bmod1D.c:	$(SRC)/pxgstrf_bmod1D.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_bmod1D_mv2.c:	$(SRC)/pxgstrf_bmod1D_mv2.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_bmod2D.c:	$(SRC)/pxgstrf_bmod2D.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_bmod2D_mv2.c:	$(SRC)/pxgstrf_bmod2D_mv2.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_column_bmod.c:	$(SRC)/pxgstrf_column_bmod.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_column_dfs.c:	$(SRC)/pxgstrf_column_dfs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_copy_to_ucol.c:	$(SRC)/pxgstrf_copy_to_ucol.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_factor_snode.c:	$(SRC)/pxgstrf_factor_snode.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_init.c:	$(SRC)/pxgstrf_init.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_panel_bmod.c:	$(SRC)/pxgstrf_panel_bmod.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_panel_dfs.c:	$(SRC)/pxgstrf_panel_dfs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_pivotL.c:	$(SRC)/pxgstrf_pivotL.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_snode_bmod.c:	$(SRC)/pxgstrf_snode_bmod.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_snode_dfs.c:	$(SRC)/pxgstrf_snode_dfs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_thread.c:	$(SRC)/pxgstrf_thread.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_thread_finalize.c:	$(SRC)/pxgstrf_thread_finalize.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzgstrf_thread_init.c:	$(SRC)/pxgstrf_thread_init.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzmemory.c:	$(SRC)/pxmemory.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzsp_defs.h:	$(SRC)/pxsp_defs.h.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/pzutil.c:	$(SRC)/pxutil.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/dcomplex.c:	$(SRC)/xcomplex.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/slu_dcomplex.h:   $(SRC)/slu_xcomplex.h.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zgscon.c:	$(SRC)/xgscon.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zgsequ.c:	$(SRC)/xgsequ.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zgsrfs.c:	$(SRC)/xgsrfs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zgstrs.c:	$(SRC)/xgstrs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zlacon.c:	$(SRC)/xlacon.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zlangs.c:	$(SRC)/xlangs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zlaqgs.c:	$(SRC)/xlaqgs.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zmyblas2.c:	$(SRC)/xmyblas2.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zmatgen.c:   $(SRC)/xmatgen.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zpivotgrowth.c:	$(SRC)/xpivotgrowth.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zreadhb.c:	$(SRC)/xreadhb.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zreadrb.c:	$(SRC)/xreadrb.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zreadmt.c:	$(SRC)/xreadmt.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zsp_blas2.c:	$(SRC)/xsp_blas2.base
	extract -b $? -o $@ precision=dcomplex

$(TGTSRC)/zsp_blas3.c:	$(SRC)/xsp_blas3.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/sp_zconvert.c:   $(TST)/sp_xconvert.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/pzgst01.c:       $(TST)/pxgst01.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/pzgst02.c:    $(TST)/pxgst02.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/pzgst04.c:    $(TST)/pxgst04.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/pzgst07.c:  $(TST)/pxgst07.base
	extract -b $? -o $@ precision=dcomplex

$(TGTTST)/pzdrive.c:  $(TST)/pxdrive.base
	extract -b $? -o $@ precision=dcomplex

$(TGTEXM)/pzlinsol.c:    $(EXM)/pxlinsol.base
	extract -b $? -o $@ precision=dcomplex

$(TGTEXM)/pzlinsolx.c:    $(EXM)/pxlinsolx.base
	extract -b $? -o $@ precision=dcomplex

$(TGTEXM)/pzlinsolx1.c:    $(EXM)/pxlinsolx1.base
	extract -b $? -o $@ precision=dcomplex

$(TGTEXM)/pzrepeat.c:    $(EXM)/pxrepeat.base
	extract -b $? -o $@ precision=dcomplex

$(TGTEXM)/pzspmd.c:    $(EXM)/pxspmd.base
	extract -b $? -o $@ precision=dcomplex
