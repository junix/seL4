/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

#ifndef __ARCH_MODEL_STATEDATA_32_H
#define __ARCH_MODEL_STATEDATA_32_H

#include <object/structures.h>
#include <arch/types.h>

extern pdpte_t ia32KSGlobalPDPT[BIT(PDPT_BITS)];
extern pde_t ia32KSGlobalPD[BIT(PD_BITS + PDPT_BITS)];
extern pte_t ia32KSGlobalPT[BIT(PT_BITS)];
extern paddr_t ia32KSCurrentPD;

#endif
