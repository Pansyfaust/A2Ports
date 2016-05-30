class CfgPatches
{
	class CAStructures_E_Misc_Misc_Lamp
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1.02;
		requiredAddons[] = {CAStructures_E_Misc};
	};
};


class CfgVehicles {
	class Lamps_base_F;
	class Land_LampShabby_F : Lamps_base_F {};
	class Land_LampStreet_F : Lamps_base_F {
		class Reflectors {
			class Light_1 {};
		};
	};
	
	class Land_Lamp_Small_EP1 : Land_LampShabby_F {
		model = "ca\structures_e\Misc\Misc_Lamp\Lamp_Small_EP1.p3d";
	};
	class Land_lampa_ind_EP1 : Land_LampShabby_F {
		model = "ca\structures_e\Misc\Misc_Lamp\lampa_ind_EP1.p3d";
	};
	//OA streetlamps inherit one another.
	class Land_Lamp_Street1_EP1 : Land_LampStreet_F {
		model = "ca\structures_e\Misc\Misc_Lamp\Lamp_Street1_EP1.p3d";
	};
	class Land_Lamp_Street2_EP1 : Land_Lamp_Street1_EP1 {
		model = "ca\structures_e\Misc\Misc_Lamp\Lamp_Street2_EP1.p3d";
		aggregateReflectors[] = {{"Light_1","Light_2"}};
		class Reflectors : Reflectors {
			class Light_1 : Light_1 {};
			class Light_2 : Light_1 {
				direction = "Light_2_dir";
				hitpoint = "Light_2_hitpoint";
				position = "Light_2_pos";
				selection = "Light_2_hide";
			};
		};
	};
};