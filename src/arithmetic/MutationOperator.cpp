#include "header/MutationOperator.h"

	MutationOperator::MutationOperator(Chromosome* oChromosome) {
		this->setChromosome(oChromosome);
	}

	MutationOperator::~MutationOperator() {
		delete this->oChromosome;
	}

	void MutationOperator::setChromosome(Chromosome* oChromosome) {
		this->oChromosome = oChromosome;
	}

	Chromosome* MutationOperator::mutate() {

	}
