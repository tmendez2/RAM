#pragma once

#include "IConceptConcreteMix.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("437548E7-8260-4FEB-A7C4-ED2A4E5515EC")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptConcreteMix : public IConceptConcreteMix
	{
	public:
		property System::String^ guid
		{
			virtual System::String^ get();
		}
		property System::String^ name
		{
			virtual System::String^ get();
			virtual void set(System::String^ value);
		}
		property double fprimec
		{
			virtual double get();
			virtual void set(double value);
		}
	internal:
		ConceptConcreteMix(System::String^ concreteMixGuid, System::String^ concreteMixName, double concreteMixFprimec);
	private:
		initonly System::String^ guidString;
		System::String^ nameString;
		double fprimecDouble;
	};
}