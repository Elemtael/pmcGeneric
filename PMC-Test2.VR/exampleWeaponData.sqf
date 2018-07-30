params ["_index"];

_bigAssArray = switch (_index) do {
	case 0:
	{ player sideChat "Nothing is selected."};

	case 1:
		{[
			["arifle_Katiba_F", 100, 25],
			["arifle_Mk20_F", 100, 25],
			["arifle_MXM_F", 100, 25]
		]};
	case 2:
	{};

	case 3:
	{};

	case 4:
	{};

	case 5:
	{};

	case 6:
	{};


};

_bigAssArray //Return List to script where function is called.