#ifndef ABSTRACTCHROMOSOME_H
#define ABSTRACTCHROMOSOME_H

class AbstractChromosome
{
private:
	double* genes;
	unsigned int size;

public:

	virtual AbstractChromosome(int size, double*genes);
	virtual AbstractChromosome(int size);
	virtual AbstractChromosome();
	virtual ~AbstractChromosome();

	virtual void setSize();
	virtual void setGenes(double* genes);
	virtual void setGene(int index, double geneValue);
	virtual double* getGenes();
	virtual int* getGenes();
};
