#ifndef TINITIALPOPULATIONGENERATOR_H
	#define INITIALPOPULATIONGENERATOR_H

	#include "../../interfaces/AbstractInitialPopulationGenerator.h"
	#include "Chromosome.h"

	class InitialPopulationGenerator
	{
	private:
		unsigned int chromosomeSize;
		unsigned int populationSize;

	public:
		InitialPopulationGenerator(unsigned int chromosomeSize, unsigned int populationSize);
		~InitialPopulationGenerator();

		Chromosome** generate();

	};

#endif
