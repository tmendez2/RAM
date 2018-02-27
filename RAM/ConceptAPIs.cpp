#include "ConceptAPIs.h"

namespace RAM
{
	//CONSTRUCTOR//
	ConceptAPIs::ConceptAPIs(System::Collections::Generic::List<IConceptAPI^>^ conceptAPIs)
	{
		conceptAPICollection = gcnew System::Collections::ObjectModel::ReadOnlyCollection<IConceptAPI^>(conceptAPIs);
	}

	//METHODS//
	System::Collections::Generic::IEnumerator<IConceptAPI^>^ ConceptAPIs::GetTypedEnumerator()
	{
		return conceptAPICollection->GetEnumerator();
	}
	System::Collections::IEnumerator^ ConceptAPIs::GetEnumerator()
	{
		return safe_cast<System::Collections::IEnumerator^>(GetTypedEnumerator());
	}

	//PROPERTIES//
	int ConceptAPIs::count::get()
	{
		return conceptAPICollection->Count;
	}
	IConceptAPI^ ConceptAPIs::default::get(int index)
	{
		return conceptAPICollection[index];
	}
}