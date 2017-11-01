#include "header/Chromosome.h"


	Chromosome::Chromosome(unsigned int size, double*genes) {
		this->genes = genes;
		this->size = size;
	}

	Chromosome::Chromosome(unsigned int size) {
		this->genes = 0;
		this->setSize(size);
	}

	Chromosome::Chromosome() {
		this->genes = 0;
		this->size=0;
	}

	void Chromosome::setSize(unsigned int size) {
			this->size = size;
			this->genes = new double[size];
		}

	void Chromosome::setGenes(unsigned int size, double* genes) {
			this->size = size;
			this->genes = genes;
		}

	void Chromosome::setGene(unsigned int index, double geneValue) {
		this->genes[index] = geneValue;
	}

	double* Chromosome::getGenes() {
		return this->genes;
	}

	Chromosome::~Chromosome() {
		this->genes = 0;
		this->size = 0;
	}
