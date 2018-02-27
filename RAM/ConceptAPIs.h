#pragma once

#include "IConceptAPIs.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("D4F1ADD4-83F8-4E0B-BA3E-7E7FA46EBEA9")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptAPIs : public IConceptAPIs, public System::Collections::Generic::IEnumerable<IConceptAPI^>, System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::Generic::IEnumerator<IConceptAPI^>^ GetTypedEnumerator() = System::Collections::Generic::IEnumerable<IConceptAPI^>::GetEnumerator;
		virtual System::Collections::IEnumerator^ GetEnumerator();
		property int count
		{
			virtual int get();
		}
		property IConceptAPI^ default[int]
		{
			virtual IConceptAPI^ get(int index);
		}
	internal:
		ConceptAPIs(System::Collections::Generic::List<IConceptAPI^>^ conceptAPIs);
	private:
		initonly System::Collections::ObjectModel::ReadOnlyCollection<IConceptAPI^>^ conceptAPICollection;
	};
}