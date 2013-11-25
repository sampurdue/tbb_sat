/*
 * Collect.cpp
 *
 *  Created on: Apr 30, 2013
 *      Author: choco
 */

#include "core/Collect.h"


namespace Minisat{


void printStats(Solver& solver);

Collect::Collect() {
	// TODO Auto-generated constructor stub
	 s= new Solver[nbthreads];
	unsigned int i;
	for(i=0;i<nbthreads;i++)
	{
		s[i].setSeedValue(i+1);
		sats.push(0);
	}

}

Collect::~Collect() {
	// TODO Auto-generated destructor stub
}
}
