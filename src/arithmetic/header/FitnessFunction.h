#ifndef FITNESSFUNCTION_H
	#define FITNESSFUNCTION_H

	#include "../../interfaces/AbstractFitnessFunction.h"
	#include "Chromosome.h"

	class FitnessFunction
	{

	private:
		Chromosome* oChromosome;

	public:
		FitnessFunction();
		FitnessFunction(Chromosome*);
		~FitnessFunction();

		void setChromosome(Chromosome*);
		double calculate();

	};

#endif
