/*
 * Collect.h
 *
 *  Created on: Apr 30, 2013
 *      Author: choco
 */

#ifndef COLLECT_H_
#define COLLECT_H_

#include "core/Solver.h"

//using namespace Minisat; 

/*
 *
 */
namespace Minisat{

class Collect {

public:

	Solver* s;
	vec<int> sats;

	Collect();
	virtual ~Collect();
};
}
#endif /* COLLECT_H_ */
