#ifndef ABSTRACTMUTATIONOPERATOR_H
	#define ABSTRACTMUTATIONOPERATOR_H

	#include "AbstractChromosome.h"

	class AbstractMutationOperator
	{
	private:
		AbstractChromosome* oChromosome;

	public:

		AbstractMutationOperator();
		AbstractMutationOperator(AbstractChromosome*);
		virtual ~AbstractMutationOperator();

		virtual void setChromosome(AbstractChromosome*);
		virtual AbstractChromosome* mutate();


	};

#endif
