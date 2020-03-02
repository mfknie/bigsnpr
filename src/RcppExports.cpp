// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// r2_bgen
NumericVector r2_bgen(std::string filename, NumericVector offsets, LogicalVector use_ind, NumericVector decode, NumericVector y);
RcppExport SEXP _bigsnpr_r2_bgen(SEXP filenameSEXP, SEXP offsetsSEXP, SEXP use_indSEXP, SEXP decodeSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type use_ind(use_indSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type decode(decodeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(r2_bgen(filename, offsets, use_ind, decode, y));
    return rcpp_result_gen;
END_RCPP
}
// bedXPtr
SEXP bedXPtr(std::string path, int n, int p);
RcppExport SEXP _bigsnpr_bedXPtr(SEXP pathSEXP, SEXP nSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bedXPtr(path, n, p));
    return rcpp_result_gen;
END_RCPP
}
// bed_stats
List bed_stats(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col);
RcppExport SEXP _bigsnpr_bed_stats(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_stats(obj_bed, ind_row, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// bed_corNA
List bed_corNA(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericMatrix& U);
RcppExport SEXP _bigsnpr_bed_corNA(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(bed_corNA(obj_bed, ind_row, ind_col, U));
    return rcpp_result_gen;
END_RCPP
}
// bed_col_counts_cpp
IntegerMatrix bed_col_counts_cpp(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col);
RcppExport SEXP _bigsnpr_bed_col_counts_cpp(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_col_counts_cpp(obj_bed, ind_row, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// bed_row_counts_cpp
IntegerMatrix bed_row_counts_cpp(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col);
RcppExport SEXP _bigsnpr_bed_row_counts_cpp(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_row_counts_cpp(obj_bed, ind_row, ind_col));
    return rcpp_result_gen;
END_RCPP
}
// bed_pMatVec4
NumericVector bed_pMatVec4(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericVector& center, const NumericVector& scale, const NumericVector& x);
RcppExport SEXP _bigsnpr_bed_pMatVec4(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_pMatVec4(obj_bed, ind_row, ind_col, center, scale, x));
    return rcpp_result_gen;
END_RCPP
}
// bed_cpMatVec4
NumericVector bed_cpMatVec4(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericVector& center, const NumericVector& scale, const NumericVector& x);
RcppExport SEXP _bigsnpr_bed_cpMatVec4(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_cpMatVec4(obj_bed, ind_row, ind_col, center, scale, x));
    return rcpp_result_gen;
END_RCPP
}
// read_bed_scaled
NumericMatrix read_bed_scaled(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericVector& center, const NumericVector& scale);
RcppExport SEXP _bigsnpr_read_bed_scaled(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP centerSEXP, SEXP scaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    rcpp_result_gen = Rcpp::wrap(read_bed_scaled(obj_bed, ind_row, ind_col, center, scale));
    return rcpp_result_gen;
END_RCPP
}
// prod_and_rowSumsSq
List prod_and_rowSumsSq(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericVector& center, const NumericVector& scale, const NumericMatrix& V);
RcppExport SEXP _bigsnpr_prod_and_rowSumsSq(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(prod_and_rowSumsSq(obj_bed, ind_row, ind_col, center, scale, V));
    return rcpp_result_gen;
END_RCPP
}
// bed_clumping_chr
LogicalVector bed_clumping_chr(Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericVector& center, const NumericVector& scale, const IntegerVector& ordInd, const IntegerVector& pos, int size, double thr);
RcppExport SEXP _bigsnpr_bed_clumping_chr(SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP ordIndSEXP, SEXP posSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(bed_clumping_chr(obj_bed, ind_row, ind_col, center, scale, ordInd, pos, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// clumping_chr_cached
List clumping_chr_cached(Environment BM, arma::sp_mat sqcor, const IntegerVector& spInd, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& ordInd, const IntegerVector& pos, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_clumping_chr_cached(SEXP BMSEXP, SEXP sqcorSEXP, SEXP spIndSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP ordIndSEXP, SEXP posSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< arma::sp_mat >::type sqcor(sqcorSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type spInd(spIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping_chr_cached(BM, sqcor, spInd, rowInd, colInd, ordInd, pos, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// clumping_chr
LogicalVector clumping_chr(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& ordInd, const IntegerVector& pos, const NumericVector& sumX, const NumericVector& denoX, int size, double thr);
RcppExport SEXP _bigsnpr_clumping_chr(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP ordIndSEXP, SEXP posSEXP, SEXP sumXSEXP, SEXP denoXSEXP, SEXP sizeSEXP, SEXP thrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ordInd(ordIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type pos(posSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sumX(sumXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type denoX(denoXSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    rcpp_result_gen = Rcpp::wrap(clumping_chr(BM, rowInd, colInd, ordInd, pos, sumX, denoX, size, thr));
    return rcpp_result_gen;
END_RCPP
}
// replaceSNP
void replaceSNP(Environment BM, Environment BM2, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigsnpr_replaceSNP(SEXP BMSEXP, SEXP BM2SEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM2(BM2SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    replaceSNP(BM, BM2, rowInd, colInd);
    return R_NilValue;
END_RCPP
}
// corMat
SEXP corMat(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& blockInd, double size, const NumericVector& thr, const NumericVector& pos);
RcppExport SEXP _bigsnpr_corMat(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP blockIndSEXP, SEXP sizeSEXP, SEXP thrSEXP, SEXP posSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type blockInd(blockIndSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type pos(posSEXP);
    rcpp_result_gen = Rcpp::wrap(corMat(BM, rowInd, colInd, blockInd, size, thr, pos));
    return rcpp_result_gen;
END_RCPP
}
// impute
void impute(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, int method);
RcppExport SEXP _bigsnpr_impute(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    impute(BM, rowInd, colInd, method);
    return R_NilValue;
END_RCPP
}
// multLinReg
NumericMatrix multLinReg(SEXP obj, const IntegerVector& ind_row, const IntegerVector& ind_col, const NumericMatrix& U);
RcppExport SEXP _bigsnpr_multLinReg(SEXP objSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type obj(objSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(multLinReg(obj, ind_row, ind_col, U));
    return rcpp_result_gen;
END_RCPP
}
// read_bgen
CharacterVector read_bgen(std::string filename, NumericVector offsets, Environment BM, IntegerVector ind_row, IntegerVector ind_col, RawVector decode, bool dosage);
RcppExport SEXP _bigsnpr_read_bgen(SEXP filenameSEXP, SEXP offsetsSEXP, SEXP BMSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP, SEXP decodeSEXP, SEXP dosageSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type offsets(offsetsSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_col(ind_colSEXP);
    Rcpp::traits::input_parameter< RawVector >::type decode(decodeSEXP);
    Rcpp::traits::input_parameter< bool >::type dosage(dosageSEXP);
    rcpp_result_gen = Rcpp::wrap(read_bgen(filename, offsets, BM, ind_row, ind_col, decode, dosage));
    return rcpp_result_gen;
END_RCPP
}
// readbina
bool readbina(const char * filename, Environment BM, const RawMatrix& tab);
RcppExport SEXP _bigsnpr_readbina(SEXP filenameSEXP, SEXP BMSEXP, SEXP tabSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const RawMatrix& >::type tab(tabSEXP);
    rcpp_result_gen = Rcpp::wrap(readbina(filename, BM, tab));
    return rcpp_result_gen;
END_RCPP
}
// readbina2
void readbina2(Environment BM, Environment obj_bed, const IntegerVector& ind_row, const IntegerVector& ind_col);
RcppExport SEXP _bigsnpr_readbina2(SEXP BMSEXP, SEXP obj_bedSEXP, SEXP ind_rowSEXP, SEXP ind_colSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< Environment >::type obj_bed(obj_bedSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_row(ind_rowSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type ind_col(ind_colSEXP);
    readbina2(BM, obj_bed, ind_row, ind_col);
    return R_NilValue;
END_RCPP
}
// writebina
void writebina(const char * filename, Environment BM, const RawVector& tab, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigsnpr_writebina(SEXP filenameSEXP, SEXP BMSEXP, SEXP tabSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const RawVector& >::type tab(tabSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    writebina(filename, BM, tab, rowInd, colInd);
    return R_NilValue;
END_RCPP
}
// testWrite
void testWrite(const RawVector& v, const char * filename);
RcppExport SEXP _bigsnpr_testWrite(SEXP vSEXP, SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawVector& >::type v(vSEXP);
    Rcpp::traits::input_parameter< const char * >::type filename(filenameSEXP);
    testWrite(v, filename);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigsnpr_r2_bgen", (DL_FUNC) &_bigsnpr_r2_bgen, 5},
    {"_bigsnpr_bedXPtr", (DL_FUNC) &_bigsnpr_bedXPtr, 3},
    {"_bigsnpr_bed_stats", (DL_FUNC) &_bigsnpr_bed_stats, 3},
    {"_bigsnpr_bed_corNA", (DL_FUNC) &_bigsnpr_bed_corNA, 4},
    {"_bigsnpr_bed_col_counts_cpp", (DL_FUNC) &_bigsnpr_bed_col_counts_cpp, 3},
    {"_bigsnpr_bed_row_counts_cpp", (DL_FUNC) &_bigsnpr_bed_row_counts_cpp, 3},
    {"_bigsnpr_bed_pMatVec4", (DL_FUNC) &_bigsnpr_bed_pMatVec4, 6},
    {"_bigsnpr_bed_cpMatVec4", (DL_FUNC) &_bigsnpr_bed_cpMatVec4, 6},
    {"_bigsnpr_read_bed_scaled", (DL_FUNC) &_bigsnpr_read_bed_scaled, 5},
    {"_bigsnpr_prod_and_rowSumsSq", (DL_FUNC) &_bigsnpr_prod_and_rowSumsSq, 6},
    {"_bigsnpr_bed_clumping_chr", (DL_FUNC) &_bigsnpr_bed_clumping_chr, 9},
    {"_bigsnpr_clumping_chr_cached", (DL_FUNC) &_bigsnpr_clumping_chr_cached, 11},
    {"_bigsnpr_clumping_chr", (DL_FUNC) &_bigsnpr_clumping_chr, 9},
    {"_bigsnpr_replaceSNP", (DL_FUNC) &_bigsnpr_replaceSNP, 4},
    {"_bigsnpr_corMat", (DL_FUNC) &_bigsnpr_corMat, 7},
    {"_bigsnpr_impute", (DL_FUNC) &_bigsnpr_impute, 4},
    {"_bigsnpr_multLinReg", (DL_FUNC) &_bigsnpr_multLinReg, 4},
    {"_bigsnpr_read_bgen", (DL_FUNC) &_bigsnpr_read_bgen, 7},
    {"_bigsnpr_readbina", (DL_FUNC) &_bigsnpr_readbina, 3},
    {"_bigsnpr_readbina2", (DL_FUNC) &_bigsnpr_readbina2, 4},
    {"_bigsnpr_writebina", (DL_FUNC) &_bigsnpr_writebina, 5},
    {"_bigsnpr_testWrite", (DL_FUNC) &_bigsnpr_testWrite, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigsnpr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
