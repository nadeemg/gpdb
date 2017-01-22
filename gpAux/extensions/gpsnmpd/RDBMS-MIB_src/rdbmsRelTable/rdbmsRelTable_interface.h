/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.43.2.3 $ of : mfd-interface.m2c,v $
 *
 * $Id: rdbmsRelTable_interface.h,v 1.1 2007/05/05 03:15:25 eggyknap Exp $
 */
/** @defgroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef RDBMSRELTABLE_INTERFACE_H
#define RDBMSRELTABLE_INTERFACE_H

#ifdef __cplusplus
extern "C" {
#endif


#include "rdbmsRelTable.h"

/* ********************************************************************
 * Table declarations
 */

/* PUBLIC interface initialization routine */
void _rdbmsRelTable_initialize_interface(rdbmsRelTable_registration_ptr user_ctx,
                                    u_long flags);

    rdbmsRelTable_rowreq_ctx * rdbmsRelTable_allocate_rowreq_ctx(void);
void rdbmsRelTable_release_rowreq_ctx(rdbmsRelTable_rowreq_ctx *rowreq_ctx);

int rdbmsRelTable_index_to_oid(netsnmp_index *oid_idx,
                            rdbmsRelTable_mib_index *mib_idx);
int rdbmsRelTable_index_from_oid(netsnmp_index *oid_idx,
                              rdbmsRelTable_mib_index *mib_idx);

/*
 * access to certain internals. use with caution!
 */
void rdbmsRelTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif

#endif /* RDBMSRELTABLE_INTERFACE_H */