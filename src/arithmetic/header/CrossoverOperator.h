#ifndef CROSSOVEROPERATOR_H
	#define CROSSOVEROPERATOR_H

	#include "../../interfaces/AbstractCrossoverOperator.h"
	#include "Chromosome.h"

	class CrossoverOperator
	{
	private:
		Chromosome** oParents;

	public:

		CrossoverOperator();
		CrossoverOperator(Chromosome**);
		~CrossoverOperator();

		void setParents(Chromosome**);
		Chromosome** getParents();

		void setFirstParent(Chromosome*);
		Chromosome* getFirstParent();

		void setSecondParent(Chromosome*);
		Chromosome* getSecondParent();

		Chromosome* generateNewChild();

	};

#endif
