OBJS_ARITHMETIC = out/Chromosome.o out/CrossoverOperator.o out/FitnessFunction.o out/InitialPopulationGenerator.o out/MutationOperator.o out/SelectionOperator.o out/GeneticArithmeticSolver.o out/main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

GeneticArithmeticSolver : $(OBJS_ARITHMETIC)
	$(CC) $(LFLAGS) $(OBJS_ARITHMETIC) -o out/GeneticArithmeticSolver

out/Chromosome.o: src/arithmetic/Chromosome.cpp src/arithmetic/header/Chromosome.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)  src/arithmetic/Chromosome.cpp -o out/Chromosome.o

out/CrossoverOperator.o: src/arithmetic/CrossoverOperator.cpp src/arithmetic/header/CrossoverOperator.h src/interfaces/AbstractCrossoverOperator.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)	src/arithmetic/CrossoverOperator.cpp -o out/CrossoverOperator.o

out/FitnessFunction.o: src/arithmetic/FitnessFunction.cpp src/arithmetic/header/FitnessFunction.h src/interfaces/AbstractFitnessFunction.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)	src/arithmetic/FitnessFunction.cpp -o out/FitnessFunction.o

out/InitialPopulationGenerator.o: src/arithmetic/InitialPopulationGenerator.cpp src/arithmetic/header/InitialPopulationGenerator.h src/interfaces/AbstractInitialPopulationGenerator.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)	src/arithmetic/InitialPopulationGenerator.cpp -o out/InitialPopulationGenerator.o

out/MutationOperator.o: src/arithmetic/MutationOperator.cpp src/arithmetic/header/MutationOperator.h src/interfaces/AbstractMutationOperator.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)	src/arithmetic/MutationOperator.cpp -o out/MutationOperator.o

out/SelectionOperator.o: src/arithmetic/SelectionOperator.cpp src/arithmetic/header/SelectionOperator.h src/interfaces/AbstractSelectionOperator.h src/interfaces/AbstractChromosome.h
	$(CC) $(CFLAGS)	src/arithmetic/SelectionOperator.cpp -o out/SelectionOperator.o

out/GeneticArithmeticSolver.o: src/arithmetic/GeneticArithmeticSolver.cpp src/arithmetic/header/GeneticArithmeticSolver.h
	$(CC) $(CFLAGS)	src/arithmetic/GeneticArithmeticSolver.cpp -o out/GeneticArithmeticSolver.o

out/main.o: src/main.cpp
	$(CC) $(CFLAGS)	src/main.cpp -o out/main.o

clean:
	rm out/*
