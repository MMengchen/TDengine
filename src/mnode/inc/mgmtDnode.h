/*
 * Copyright (c) 2019 TAOS Data, Inc. <jhtao@taosdata.com>
 *
 * This program is free software: you can use, redistribute, and/or modify
 * it under the terms of the GNU Affero General Public License, version 3
 * or later ("AGPL"), as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TDENGINE_MGMT_DNODE_H
#define TDENGINE_MGMT_DNODE_H

#ifdef __cplusplus
extern "C" {
#endif
#include "mnode.h"

int32_t mgmtInitDnodes();
void    mgmtCleanUpDnodes();
int32_t mgmtGetDnodesNum();
void *  mgmtGetNextDnode(void *pNode, SDnodeObj **pDnode);
void    mgmtIncDnodeRef(SDnodeObj *pDnode);
void    mgmtDecDnodeRef(SDnodeObj *pDnode);
SDnodeObj* mgmtGetDnode(int32_t dnodeId);
SDnodeObj* mgmtGetDnodeByIp(uint32_t ip);

#ifdef __cplusplus
}
#endif

#endif
