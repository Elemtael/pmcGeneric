params ["_index"];

//////////////////////////////////////////////////
// Default Format ["classname", price, quantity]//
//////////////////////////////////////////////////

_bigAssArray = switch (_index) do {
	case 0: // Default Selection
	{ player sideChat "Nothing is selected."};

	case 1: // Assault Rifles
		{[
			["arifle_Katiba_F", 100, 25],
			["arifle_Mk20_F", 100, 25],
			["arifle_MXM_F", 100, 25]
		]};
	case 2: // Machine Guns
	{};

	case 3: // Sniper Rifles
	{};

	case 4: // Pistols
	{};

	case 5: // Launchers
	{};

	case 6: // Ammo
	{};


};

_bigAssArray //Return List to script where function is called.