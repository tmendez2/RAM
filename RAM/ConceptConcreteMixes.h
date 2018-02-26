#pragma once

#include "IConceptConcreteMixes.h"
#include "ConceptConcreteMix.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("6448B57A-B07B-417A-8657-71A3C1F0B45F")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptConcreteMixes : public IConceptConcreteMixes, System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator();
	internal:
		ConceptConcreteMixes();
	private:
		System::Collections::Generic::List<ConceptConcreteMix^>^ initializeConcreteMixes();
		initonly System::Lazy<System::Collections::Generic::List<ConceptConcreteMix^>^>^ lazyConcreteMixes;
	};
}