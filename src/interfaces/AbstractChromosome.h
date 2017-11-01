#ifndef ABSTRACTCHROMOSOME_H
	#define ABSTRACTCHROMOSOME_H

	class AbstractChromosome
	{
	private:
		double* genes;
		unsigned int size;

	public:

		AbstractChromosome(unsigned int size, double*genes);
		AbstractChromosome(unsigned int size);
		AbstractChromosome();
		virtual ~AbstractChromosome();

		virtual void setSize(unsigned int);
		virtual void setGenes(unsigned int size, double* genes);
		virtual void setGene(unsigned int index, double geneValue);
		virtual double* getGenes();
	};
#endif
