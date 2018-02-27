#pragma once

#include "IConceptConcreteMixes.h"
#include "ConceptConcreteMix.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("6448B57A-B07B-417A-8657-71A3C1F0B45F")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptConcreteMixes : public IConceptConcreteMixes, public System::Collections::Generic::IEnumerable<IConceptConcreteMix^>, System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::Generic::IEnumerator<IConceptConcreteMix^>^ GetTypedEnumerator() = System::Collections::Generic::IEnumerable<IConceptConcreteMix^>::GetEnumerator;
		virtual System::Collections::IEnumerator^ GetEnumerator();
		property int count
		{
			virtual int get();
		}
		property IConceptConcreteMix^ default[int]
		{
			virtual IConceptConcreteMix^ get(int index);
		}
	internal:
		ConceptConcreteMixes();
	private:
		System::Collections::Generic::List<IConceptConcreteMix^>^ initializeConcreteMixes();
		initonly System::Lazy<System::Collections::Generic::List<IConceptConcreteMix^>^>^ lazyConcreteMixes;
	};
}