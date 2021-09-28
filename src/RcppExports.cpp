// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// lte_n_equal_rows
bool lte_n_equal_rows(const NumericMatrix& matrix, int n, double tolerance);
RcppExport SEXP _glmGamPoi_lte_n_equal_rows(SEXP matrixSEXP, SEXP nSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(lte_n_equal_rows(matrix, n, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// get_row_groups
IntegerVector get_row_groups(const NumericMatrix& matrix, int n_groups, double tolerance);
RcppExport SEXP _glmGamPoi_get_row_groups(SEXP matrixSEXP, SEXP n_groupsSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type matrix(matrixSEXP);
    Rcpp::traits::input_parameter< int >::type n_groups(n_groupsSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(get_row_groups(matrix, n_groups, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// fitBeta_fisher_scoring
List fitBeta_fisher_scoring(RObject Y, const arma::mat& model_matrix, RObject exp_offset_matrix, NumericVector thetas, SEXP beta_matSEXP, Nullable<NumericMatrix> ridge_penalty_nl, double tolerance, double max_rel_mu_change, int max_iter);
RcppExport SEXP _glmGamPoi_fitBeta_fisher_scoring(SEXP YSEXP, SEXP model_matrixSEXP, SEXP exp_offset_matrixSEXP, SEXP thetasSEXP, SEXP beta_matSEXPSEXP, SEXP ridge_penalty_nlSEXP, SEXP toleranceSEXP, SEXP max_rel_mu_changeSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< RObject >::type exp_offset_matrix(exp_offset_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta_matSEXP(beta_matSEXPSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericMatrix> >::type ridge_penalty_nl(ridge_penalty_nlSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type max_rel_mu_change(max_rel_mu_changeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBeta_fisher_scoring(Y, model_matrix, exp_offset_matrix, thetas, beta_matSEXP, ridge_penalty_nl, tolerance, max_rel_mu_change, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// fitBeta_diagonal_fisher_scoring
List fitBeta_diagonal_fisher_scoring(RObject Y, const arma::mat& model_matrix, RObject exp_offset_matrix, NumericVector thetas, SEXP beta_matSEXP, double tolerance, double max_rel_mu_change, int max_iter);
RcppExport SEXP _glmGamPoi_fitBeta_diagonal_fisher_scoring(SEXP YSEXP, SEXP model_matrixSEXP, SEXP exp_offset_matrixSEXP, SEXP thetasSEXP, SEXP beta_matSEXPSEXP, SEXP toleranceSEXP, SEXP max_rel_mu_changeSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< RObject >::type exp_offset_matrix(exp_offset_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< SEXP >::type beta_matSEXP(beta_matSEXPSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< double >::type max_rel_mu_change(max_rel_mu_changeSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBeta_diagonal_fisher_scoring(Y, model_matrix, exp_offset_matrix, thetas, beta_matSEXP, tolerance, max_rel_mu_change, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// fitBeta_one_group
List fitBeta_one_group(RObject Y, RObject offset_matrix, NumericVector thetas, NumericVector beta_start_values, double tolerance, int maxIter);
RcppExport SEXP _glmGamPoi_fitBeta_one_group(SEXP YSEXP, SEXP offset_matrixSEXP, SEXP thetasSEXP, SEXP beta_start_valuesSEXP, SEXP toleranceSEXP, SEXP maxIterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RObject >::type offset_matrix(offset_matrixSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta_start_values(beta_start_valuesSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    Rcpp::traits::input_parameter< int >::type maxIter(maxIterSEXP);
    rcpp_result_gen = Rcpp::wrap(fitBeta_one_group(Y, offset_matrix, thetas, beta_start_values, tolerance, maxIter));
    return rcpp_result_gen;
END_RCPP
}
// compute_gp_deviance_mask
double compute_gp_deviance_mask(double y, double mu, double theta);
RcppExport SEXP _glmGamPoi_compute_gp_deviance_mask(SEXP ySEXP, SEXP muSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_gp_deviance_mask(y, mu, theta));
    return rcpp_result_gen;
END_RCPP
}
// compute_gp_deviance_sum_mask
double compute_gp_deviance_sum_mask(NumericVector y, NumericVector mu, double theta);
RcppExport SEXP _glmGamPoi_compute_gp_deviance_sum_mask(SEXP ySEXP, SEXP muSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_gp_deviance_sum_mask(y, mu, theta));
    return rcpp_result_gen;
END_RCPP
}
// compute_gp_deviance_residuals_matrix_mask
arma::Mat<double> compute_gp_deviance_residuals_matrix_mask(const SEXP Y_SEXP, const arma::Mat<double>& Mu, NumericVector thetas);
RcppExport SEXP _glmGamPoi_compute_gp_deviance_residuals_matrix_mask(SEXP Y_SEXPSEXP, SEXP MuSEXP, SEXP thetasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const SEXP >::type Y_SEXP(Y_SEXPSEXP);
    Rcpp::traits::input_parameter< const arma::Mat<double>& >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type thetas(thetasSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_gp_deviance_residuals_matrix_mask(Y_SEXP, Mu, thetas));
    return rcpp_result_gen;
END_RCPP
}
// #' @export
// fisher_scoring_qr_step_
template<class NumericType> arma::vec fisher_scoring_qr_step_(const arma::mat& model_matrix, const arma::Col<NumericType>& counts, const arma::colvec& mu, const arma::colvec& theta_times_mu);
RcppExport SEXP _glmGamPoi_fisher_scoring_qr_step_(SEXP model_matrixSEXP, SEXP countsSEXP, SEXP muSEXP, SEXP theta_times_muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::Col<NumericType>& >::type counts(countsSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type theta_times_mu(theta_times_muSEXP);
    rcpp_result_gen = Rcpp::wrap(fisher_scoring_qr_step_(model_matrix, counts, mu, theta_times_mu));
    return rcpp_result_gen;
END_RCPP
}
// make_table_if_small
List make_table_if_small(const NumericVector& x, int stop_if_larger);
RcppExport SEXP _glmGamPoi_make_table_if_small(SEXP xSEXP, SEXP stop_if_largerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type stop_if_larger(stop_if_largerSEXP);
    rcpp_result_gen = Rcpp::wrap(make_table_if_small(x, stop_if_larger));
    return rcpp_result_gen;
END_RCPP
}
// conventional_loglikelihood_fast
double conventional_loglikelihood_fast(NumericVector y, NumericVector mu, double log_theta, const arma::mat& model_matrix, bool do_cr_adj, NumericVector unique_counts, NumericVector count_frequencies);
RcppExport SEXP _glmGamPoi_conventional_loglikelihood_fast(SEXP ySEXP, SEXP muSEXP, SEXP log_thetaSEXP, SEXP model_matrixSEXP, SEXP do_cr_adjSEXP, SEXP unique_countsSEXP, SEXP count_frequenciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type log_theta(log_thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type do_cr_adj(do_cr_adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type unique_counts(unique_countsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type count_frequencies(count_frequenciesSEXP);
    rcpp_result_gen = Rcpp::wrap(conventional_loglikelihood_fast(y, mu, log_theta, model_matrix, do_cr_adj, unique_counts, count_frequencies));
    return rcpp_result_gen;
END_RCPP
}
// conventional_score_function_fast
double conventional_score_function_fast(NumericVector y, NumericVector mu, double log_theta, const arma::mat& model_matrix, bool do_cr_adj, NumericVector unique_counts, NumericVector count_frequencies);
RcppExport SEXP _glmGamPoi_conventional_score_function_fast(SEXP ySEXP, SEXP muSEXP, SEXP log_thetaSEXP, SEXP model_matrixSEXP, SEXP do_cr_adjSEXP, SEXP unique_countsSEXP, SEXP count_frequenciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type log_theta(log_thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type do_cr_adj(do_cr_adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type unique_counts(unique_countsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type count_frequencies(count_frequenciesSEXP);
    rcpp_result_gen = Rcpp::wrap(conventional_score_function_fast(y, mu, log_theta, model_matrix, do_cr_adj, unique_counts, count_frequencies));
    return rcpp_result_gen;
END_RCPP
}
// conventional_deriv_score_function_fast
double conventional_deriv_score_function_fast(NumericVector y, NumericVector mu, double log_theta, const arma::mat& model_matrix, bool do_cr_adj, NumericVector unique_counts, NumericVector count_frequencies);
RcppExport SEXP _glmGamPoi_conventional_deriv_score_function_fast(SEXP ySEXP, SEXP muSEXP, SEXP log_thetaSEXP, SEXP model_matrixSEXP, SEXP do_cr_adjSEXP, SEXP unique_countsSEXP, SEXP count_frequenciesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type log_theta(log_thetaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type do_cr_adj(do_cr_adjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type unique_counts(unique_countsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type count_frequencies(count_frequenciesSEXP);
    rcpp_result_gen = Rcpp::wrap(conventional_deriv_score_function_fast(y, mu, log_theta, model_matrix, do_cr_adj, unique_counts, count_frequencies));
    return rcpp_result_gen;
END_RCPP
}
// estimate_overdispersions_fast
List estimate_overdispersions_fast(RObject Y, RObject mean_matrix, NumericMatrix model_matrix, bool do_cox_reid_adjustment, double n_subsamples, int max_iter);
RcppExport SEXP _glmGamPoi_estimate_overdispersions_fast(SEXP YSEXP, SEXP mean_matrixSEXP, SEXP model_matrixSEXP, SEXP do_cox_reid_adjustmentSEXP, SEXP n_subsamplesSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RObject >::type mean_matrix(mean_matrixSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< bool >::type do_cox_reid_adjustment(do_cox_reid_adjustmentSEXP);
    Rcpp::traits::input_parameter< double >::type n_subsamples(n_subsamplesSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_overdispersions_fast(Y, mean_matrix, model_matrix, do_cox_reid_adjustment, n_subsamples, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// estimate_global_overdispersions_fast
NumericVector estimate_global_overdispersions_fast(RObject Y, RObject mean_matrix, const arma::mat model_matrix, const bool do_cox_reid_adjustment, const NumericVector log_thetas);
RcppExport SEXP _glmGamPoi_estimate_global_overdispersions_fast(SEXP YSEXP, SEXP mean_matrixSEXP, SEXP model_matrixSEXP, SEXP do_cox_reid_adjustmentSEXP, SEXP log_thetasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type Y(YSEXP);
    Rcpp::traits::input_parameter< RObject >::type mean_matrix(mean_matrixSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type model_matrix(model_matrixSEXP);
    Rcpp::traits::input_parameter< const bool >::type do_cox_reid_adjustment(do_cox_reid_adjustmentSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type log_thetas(log_thetasSEXP);
    rcpp_result_gen = Rcpp::wrap(estimate_global_overdispersions_fast(Y, mean_matrix, model_matrix, do_cox_reid_adjustment, log_thetas));
    return rcpp_result_gen;
END_RCPP
}
// div_zbz_dbl
NumericVector div_zbz_dbl(NumericVector a, NumericVector b);
RcppExport SEXP _glmGamPoi_div_zbz_dbl(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(div_zbz_dbl(a, b));
    return rcpp_result_gen;
END_RCPP
}
// div_zbz_int
NumericVector div_zbz_int(IntegerVector a, IntegerVector b);
RcppExport SEXP _glmGamPoi_div_zbz_int(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(div_zbz_int(a, b));
    return rcpp_result_gen;
END_RCPP
}
// div_zbz_dbl_mat
NumericMatrix div_zbz_dbl_mat(NumericMatrix a, NumericMatrix b);
RcppExport SEXP _glmGamPoi_div_zbz_dbl_mat(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(div_zbz_dbl_mat(a, b));
    return rcpp_result_gen;
END_RCPP
}
// div_zbz_int_mat
NumericMatrix div_zbz_int_mat(IntegerMatrix a, IntegerMatrix b);
RcppExport SEXP _glmGamPoi_div_zbz_int_mat(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type a(aSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(div_zbz_int_mat(a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_glmGamPoi_lte_n_equal_rows", (DL_FUNC) &_glmGamPoi_lte_n_equal_rows, 3},
    {"_glmGamPoi_get_row_groups", (DL_FUNC) &_glmGamPoi_get_row_groups, 3},
    {"_glmGamPoi_fitBeta_fisher_scoring", (DL_FUNC) &_glmGamPoi_fitBeta_fisher_scoring, 9},
    {"_glmGamPoi_fitBeta_diagonal_fisher_scoring", (DL_FUNC) &_glmGamPoi_fitBeta_diagonal_fisher_scoring, 8},
    {"_glmGamPoi_fitBeta_one_group", (DL_FUNC) &_glmGamPoi_fitBeta_one_group, 6},
    {"_glmGamPoi_compute_gp_deviance_mask", (DL_FUNC) &_glmGamPoi_compute_gp_deviance_mask, 3},
    {"_glmGamPoi_compute_gp_deviance_sum_mask", (DL_FUNC) &_glmGamPoi_compute_gp_deviance_sum_mask, 3},
    {"_glmGamPoi_compute_gp_deviance_residuals_matrix_mask", (DL_FUNC) &_glmGamPoi_compute_gp_deviance_residuals_matrix_mask, 3},
    {"_glmGamPoi_fisher_scoring_qr_step_", (DL_FUNC) &_glmGamPoi_fisher_scoring_qr_step_, 4},
    {"_glmGamPoi_make_table_if_small", (DL_FUNC) &_glmGamPoi_make_table_if_small, 2},
    {"_glmGamPoi_conventional_loglikelihood_fast", (DL_FUNC) &_glmGamPoi_conventional_loglikelihood_fast, 7},
    {"_glmGamPoi_conventional_score_function_fast", (DL_FUNC) &_glmGamPoi_conventional_score_function_fast, 7},
    {"_glmGamPoi_conventional_deriv_score_function_fast", (DL_FUNC) &_glmGamPoi_conventional_deriv_score_function_fast, 7},
    {"_glmGamPoi_estimate_overdispersions_fast", (DL_FUNC) &_glmGamPoi_estimate_overdispersions_fast, 6},
    {"_glmGamPoi_estimate_global_overdispersions_fast", (DL_FUNC) &_glmGamPoi_estimate_global_overdispersions_fast, 5},
    {"_glmGamPoi_div_zbz_dbl", (DL_FUNC) &_glmGamPoi_div_zbz_dbl, 2},
    {"_glmGamPoi_div_zbz_int", (DL_FUNC) &_glmGamPoi_div_zbz_int, 2},
    {"_glmGamPoi_div_zbz_dbl_mat", (DL_FUNC) &_glmGamPoi_div_zbz_dbl_mat, 2},
    {"_glmGamPoi_div_zbz_int_mat", (DL_FUNC) &_glmGamPoi_div_zbz_int_mat, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_glmGamPoi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
