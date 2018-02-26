#pragma once

#include "IConceptCriteria.h"
#include "ConceptConcreteMixes.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("1142258F-B642-4F23-BEDF-DF142849EEF2")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptCriteria : public IConceptCriteria
	{
	public:
		virtual property IConceptConcreteMixes^ concreteMixes
		{
			IConceptConcreteMixes^ get();
		}
	internal:
		ConceptCriteria();
	private:
		initonly ConceptConcreteMixes^ concreteMixesObject;
	};
}