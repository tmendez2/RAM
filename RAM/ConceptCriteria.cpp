#include "ConceptCriteria.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptCriteria::ConceptCriteria() :
		concreteMixesObject(gcnew ConceptConcreteMixes()) { }

	//PROPERTIES//
	IConceptConcreteMixes^ ConceptCriteria::concreteMixes::get()
	{
		return safe_cast<IConceptConcreteMixes^>(concreteMixesObject);
	}
}