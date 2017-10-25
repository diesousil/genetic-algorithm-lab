#ifndef ABSTRACTMUTATIONOPERATOR_H
#define ABSTRACTMUTATIONOPERATOR_H

class AbstractMutationOperator
{
private:
	AbstractChromosome* oChromosome;

public:
	virtual AbstractMutationOperator(AbstractChromosome*);
	virtual ~AbstractMutationOperator();

	virtual void setChromosome(AbstractChromosome*);
	virtual AbstractChromosome* mutate();


};
