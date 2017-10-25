#ifndef ABSTRACTCROSSOVEROPERATOR_H
#define ABSTRACTCROSSOVEROPERATOR_H

#include "AbstractCrossoverOperator.h"

class AbstractCrossoverOperator
{
private:
	AbstractChromosome** oParents;

public:

	virtual AbstractCrossoverOperator(AbstractChromosome*);
	virtual ~AbstractCrossoverOperator();

	virtual void setParents(AbstractChromosome**);
	virtual AbstractChromosome** getParents();

	virtual void setFirstParent(AbstractChromosome*);
	virtual AbstractChromosome* getFirstParent();

	virtual void setSecondParent(AbstractChromosome*);
	virtual AbstractChromosome* getSecondParent();

	virtual AbstractChromosome* generateNewChild();


};
