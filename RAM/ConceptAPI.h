#pragma once

#include "IConceptAPI.h"
#include "ConceptCriteria.h"

namespace RAM
{
	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("936A2E37-2F73-40F1-99CC-B4A963E15FF4")]
	[System::Runtime::InteropServices::ClassInterface(System::Runtime::InteropServices::ClassInterfaceType::None)]
	public ref class ConceptAPI : public IConceptAPI
	{
	public:
		virtual property System::String^ filePath
		{
			System::String^ get();
		}
		virtual property IConceptCriteria^ criteria
		{
			IConceptCriteria^ get();
		}
	internal:
		ConceptAPI(int conceptProcessID);
	private:
		initonly int processID;
		initonly ConceptCriteria^ criteriaObject;
	};
}