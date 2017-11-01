#ifndef CHROMOSOME_H
	#define CHROMOSOME_H

#include "../../interfaces/AbstractChromosome.h"

class Chromosome
{

private:
	double* genes;
	unsigned int size;

public:

	Chromosome(unsigned int size, double*genes);
	Chromosome(unsigned int size);
	Chromosome();
	~Chromosome();

	void setSize(unsigned int);
	void setGenes(unsigned int size, double* genes);
	void setGene(unsigned int index, double geneValue);
	double* getGenes();
};

#endif
