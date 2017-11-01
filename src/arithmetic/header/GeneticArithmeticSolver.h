#ifndef GENETICARITHMETICSOLVER_H
	#define GENETICARITHMETICSOLVER_H

	#include "../../interfaces/AbstractGeneticSolver.h"
	#include "Chromosome.h"
	#include "CrossoverOperator.h"
	#include "FitnessFunction.h"
	#include "MutationOperator.h"
	#include "SelectionOperator.h"
	#include "InitialPopulationGenerator.h"

	class GeneticArithmeticSolver
	{

	private:

		FitnessFunction* oFitnessOperator;
		SelectionOperator* oSelectionOperator;
		CrossoverOperator* oCrossoverOperator;
		MutationOperator* oMutationOperator;
		Chromosome** oPopulation;
		InitialPopulationGenerator* oInitialPopulationGenerator;
		unsigned int maximumIterations;
		short mutationLikelihood;
		unsigned int iteration;


	public:

		GeneticArithmeticSolver();

		GeneticArithmeticSolver(FitnessFunction *,
							  	SelectionOperator*,
								CrossoverOperator*,
								MutationOperator*,
								Chromosome**,
								short mutationLikelihood,
								unsigned int maximumIterations);

		GeneticArithmeticSolver(SelectionOperator*,
							  	CrossoverOperator*,
								unsigned int maximumIterations);

		~GeneticArithmeticSolver();

		void setFitnessFunction(FitnessFunction*);
		FitnessFunction* getFitnessFunction();

		void setSelectionOperator(SelectionOperator*);
		FitnessFunction* getSelectionOperator();

		void setCrossoverOperator(CrossoverOperator*);
		CrossoverOperator* getCrossoverOperator();

		void setMutationOperator(MutationOperator*);
		MutationOperator* getMutationOperator();

		void setPopulation(Chromosome**);
		Chromosome** getPopulation();

		void setMutationLikelihood(short mutationLikelihood);
		short getMutationLikelihood();

		void setMaximumIterations(unsigned int maximumIterations);
		unsigned int getMaximumIterations();

		void setInitialPopulationGenerator(InitialPopulationGenerator*);
		InitialPopulationGenerator* getInitialPopulationGenerator();

		void run();

	};

#endif
