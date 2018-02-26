#include "ConceptConcreteMixes.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptConcreteMixes::ConceptConcreteMixes() :
		lazyConcreteMixes(gcnew System::Lazy<System::Collections::Generic::List<ConceptConcreteMix^>^>(gcnew System::Func<System::Collections::Generic::List<ConceptConcreteMix^>^>(this, &ConceptConcreteMixes::initializeConcreteMixes))) { }

	//METHODS//
	System::Collections::IEnumerator^ ConceptConcreteMixes::ConceptConcreteMixes::GetEnumerator()
	{
		return lazyConcreteMixes->Value->GetEnumerator();
	}
	System::Collections::Generic::List<ConceptConcreteMix^>^ ConceptConcreteMixes::initializeConcreteMixes()
	{
		System::Collections::Generic::List<ConceptConcreteMix^>^ concreteMixList;

		concreteMixList = gcnew System::Collections::Generic::List<ConceptConcreteMix^>();

		//TODO:
		//Fill the list with all the concreet mixes defined in RAM Concept.
		concreteMixList->Add(gcnew ConceptConcreteMix("3000 psi", 3000));
		concreteMixList->Add(gcnew ConceptConcreteMix("4000 psi", 4000));
		concreteMixList->Add(gcnew ConceptConcreteMix("5000 psi", 5000));
		concreteMixList->Add(gcnew ConceptConcreteMix("6000 psi", 6000));

		return concreteMixList;
	}
}