#include <Rcpp.h>

using namespace Rcpp;

//' @export
//[[Rcpp::export]]
IntegerVector do_sth(IntegerVector some_vector) {
  some_vector[0] = 12345;
  return some_vector;
}

//' @export
//[[Rcpp::export]]
List do_sth_more(List some_list) {
  some_list[0] = IntegerVector(10);
  return some_list;
}