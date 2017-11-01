#ifndef MUTATIONOPERATOR_H
	#define MUTATIONOPERATOR_H

	#include "../../interfaces/AbstractMutationOperator.h"
	#include "Chromosome.h"

	class MutationOperator
	{
	private:
		Chromosome* oChromosome;

	public:

		MutationOperator();
		MutationOperator(Chromosome*);
		~MutationOperator();

		void setChromosome(Chromosome*);
		Chromosome* mutate();


	};

#endif
