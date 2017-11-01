#ifndef ABSTRACTFITNESSFUNCTION_H
	#define ABSTRACTFITNESSFUNCTION_H

	#include "AbstractChromosome.h"

	class AbstractFitnessFunction
	{

	private:
		AbstractChromosome* oChromosome;

	public:
		AbstractFitnessFunction();
		AbstractFitnessFunction(AbstractChromosome*);
		virtual ~AbstractFitnessFunction();

		virtual void setChromosome(AbstractChromosome*);
		virtual double calculate();

	};

#endif
