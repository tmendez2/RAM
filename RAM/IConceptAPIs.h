#pragma once

namespace RAM
{
	interface class IConceptAPI;

	[System::Runtime::InteropServices::ComVisible(true)]
	[System::Runtime::InteropServices::Guid("6B534199-45DB-4F30-AC90-91FD5B9DCD72")]
	public interface class IConceptAPIs : public System::Collections::Generic::IEnumerable<IConceptAPI^>, public System::Collections::IEnumerable
	{
	public:
		virtual System::Collections::IEnumerator^ GetEnumerator();
		property int count
		{
			virtual int get();
		}
		property IConceptAPI^ default[int]
		{
			virtual IConceptAPI^ get(int index);
		}
	};
}