#include "header/SelectionOperator.h"

	SelectionOperator::SelectionOperator(Chromosome** oPopulation) {
		this->setPopulation(oPopulation);
	}

	SelectionOperator::~SelectionOperator() {
		delete this->oPopulation;
	}

	void SelectionOperator::setPopulation(Chromosome** oPopulation) {
		this->oPopulation = oPopulation;
	}

	Chromosome** SelectionOperator::getPopulation() {
		return this->oPopulation;
	}

	void SelectionOperator::setFitnessFunction(FitnessFunction** oFitnessFunction) {
		this->oFitnessFunction = oFitnessFunction;
	}

	FitnessFunction** SelectionOperator::getFitnessFunction() {
		return this->oFitnessFunction;
	}

	Chromosome** SelectionOperator::select(unsigned int sizeToSelect) {

	}
