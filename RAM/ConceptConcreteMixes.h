#pragma once

#include "IConceptConcreteMixes.h"
#include "ConceptConcreteMix.h"

namespace RAM
{
	private ref class ConceptConcreteMixKeyedCollection : public System::Collections::ObjectModel::KeyedCollection<System::String^, IConceptConcreteMix^> 
	{
	protected:
		virtual System::String^ GetKeyForItem(IConceptConcreteMix^ item) override;
	};

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("6448B57A-B07B-417A-8657-71A3C1F0B45F")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptConcreteMixes : public IConceptConcreteMixes, public System::Collections::Generic::IEnumerable<IConceptConcreteMix^>, System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::Generic::IEnumerator<IConceptConcreteMix^>^ GetTypedEnumerator() = System::Collections::Generic::IEnumerable<IConceptConcreteMix^>::GetEnumerator;
		virtual System::Collections::IEnumerator^ GetEnumerator();
		virtual IConceptConcreteMix^ add(System::String^ name, double fprimec);
		virtual void remove(System::String^ guid);
		property int count
		{
			virtual int get();
		}
		property IConceptConcreteMix^ default[int]
		{
			virtual IConceptConcreteMix^ get(int index);
		}
		property IConceptConcreteMix^ default[System::String^]
		{
			virtual IConceptConcreteMix^ get(System::String^ guid);
		}
	internal:
		ConceptConcreteMixes();
	private:
		ConceptConcreteMixKeyedCollection^ initializeConcreteMixes();
		initonly System::Lazy<ConceptConcreteMixKeyedCollection^>^ lazyConcreteMixes;
	};
}