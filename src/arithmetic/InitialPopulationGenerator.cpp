#include "header/InitialPopulationGenerator.h"

	InitialPopulationGenerator::InitialPopulationGenerator(unsigned int chromosomeSize, unsigned int populationSize) {
		this->populationSize = populationSize;
		this->chromosomeSize = chromosomeSize;
	}

	InitialPopulationGenerator::~InitialPopulationGenerator() {

	}

	Chromosome** InitialPopulationGenerator::generate() {
		Chromosome** oPopulation;
		unsigned int lCounter;

		oPopulation = new Chromosome*[this->populationSize];

		for(lCounter = 0; lCounter < this->populationSize; lCounter++) {
			oPopulation[lCounter] = new Chromosome(this->chromosomeSize);
		}

		return oPopulation;
	}
