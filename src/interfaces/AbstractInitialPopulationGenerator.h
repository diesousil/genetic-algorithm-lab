#ifndef ABSTRACTINITIALPOPULATIONGENERATOR_H
#define ABSTRACTINITIALPOPULATIONGENERATOR_H

#include "AbstractChromosome.h"

class AbstractInitialPopulationGenerator
{
private:
	unsigned int chromosomeSize;
	unsigned int populationSize;

public:
	virtual AbstractInitialPopulationGenerator(unsigned int chromosomeSize, unsigned int populationSize);
	virtual ~AbstractInitialPopulationGenerator();

	virtual AbstractChromosome** generate();

};
