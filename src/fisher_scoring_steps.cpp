#include <Rcpp.h>
#include <RcppArmadillo.h>
#include "beachmat/numeric_matrix.h"
#include "beachmat/integer_matrix.h"
#include <fisher_scoring_steps.h>

using namespace Rcpp;
// [[Rcpp::depends(RcppArmadillo)]]

// [[Rcpp::export]]
template<class NumericType>
arma::vec fisher_scoring_qr_step_(const arma::mat& model_matrix, const arma::Col<NumericType>& counts,
                                  const arma::colvec& mu, const arma::colvec& theta_times_mu){
    return fisher_scoring_qr_step(model_matrix, counts, mu, theta_times_mu);
}
