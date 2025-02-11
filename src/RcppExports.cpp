// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// pascal
Rcpp::NumericMatrix pascal(Rcpp::NumericMatrix m, int popsize, int set);
RcppExport SEXP _InPlotSampling_pascal(SEXP mSEXP, SEXP popsizeSEXP, SEXP setSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type popsize(popsizeSEXP);
    Rcpp::traits::input_parameter< int >::type set(setSEXP);
    rcpp_result_gen = Rcpp::wrap(pascal(m, popsize, set));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_InPlotSampling_pascal", (DL_FUNC) &_InPlotSampling_pascal, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_InPlotSampling(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
