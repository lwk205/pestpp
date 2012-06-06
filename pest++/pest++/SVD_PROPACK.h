/*  
    � Copyright 2012, David Welter
    
    This file is part of PEST++.
   
    PEST++ is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    PEST++ is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with PEST++.  If not, see<http://www.gnu.org/licenses/>.
*/
#ifndef SVD_PROPACK_H_
#define SVD_PROPACK_H_

#include "SVDPackage.h"

class LaGenMatDouble;
class LaVectorDouble;

class SVD_PROPACK  : public SVDPackage
{
public:
	SVD_PROPACK(void);
	void solve_ip(LaGenMatDouble &A, LaVectorDouble &Sigma, LaGenMatDouble &U, LaGenMatDouble &Vt);
	void test();
	~SVD_PROPACK(void);
private:
};

#endif /*SVD_PROPACK_H_*/