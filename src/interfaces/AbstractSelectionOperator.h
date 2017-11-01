#ifndef ABSTRACTSELECTIONOPERATOR_H
	#define ABSTRACTSELECTIONOPERATOR_H

	#include "AbstractChromosome.h"
	#include "AbstractFitnessFunction.h"

	class AbstractSelectionOperator
	{
	private:
		AbstractChromosome** oPopulation;
		AbstractFitnessFunction** oFitnessFunction;

	public:

		AbstractSelectionOperator(AbstractChromosome** oPopulation);
		virtual ~AbstractSelectionOperator();

		virtual void setPopulation(AbstractChromosome** oPopulation);
		virtual AbstractChromosome** getPopulation();

		virtual void setFitnessFunction(AbstractFitnessFunction** oFitnessFunction);
		virtual AbstractFitnessFunction** getFitnessFunction();

		virtual AbstractChromosome** select(int sizeToSelect);
	};

#endif
