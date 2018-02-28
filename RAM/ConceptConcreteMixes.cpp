#include "ConceptConcreteMixes.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptConcreteMixes::ConceptConcreteMixes()
	{
		//Note: concrete mixes are not queried from RAM Concept 
		//until they are needed by the client application.
		lazyConcreteMixes = gcnew System::Lazy<ConceptConcreteMixKeyedCollection^>(gcnew System::Func<ConceptConcreteMixKeyedCollection^>(this, &ConceptConcreteMixes::initializeConcreteMixes));
	}

	//METHODS//
	System::String^ ConceptConcreteMixKeyedCollection::GetKeyForItem(IConceptConcreteMix^ item)
	{
		return item->guid;
	}
	System::Collections::Generic::IEnumerator<IConceptConcreteMix^>^ ConceptConcreteMixes::GetTypedEnumerator()
	{
		return lazyConcreteMixes->Value->GetEnumerator();
	}
	System::Collections::IEnumerator^ ConceptConcreteMixes::GetEnumerator()
	{
		return safe_cast<System::Collections::IEnumerator^>(GetTypedEnumerator());
	}
	IConceptConcreteMix^ ConceptConcreteMixes::add(System::String^ name, double fprimec)
	{
		IConceptConcreteMix^ concreteMix;

		//TODO:
		//Add the concrete mix in RAM Concept.
		//Throw exceptions if the data is not valid.
		concreteMix = safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix(System::Guid::NewGuid().ToString(), name, fprimec));

		lazyConcreteMixes->Value->Add(concreteMix);
		return concreteMix;
	}
	void ConceptConcreteMixes::remove(System::String^ guid)
	{
		if (lazyConcreteMixes->Value->Contains(guid) == true)
		{
			//TODO:
			//Remove the concrete mix in RAM Concept.
			//Throw an exception if the mix cannot
			//be removed for any reason.
			lazyConcreteMixes->Value->Remove(guid);
		}
		else
		{
			throw gcnew System::Exception("The concrete mix was not found.");
		}
	}
	ConceptConcreteMixKeyedCollection^ ConceptConcreteMixes::initializeConcreteMixes()
	{
		ConceptConcreteMixKeyedCollection^ concreteMixCollection;

		concreteMixCollection = gcnew ConceptConcreteMixKeyedCollection();

		//TODO:
		//Fill the list with all the concrete mixes already defined in RAM Concept.
		concreteMixCollection->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("CF96D42C-55A9-4F31-96AF-A2B42CF88A0D", "3000 psi", 3000)));
		concreteMixCollection->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("DA974842-4100-4B56-8327-D40DA2154499", "4000 psi", 4000)));
		concreteMixCollection->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("7C11245E-1213-4101-A244-C2BCB343CFF1", "5000 psi", 5000)));
		concreteMixCollection->Add(safe_cast<IConceptConcreteMix^>(gcnew ConceptConcreteMix("86A08F3A-AEFE-4FFA-90A5-1F2FA5B89660", "6000 psi", 6000)));

		return concreteMixCollection;
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
	IConceptConcreteMix^ ConceptConcreteMixes::default::get(System::String^ guid)
	{
		return lazyConcreteMixes->Value[guid];
	}
}