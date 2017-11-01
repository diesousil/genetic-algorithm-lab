#include "header/FitnessFunction.h"

	FitnessFunction::FitnessFunction() {

	}

	FitnessFunction::FitnessFunction(Chromosome* oChromosome) {

	}

	FitnessFunction::~FitnessFunction() {
		delete this->oChromosome;
	}

	void FitnessFunction::setChromosome(Chromosome* oChromosome) {
		this->oChromosome = oChromosome;
	}

	double FitnessFunction::calculate() {

	}
