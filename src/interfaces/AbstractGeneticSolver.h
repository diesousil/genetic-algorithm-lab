#ifndef ABSTRACTGENETICSOLVER_H
#define ABSTRACTGENETICSOLVER_H

#include "AbstractChromosome.h"
#include "AbstractCrossoverOperator.h"
#include "AbstractFitnessFunction.h"
#include "AbstractMutationOperator.h"
#include "AbstractSelectionOperator.h"
#include "AbstractInitialPopulationGenerator.h"

class AbstractGeneticSolver
{
private:

	AbstractFitnessFunction* oFitnessOperator;
	AbstractSelectionOperator* oSelectionOperator;
	AbstractCrossoverOperator* oCrossoverOperator;
	AbstractMutationOperator* oMutationOperator;
	AbstractChromosome** oPopulation;
	AbstractInitialPopulationGenerator* oInitialPopulationGenerator;
	unsigned int maximumIterations;
	short mutationLikelihood;
	unsigned int iteration;


public:
	virtual AbstractGeneticSolver();

	virtual AbstractGeneticSolver(AbstractFitnessFunction *,
								  AbstractSelectionOperator*,
								  AbstractCrossoverOperator*,
								  AbstractMutationOperator*,
								  AbstractChromosome**,
								  short mutationLikelihood,
								  unsigned int maximumIterations);

	virtual AbstractGeneticSolver(AbstractSelectionOperator*,
								  AbstractCrossoverOperator*,
								  unsigned int maximumIterations);

	virtual ~AbstractGeneticSolver();

	virtual void setFitnessFunction(AbstractFitnessFunction*);
	virtual AbstractFitnessFunction* getFitnessFunction();

	virtual void setSelectionOperator(AbstractSelectionOperator*);
	virtual AbstractFitnessFunction* getSelectionOperator();

	virtual void setCrossoverOperator(AbstractCrossoverOperator*);
	virtual AbstractCrossoverOperator* getCrossoverOperator();

	virtual void setMutationOperator(AbstractMutationOperator*);
	virtual AbstractMutationOperator* getMutationOperator();

	virtual void setPopulation(AbstractChromosome**);
	virtual AbstractChromosome** getPopulation();

	virtual void setMutationLikelihood(short mutationLikelihood);
	virtual short getMutationLikelihood();

	virtual void setMaximumIterations(unsigned int maximumIterations);
	virtual unsigned int getMaximumIterations();

	virtual void setInitialPopulationGenerator(AbstractInitialPopulationGenerator*);
	virtual AbstractInitialPopulationGenerator* getInitialPopulationGenerator();

	virtual void run();

};
