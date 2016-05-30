class CfgPatches
{
	class CABuildings_Misc_StopLights
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CABuildings_Misc_Lamp"};
	};
};

class CfgVehicles {	
	class House;
	class Land_Stoplight02: House
	{
		scope = 1;
		displayName = "Stoplight (Small)";
		armor = 50;
		destructType = "tree";
		model = "\ca\buildings\Misc\stoplight02";
		class MarkerLights
		{
			class YellowLowBlinking
			{
				name = "LowLight";
				color[] = {0.075,0.05,0.007,1.0};
				ambient[] = {0.03,0.023,0.0056,1.0};
				activeLight = 0;
				blinking = 1;
				dayLight = 0;
				drawLight = 0;
				flareMaxDistance = 50;
				flareSize = 0.5;
				hitpoint = "";
				intensity = 150;
				size = 1;
				useFlare = 1;
			};
		};
		class AnimationSources {
			class yellowLight_Source {
				source = "MarkerLight"; 
				markerLight = "YellowLowBlinking";
			};
		};
	};
	class Land_Stoplight01: Land_Stoplight02 {
		displayName = "Stoplight (Big)";
		model = "\ca\buildings\Misc\stoplight01";
		class MarkerLights : MarkerLights {
			class YellowLowBlinking : YellowLowBlinking {};
			class YellowTopBlinking : YellowLowBlinking {
				name = "TopLight";
			};
		};
		
		class AnimationSources : AnimationSources {
			class yellowLight_Source : yellowLight_Source {};
		};
	};
};