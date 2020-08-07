#pragma once
#include "Faculty.h"

namespace NEON {

	[Serializable]
	public ref class ITManager : public Faculty {
	public:
		ITManager() {
			Type = "ItManager";
		}
	};
}