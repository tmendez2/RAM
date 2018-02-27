#include "ConceptConcreteMixes.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptConcreteMixes::ConceptConcreteMixes()
	{
		lazyConcreteMixes = gcnew System::Lazy<System::Collections::Generic::List<IConceptConcreteMix^>^>(gcnew System::Func<System::Collections::Generic::List<IConceptConcreteMix^>^>(this, &ConceptConcreteMixes::initializeConcreteMixes));
	}

	//METHODS//
	System::Collections::Generic::IEnumerator<IConceptConcreteMix^>^ ConceptConcreteMixes::GetTypedEnumerator()
	{
		return lazyConcreteMixes->Value->GetEnumerator();
	}
	System::Collections::IEnumerator^ ConceptConcreteMixes::GetEnumerator()
	{
		return safe_cast<System::Collections::IEnumerator^>(GetTypedEnumerator());
	}
	System::Collections::Generic::List<IConceptConcreteMix^>^ ConceptConcreteMixes::initializeConcreteMixes()
	{
		System::Collections::Generic::List<IConceptConcreteMix^>^ concreteMixList;

		concreteMixList = gcnew System::Collections::Generic::List<IConceptConcreteMix^>();

		//TODO:
		//Fill the list with all the concreet mixes defined in RAM Concept.
		concreteMixList->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("3000 psi", 3000)));
		concreteMixList->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("4000 psi", 4000)));
		concreteMixList->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("5000 psi", 5000)));
		concreteMixList->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("6000 psi", 6000)));

		return concreteMixList;
	}

	//PROPERTIES//
	int ConceptConcreteMixes::count::get()
	{
		return lazyConcreteMixes->Value->Count;
	}
	IConceptConcreteMix^ ConceptConcreteMixes::default::get(int index)
	{
		return lazyConcreteMixes->Value[index];
	}
}