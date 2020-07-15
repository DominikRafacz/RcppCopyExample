// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// do_sth
IntegerVector do_sth(IntegerVector& some_vector);
RcppExport SEXP _RcppCopyExample_do_sth(SEXP some_vectorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector& >::type some_vector(some_vectorSEXP);
    rcpp_result_gen = Rcpp::wrap(do_sth(some_vector));
    return rcpp_result_gen;
END_RCPP
}
// do_sth_more
List do_sth_more(List some_list);
RcppExport SEXP _RcppCopyExample_do_sth_more(SEXP some_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type some_list(some_listSEXP);
    rcpp_result_gen = Rcpp::wrap(do_sth_more(some_list));
    return rcpp_result_gen;
END_RCPP
}
// create_vector_list_with_one_modification
List create_vector_list_with_one_modification(IntegerVector v);
RcppExport SEXP _RcppCopyExample_create_vector_list_with_one_modification(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(create_vector_list_with_one_modification(v));
    return rcpp_result_gen;
END_RCPP
}
// create_vector_list_with_two_modifications
List create_vector_list_with_two_modifications(IntegerVector v);
RcppExport SEXP _RcppCopyExample_create_vector_list_with_two_modifications(SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(create_vector_list_with_two_modifications(v));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppCopyExample_do_sth", (DL_FUNC) &_RcppCopyExample_do_sth, 1},
    {"_RcppCopyExample_do_sth_more", (DL_FUNC) &_RcppCopyExample_do_sth_more, 1},
    {"_RcppCopyExample_create_vector_list_with_one_modification", (DL_FUNC) &_RcppCopyExample_create_vector_list_with_one_modification, 1},
    {"_RcppCopyExample_create_vector_list_with_two_modifications", (DL_FUNC) &_RcppCopyExample_create_vector_list_with_two_modifications, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppCopyExample(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
