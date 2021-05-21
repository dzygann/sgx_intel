/*
 * App.h
 *
 *  Created on: May 2, 2021
 *      Author: Denis Zygann
 */

#ifndef APP_APP_H_
#define APP_APP_H_


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

#include "sgx_error.h"       /* sgx_status_t */
#include "sgx_eid.h"     /* sgx_enclave_id_t */

#ifndef TRUE
# define TRUE 1
#endif

#ifndef FALSE
# define FALSE 0
#endif

# define TOKEN_FILENAME   "enclave.token"
# define ENCLAVE_FILENAME "enclave.signed.so"

extern sgx_enclave_id_t global_eid;    /* global enclave id */

#if defined(__cplusplus)
extern "C" {
#endif


#if defined(__cplusplus)
}
#endif



#endif /* APP_APP_H_ */