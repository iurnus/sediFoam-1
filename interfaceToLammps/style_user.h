/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

// add a style class to LAMMPS by adding 2 lines to this file
// add new include files in appropriate Include ifdef
// add new style keywords and class names in appropriate Class ifdef
// see style.h for examples

#ifdef AngleInclude
#endif

#ifdef AngleClass
#endif

#ifdef AtomInclude
#endif

#ifdef AtomClass
#endif

#ifdef BondInclude
#endif

#ifdef BondClass
#endif

#ifdef CommandInclude
#endif

#ifdef CommandClass
#endif

#ifdef ComputeInclude
#include "compute_gran_local.h"
#include "compute_cohe_local.h"
#endif

#ifdef ComputeClass
FixStyle(gran/local, ComputeGranLocal)
FixStyle(cohe/local, ComputeCoheLocal)
#endif

#ifdef DihedralInclude
#endif

#ifdef DihedralClass
#endif

#ifdef DumpInclude
#endif

#ifdef DumpClass
#endif

#ifdef FixInclude
#include "fix_fluid_drag.h"
#include "fix_cohesive.h"
#endif

#ifdef FixClass
FixStyle(fdrag, FixFluidDrag)
FixStyle(cohesive,FixCohe)
#endif

#ifdef ImproperInclude
#endif

#ifdef ImproperClass
#endif

#ifdef IntegrateInclude
#endif

#ifdef IntegrateClass
# endif

#ifdef KSpaceInclude
#endif

#ifdef KSpaceClass
#endif

#ifdef MinimizeInclude
#endif

#ifdef MinimizeClass
#endif

#ifdef PairInclude
#endif

#ifdef PairClass
#endif

#ifdef RegionInclude
#endif

#ifdef RegionClass
#endif
