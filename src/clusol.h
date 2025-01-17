#ifndef CLUSOL_H_
#define CLUSOL_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C"{
#endif


void clu1fac(
  int64_t* m,
  int64_t* n,
  int64_t* nelem,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* iploc,
  int64_t* iqloc,
  int64_t* ipinv,
  int64_t* iqinv,
  double* w,
  int64_t* inform,
  int64_t* n1,
  int64_t* n2,
  int64_t* np);

void clu6sol(
  int64_t* mode,
  int64_t* m,
  int64_t* n,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform);

void clu8rpc(
  int64_t* mode1,
  int64_t* mode2,
  int64_t* m,
  int64_t* n,
  int64_t* jrep,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform,
  double* diag,
  double* vnorm);

void clu8rpcsparse(
  int64_t* mode1,
  int64_t* mode2,
  int64_t* m,
  int64_t* n,
  int64_t* jrep,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform,
  double* diag,
  double* vnorm,
  int64_t* lmin);

void clu6mul(
  int64_t* mode,
  int64_t* m,
  int64_t* n,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr);

void clu8adc(
  int64_t* mode,
  int64_t* m,
  int64_t* n,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform,
  double* diag,
  double* vnorm);

void clu8adr(
  int64_t* m,
  int64_t* n,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform,
  double* diag);

void clu8dlc(
  int64_t* m,
  int64_t* n,
  int64_t* jdel,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform);

void clu8dlr(
  int64_t* mode,
  int64_t* m,
  int64_t* n,
  int64_t* idel,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform);

void clu8mod(
  int64_t* mode,
  int64_t* m,
  int64_t* n,
  double* beta,
  double* v,
  double* w,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform);

void clu8rpr(
  int64_t* mode1,
  int64_t* mode2,
  int64_t* m,
  int64_t* n,
  int64_t* irep,
  double* v,
  double* w,
  double* wnew,
  int64_t* lena,
  int64_t* luparm,
  double* parmlu,
  double* a,
  int64_t* indc,
  int64_t* indr,
  int64_t* p,
  int64_t* q,
  int64_t* lenc,
  int64_t* lenr,
  int64_t* locc,
  int64_t* locr,
  int64_t* inform);

#ifdef __cplusplus
}
#endif

#endif // CLUSOL_H_
