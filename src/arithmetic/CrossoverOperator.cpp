#include "header/CrossoverOperator.h"

	CrossoverOperator::CrossoverOperator() {

	}

	CrossoverOperator::CrossoverOperator(Chromosome** oParents) {
		this->setParents(oParents);
	}

	CrossoverOperator::~CrossoverOperator() {
		delete this->oParents;
		this->oParents = 0;
	}

	void CrossoverOperator::setParents(Chromosome** oParents) {
		this->oParents = oParents;
	}

	Chromosome** CrossoverOperator::getParents() {
		return this->oParents;
	}

	void CrossoverOperator::setFirstParent(Chromosome* oFirstParent) {
		this->oParents[0] = oFirstParent;
	}

	Chromosome* CrossoverOperator::getFirstParent() {
		return this->oParents[0];
	}

	void CrossoverOperator::setSecondParent(Chromosome* oSecondParent) {
		this->oParents[1] = oSecondParent;
	}

	Chromosome* CrossoverOperator::getSecondParent() {
		return this->oParents[1];
	}

	Chromosome* CrossoverOperator::generateNewChild() {
		//TODO: implement crossover algorithm
	}
