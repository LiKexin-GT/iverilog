#ifndef __arith_H
#define __arith_H
/*
 * Copyright (c) 2001 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */
#if !defined(WINNT)
#ident "$Id: arith.h,v 1.1 2001/06/05 03:05:41 steve Exp $"
#endif

# include  "functor.h"

/*
 * This class is a mode-42 object for arithmetic sum. Inputs that come
 * in cause the 4-input summation to be calculated, and output
 * functors that are affected cause propagations.
 */
class vvp_arith_sum  : public vvp_fobj_s {

    public:
      explicit vvp_arith_sum(vvp_ipoint_t b, unsigned wid);

      void set(vvp_ipoint_t i, functor_t f, bool push);

    private:
      vvp_ipoint_t base_;
      unsigned wid_;

      void output_x_(bool push);

    private: // not implemented
      vvp_arith_sum(const vvp_arith_sum&);
      vvp_arith_sum& operator= (const vvp_arith_sum&);
};

/*
 * $Log: arith.h,v $
 * Revision 1.1  2001/06/05 03:05:41  steve
 *  Add structural addition.
 *
 */
#endif
