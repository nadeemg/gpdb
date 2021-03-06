/*-------------------------------------------------------------------------
 *
 * nodeUnique.h
 *
 *
 *
 * Portions Copyright (c) 1996-2009, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $PostgreSQL: pgsql/src/include/executor/nodeUnique.h,v 1.26 2009/09/27 21:10:53 tgl Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEUNIQUE_H
#define NODEUNIQUE_H

#include "nodes/execnodes.h"

extern UniqueState *ExecInitUnique(Unique *node, EState *estate, int eflags);
extern TupleTableSlot *ExecUnique(UniqueState *node);
extern void ExecEndUnique(UniqueState *node);
extern void ExecReScanUnique(UniqueState *node, ExprContext *exprCtxt);

#endif   /* NODEUNIQUE_H */
