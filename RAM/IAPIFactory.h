#pragma once

namespace RAM
{
	interface class IConceptAPI;
	interface class IConceptAPIs;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("11AE3B1F-DFCE-480D-8DFE-2238F73D103E")]
	public interface class IAPIFactory
	{
	public:
		virtual IConceptAPI^ createConceptAPI();
		property IConceptAPIs^ conceptAPIs
		{
			virtual IConceptAPIs^ get();
		}
	};
}