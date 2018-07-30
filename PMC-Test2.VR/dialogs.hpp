class homeMenu
{
	idd=9999;
	movingEnable=false;
		////////////////////////////////////////////////////////
		// GUI EDITOR OUTPUT START (by Elemtael, v1.063, #Nycaga)
		////////////////////////////////////////////////////////

		class controls
		{

			class baseFrame: RscFrame
			{
				idc = 1800;
				x = 0.304062 * safezoneW + safezoneX;
				y = 0.423 * safezoneH + safezoneY;
				w = 0.391875 * safezoneW;
				h = 0.154 * safezoneH;

			};
			class checkMoney: RscButton
			{
				idc = 1600;
				action= "closeDialog 0; null = execVM ""dialogFunctions\checkMoney.sqf""";
				text = "Account Balance"; //--- ToDo: Localize;
				x = 0.355625 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.0721875 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class storeVehicle: RscButton
			{
				idc = 1601;
				action= "closeDialog 0; null = execVM ""dialogFunctions\storeVehicle.sqf""";
				text = "Store Vehicle"; //--- ToDo: Localize;
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class retrieveVehicle: RscButton
			{
				idc = 1602;
				action= "closeDialog 0; call Elem_fnc_loadVehicleList";
				text = "Retrieve Vehicle"; //--- ToDo: Localize;
				x = 0.572187 * safezoneW + safezoneX;
				y = 0.445 * safezoneH + safezoneY;
				w = 0.0721875 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class purchaseWeapons: RscButton
			{
				idc = 1603;
				action= "closeDialog 0; createDialog ""garageMenu""";
				text = "Buy Weapons"; //--- ToDo: Localize;
				x = 0.355625 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.0721875 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class purchaseAmmo: RscButton
			{
				idc = 1604;
				action= "closeDialog 0;  call Elem_fnc_loadVehicleList";
				text = "Buy Ammo"; //--- ToDo: Localize;
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.044 * safezoneH;
			};
			class purchaseGear: RscButton
			{
				idc = 1605;
				action= "closeDialog 0; null = execVM ""dialogFunctions\purchaseGear.sqf""";
				text = "Buy Gear"; //--- ToDo: Localize;
				x = 0.572187 * safezoneW + safezoneX;
				y = 0.511 * safezoneH + safezoneY;
				w = 0.0721875 * safezoneW;
				h = 0.044 * safezoneH;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
		};
};
	class garageMenu
	{
		idd = 9998;
		movingEnable = false;


			class controls
			{
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT START (by Elemtael, v1.063, #Govudy)
			////////////////////////////////////////////////////////

			class baseGarage: RscFrame
			{
				idc = 1800;
				x = 0.438125 * safezoneW + safezoneX;
				y = 0.291 * safezoneH + safezoneY;
				w = 0.134062 * safezoneW;
				h = 0.352 * safezoneH;
			};
			class garageList: RscListbox
			{
				idc = 1500;
				x = 0.443281 * safezoneW + safezoneX;
				y = 0.302 * safezoneH + safezoneY;
				w = 0.12375 * safezoneW;
				h = 0.286 * safezoneH;

			};
			class garageSelect: RscButton
			{
				idc = 1600;
				text = "Select"; //--- ToDo: Localize;
				x = 0.448438 * safezoneW + safezoneX;
				y = 0.599 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.033 * safezoneH;
				onButtonClick = "[_ctrl] call Elem_fnc_selectVehicle";
			};
			class garageCancel: RscButton
			{
				idc = 1601;
				action = "closeDialog 0;"
				text = "Cancel"; //--- ToDo: Localize;
				x = 0.520625 * safezoneW + safezoneX;
				y = 0.599 * safezoneH + safezoneY;
				w = 0.04125 * safezoneW;
				h = 0.033 * safezoneH;
			};
			////////////////////////////////////////////////////////
			// GUI EDITOR OUTPUT END
			////////////////////////////////////////////////////////
			};
};

	class factionWeaponShop
	{
		idd = 9997;
		movingEnable = false;


			class controls
			{
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Elemtael, v1.063, #Fyrowu)
////////////////////////////////////////////////////////

class factionShopFrame: RscFrame
{
	idc = 1800;

	x = 0.345312 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.28875 * safezoneW;
	h = 0.407 * safezoneH;
};
class factionShopText: RscText
{
	idc = 1002;

	text = "Bob's Weapon Shop"; //--- ToDo: Localize;
	x = 0.4175 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.149531 * safezoneW;
	h = 0.044 * safezoneH;
	sizeEx = 2  * GUI_GRID_H;
};
class gunStoreComboBox: RscCombo
{
	idc = 2100;

	x = 0.355625 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.022 * safezoneH;
};
class comboBuy: RscButton
{
	idc = 1600;

	text = "Buy"; //--- ToDo: Localize;
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};
class comboCancel: RscButton
{
	idc = 1601;

	text = "Cancel"; //--- ToDo: Localize;
	x = 0.4175 * safezoneW + safezoneX;
	y = 0.654 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.022 * safezoneH;
};
class weaponPrice: RscText
{
	idc = 1002;

	text = "Weapon Price"; //--- ToDo: Localize;
	x = 0.530937 * safezoneW + safezoneX;
	y = 0.423 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
class weaponPriceVar: RscText
{
	idc = 1003;

	x = 0.525781 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = .8 * GUI_GRID_H;
};
class weaponQuantity: RscText
{
	idc = 1004;

	text = "Weapon Quantity"; //--- ToDo: Localize;
	x = 0.525781 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.022 * safezoneH;
};
class weaponQuantityVar: RscText
{
	idc = 1005;

	x = 0.54125 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0257812 * safezoneW;
	h = 0.022 * safezoneH;
	sizeEx = .8 * GUI_GRID_H;
};
class weaponList: RscListbox
{
	idc = 1500;
	x = 0.355625 * safezoneW + safezoneX;
	y = 0.368 * safezoneH + safezoneY;
	w = 0.113437 * safezoneW;
	h = 0.275 * safezoneH;
};
class ammoList: RscListbox
{
	idc = 1501;
	x = 0.489687 * safezoneW + safezoneX;
	y = 0.544 * safezoneH + safezoneY;
	w = 0.134062 * safezoneW;
	h = 0.132 * safezoneH;
};
class ammoTypes: RscText
{
	idc = 1002;

	text = "Ammo Types"; //--- ToDo: Localize;
	x = 0.530937 * safezoneW + safezoneX;
	y = 0.511 * safezoneH + safezoneY;
	w = 0.0567187 * safezoneW;
	h = 0.022 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////









			};

	};