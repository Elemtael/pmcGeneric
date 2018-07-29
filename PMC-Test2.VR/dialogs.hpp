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