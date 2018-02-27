#include "ConceptCriteria.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptCriteria::ConceptCriteria()
	{
		concreteMixesObject = safe_cast<IConceptConcreteMixes^>(gcnew ConceptConcreteMixes());
	}

	//PROPERTIES//
	IConceptConcreteMixes^ ConceptCriteria::concreteMixes::get()
	{
		return concreteMixesObject;
	}
}