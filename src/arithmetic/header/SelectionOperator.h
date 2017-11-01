#ifndef SELECTIONOPERATOR_H
	#define SELECTIONOPERATOR_H

	#include "../../interfaces/AbstractSelectionOperator.h"
	#include "Chromosome.h"
	#include "FitnessFunction.h"

	class SelectionOperator
	{
	private:
		Chromosome** oPopulation;
		FitnessFunction** oFitnessFunction;

	public:

		SelectionOperator(Chromosome** oPopulation);
		~SelectionOperator();

		void setPopulation(Chromosome** oPopulation);
		Chromosome** getPopulation();

		void setFitnessFunction(FitnessFunction** oFitnessFunction);
		FitnessFunction** getFitnessFunction();

		Chromosome** select(unsigned int sizeToSelect);
	};

#endif
