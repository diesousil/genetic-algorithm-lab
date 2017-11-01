#include "header/GeneticArithmeticSolver.h"

		GeneticArithmeticSolver::GeneticArithmeticSolver() {

		}

		GeneticArithmeticSolver::GeneticArithmeticSolver(FitnessFunction *,
							  	SelectionOperator*,
								CrossoverOperator*,
								MutationOperator*,
								Chromosome**,
								short mutationLikelihood,
								unsigned int maximumIterations) {

		}

		GeneticArithmeticSolver::GeneticArithmeticSolver(SelectionOperator*,
							  	CrossoverOperator*,
								unsigned int maximumIterations) {

		}

		GeneticArithmeticSolver::~GeneticArithmeticSolver() {

		}

		void GeneticArithmeticSolver::setFitnessFunction(FitnessFunction*) {

		}

		FitnessFunction* GeneticArithmeticSolver::getFitnessFunction() {

		}

		void GeneticArithmeticSolver::setSelectionOperator(SelectionOperator*) {

		}

		FitnessFunction* GeneticArithmeticSolver::getSelectionOperator() {

		}

		void GeneticArithmeticSolver::setCrossoverOperator(CrossoverOperator*) {

		}

		CrossoverOperator* GeneticArithmeticSolver::getCrossoverOperator() {

		}

		void GeneticArithmeticSolver::setMutationOperator(MutationOperator*) {

		}

		MutationOperator* GeneticArithmeticSolver::getMutationOperator() {

		}

		void GeneticArithmeticSolver::setPopulation(Chromosome**) {

		}

		Chromosome** GeneticArithmeticSolver::getPopulation() {

		}

		void GeneticArithmeticSolver::setMutationLikelihood(short mutationLikelihood) {

		}

		short GeneticArithmeticSolver::getMutationLikelihood() {

		}

		void GeneticArithmeticSolver::setMaximumIterations(unsigned int maximumIterations) {

		}

		unsigned int GeneticArithmeticSolver::getMaximumIterations() {

		}

		void GeneticArithmeticSolver::setInitialPopulationGenerator(InitialPopulationGenerator*) {

		}

		InitialPopulationGenerator* GeneticArithmeticSolver::getInitialPopulationGenerator() {

		}

		void GeneticArithmeticSolver::run() {

		}
