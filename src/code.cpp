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

//' @export
// [[Rcpp::export]]
List create_vector_list_with_one_modification(IntegerVector v) {
  auto a = v;
  auto b = v;
  
  a[1] = 123;
  
  return List::create(a, b, v);
}

//' @export
// [[Rcpp::export]]
List create_vector_list_with_two_modifications(IntegerVector v) {
  auto a = v;
  auto b = v;
  
  a[1] = 123;
  b[1] = 202;
  
  return List::create(a, b, v);
}
