class CfgPatches
{
	class CAStructures_Land_Rail_Semafor
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAStructures","CAStructures_Rail"};
	};
};
class CfgVehicles
{
	class House;
	class Land_Rail_Semafor: House
	{
		scope = 1;
		model = "\CA\Structures\Rail\Rail_Misc\rail_Semafor";
		destrType = "DestructTree";
		class MarkerLights
		{
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.0042,0.032,0.003,1.0};
				ambient[] = {0.01,0.1,0.01,1.0};
				blinking = 0;
				activeLight = 0;
				dayLight = 0;
				drawLight = 0;
				flareMaxDistance = 500;
				flareSize = 0.75;
				hitpoint = "";
				intensity = 250;
				size = 1;
				useFlare = 1;
			};
		};
	};
};
