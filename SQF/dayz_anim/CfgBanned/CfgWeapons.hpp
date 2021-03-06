class CfgWeapons {
	//class Default: FakeWeapon {};
	//class PistolCore: FakeWeapon {};
	//class RifleCore: FakeWeapon {};
	//class MGunCore: FakeWeapon {};
	//class LauncherCore: FakeWeapon {};
	//class GrenadeCore: FakeWeapon {};
	//class CannonCore: FakeWeapon {};
	class RifleCore;
	class FakeWeapon: RifleCore
	{
		scope = 1;
		stopThis = true;
		type = 0;
		cursor = "";
		cursoraim = "";
		sound[] = {};
		magazines[] = {"FakeMagazine"};
	};
	
	//class MGun: FakeWeapon {};
	//class Pistol: FakeWeapon {};
	//class M9: FakeWeapon {};
	//class M9SD: FakeWeapon {};
	//class Makarov: FakeWeapon {};
	//class MakarovSD: FakeWeapon {};
	//class GrenadeLauncher: FakeWeapon {};
	//class Rifle: FakeWeapon {};
	//class M16_base: FakeWeapon {};
	//class M16A2: FakeWeapon {};
	//class M16A2GL: FakeWeapon {};
	//class m16a4: FakeWeapon {};
	//class m16a4_acg: FakeWeapon {};
	//class M16A4_GL: FakeWeapon {};
	//class M16A4_ACG_GL: FakeWeapon {};
	//class M24: FakeWeapon {};
	//class M40A3: FakeWeapon {};
	//class M240: FakeWeapon {};
	class M240_Small: FakeWeapon {};
	//class Mk_48: FakeWeapon {};
	class Mk_48_Small: FakeWeapon {};
	//class M249: FakeWeapon {};
	class M249_Small: FakeWeapon {};
	//class M4A1: FakeWeapon {};
	//class M4A1_Aim: FakeWeapon {};
	//class M4A1_Aim_camo: FakeWeapon {};
	//class M4SPR: FakeWeapon {};
	//class M4A1_RCO_GL: FakeWeapon {};
	//class M4A1_AIM_SD_camo: FakeWeapon {};
	//class M4A1_HWS_GL_SD_Camo: FakeWeapon {};
	//class M4A1_HWS_GL: FakeWeapon {};
	//class M4A1_HWS_GL_camo: FakeWeapon {};
	//class MP5SD: FakeWeapon {};
	//class MP5A5: FakeWeapon {};
	//class PK: FakeWeapon {};
	class PK_Small: FakeWeapon {};
	class Pecheneg: FakeWeapon {};
	//class SVD: FakeWeapon {};
	//class SVD_CAMO: FakeWeapon {};

	//class Launcher: FakeWeapon {};
	class ksvk: FakeWeapon {};
	class ksvk_Small: FakeWeapon {};
	class M136: FakeWeapon {};
	class Javelin: FakeWeapon {};
	class Stinger: FakeWeapon {};
	class RPG7V: FakeWeapon {};
	class Strela: FakeWeapon {};
	class Igla: FakeWeapon {};
	class MetisLauncher: FakeWeapon {};
	//class Binocular: FakeWeapon {};
	class Laserdesignator: FakeWeapon {};
	class Laserdesignator_mounted: FakeWeapon {};
	//class NVGoggles: FakeWeapon {};
	//class Throw: FakeWeapon {};
	//class HandGunBase: FakeWeapon {};
	//class Put: FakeWeapon {};
	//21sept // class TimeBomb: FakeWeapon {};
	class Mine: FakeWeapon {};
	class MineE: FakeWeapon {};
	//class PipeBomb: FakeWeapon {};
	//class SmokeLauncher: FakeWeapon {};
	//class FlareLauncher: FakeWeapon {};
	class M134: FakeWeapon {};
	class M134_2: FakeWeapon {};
	class TwinM134: FakeWeapon {};
	//class M240_veh: FakeWeapon {};
	//class M240_veh_2: FakeWeapon {};
	//class M240_veh_MG_Nest: FakeWeapon {};
	class PKT: FakeWeapon {};
	class PKT_MG_Nest: FakeWeapon {};
	class PKT_veh: FakeWeapon {};
	class DT_veh: FakeWeapon {};
	class TwinVickers: FakeWeapon {};
	class M2: FakeWeapon {};
	class M3P: FakeWeapon {};
	class DSHKM: FakeWeapon {};
	class KORD: FakeWeapon {};
	class KPVT: FakeWeapon {};
	class M168: FakeWeapon {};
	class M197: FakeWeapon {};
	class AZP85: FakeWeapon {};
	class 2A14: FakeWeapon {};
	class GAU12: FakeWeapon {};
	class 2A42: FakeWeapon {};
	class 2A72: FakeWeapon {};
	class M242: FakeWeapon {};
	class YakB: FakeWeapon {};
	class GSh23L: FakeWeapon {};
	class GSh302: FakeWeapon {};
	class GAU8: FakeWeapon {};
	class 2A38M: FakeWeapon {};
	class AGS30: FakeWeapon {};
	class AGS17: FakeWeapon {};
	class MK19: FakeWeapon {};
	class M119: FakeWeapon {};
	class M256: FakeWeapon {};
	class D30: FakeWeapon {};
	class D81: FakeWeapon {};
	class ZiS_S_53: FakeWeapon {};
	class 2A46M: FakeWeapon {};
	class RocketPods: FakeWeapon {};
	class FFARLauncher: FakeWeapon {};
	class FFARLauncher_14: FakeWeapon {};
	class CamelGrenades: FakeWeapon {};
	class 57mmLauncher: FakeWeapon {};
	class 57mmLauncher_64: FakeWeapon {};
	class 57mmLauncher_128: FakeWeapon {};
	class 80mmLauncher: FakeWeapon {};
	class S8Launcher: FakeWeapon {};
	class MissileLauncher: FakeWeapon {};
	class SidewinderLaucher: FakeWeapon {};
	class SidewinderLaucher_F35: FakeWeapon {};
	class SidewinderLaucher_AH1Z: FakeWeapon {};
	class AT5Launcher: FakeWeapon {};
	class AT5LauncherSingle: FakeWeapon {};
	class 2A46MRocket: FakeWeapon {};
	class AT10LauncherSingle: FakeWeapon {};
	class AT11LauncherSingle: FakeWeapon {};
	class AT13LauncherSingle: FakeWeapon {};
	class TOWLauncher: FakeWeapon {};
	class TOWLauncherSingle: FakeWeapon {};
	class HellfireLauncher: FakeWeapon {};
	class VikhrLauncher: FakeWeapon {};
	class BombLauncher: FakeWeapon {};
	class BombLauncherF35: FakeWeapon {};
	class BombLauncherA10: FakeWeapon {};
	
	//class SEARCHLIGHT: FakeWeapon {};
	//class CarHorn: FakeWeapon {};
	//class BikeHorn: FakeWeapon {};
	//class TruckHorn: FakeWeapon {};
	//class TruckHorn2: FakeWeapon {};
	//class SportCarHorn: FakeWeapon {};
	//class MiniCarHorn: FakeWeapon {};
	
	class GSh301: FakeWeapon {};
	class R73Launcher: FakeWeapon {};
	class R73Launcher_2: FakeWeapon {};
	class Ch29Launcher: FakeWeapon {};
	class Ch29Launcher_Su34: FakeWeapon {};
	class 2A70Rocket: FakeWeapon {};
	class 2A70: FakeWeapon {};
	class AT6Launcher: FakeWeapon {};
	class AT9Launcher: FakeWeapon {};
	class AT2Launcher: FakeWeapon {};
	class HeliBombLauncher: FakeWeapon {};
	class AirBombLauncher: FakeWeapon {};
	class Mk82BombLauncher: FakeWeapon {};
	class Mk82BombLauncher_6: FakeWeapon {};
	class StingerLaucher: FakeWeapon {};
	class StingerLauncher_twice: FakeWeapon {};
	class AALauncher_twice: FakeWeapon {};
	class Igla_twice: FakeWeapon {};
	class MaverickLauncher: FakeWeapon {};
	class 9M311Laucher: FakeWeapon {};
	class SPG9: FakeWeapon {};
	class GRAD: FakeWeapon {};
	class MLRS: FakeWeapon {};
	class WeaponExplosive: FakeWeapon {};
	//class ItemCore: FakeWeapon {};
	class Kostey_photos: FakeWeapon {};
	class Kostey_map_case: FakeWeapon {};
	class Kostey_notebook: FakeWeapon {};
	class CDF_dogtags: FakeWeapon {};
	class Moscow_Bombing_File: FakeWeapon {};
	class Cobalt_File: FakeWeapon {};
	//class ItemWatch: FakeWeapon {};
	//class ItemCompass: FakeWeapon {};
	//class ItemGPS: FakeWeapon {};
	//class ItemRadio: FakeWeapon {};
	//class ItemMap: FakeWeapon {};
	class EvPhoto: FakeWeapon {};
	//class EvMap: FakeWeapon {};
	class EvMoscow: FakeWeapon {};
	class EvKobalt: FakeWeapon {};
	class EvMoney: FakeWeapon {};
	class EvDogTags: FakeWeapon {};
	//class AK_BASE: FakeWeapon {};
	//class AKS_BASE: FakeWeapon {};
	//class AK_107_BASE: FakeWeapon	{};
	//class AK_47_M: FakeWeapon {};
	//class AK_47_S: FakeWeapon {};
	class AKS_GOLD: FakeWeapon {};
	//class AK_74: FakeWeapon {};
	//class AK_74_GL: FakeWeapon {};
	//class AK_107_kobra: FakeWeapon {};
	//class AK_107_GL_kobra: FakeWeapon {};
	class AK_107_GL_pso: FakeWeapon {};
	//class AK_107_pso: FakeWeapon {};
	//class AKS_74_kobra: FakeWeapon {};
	//class AKS_74_pso: FakeWeapon {};
	//class AKS_74_U: FakeWeapon {};
	//class AKS_74_UN_kobra: FakeWeapon {};
	//class RPK_74: FakeWeapon {};
	class RPK_74_Large: FakeWeapon {};
	//class bizon: FakeWeapon {};
	//class bizon_silenced: FakeWeapon {};
	//class Colt1911: FakeWeapon {};
	//class DMR: FakeWeapon {};
	//class M1014: FakeWeapon {};
	class m107: FakeWeapon {}; //old .50cal
	class m107_Small: FakeWeapon {};
	class M252: FakeWeapon {};
	class 2B14: FakeWeapon {};
	class Saiga12K: FakeWeapon {};
	class VSS_vintorez: FakeWeapon {};
	class PMC_documents: FakeWeapon {};
	class m8_base: FakeWeapon {};
	class m8_carbine: FakeWeapon {};
	class m8_carbineGL: FakeWeapon {};
	class m8_compact: FakeWeapon {};
	class m8_sharpshooter: FakeWeapon {};
	class m8_SAW: FakeWeapon {};
	class m8_SAW_Large: FakeWeapon {};
	//class huntingrifle: FakeWeapon {};
	class RPG18: FakeWeapon {};
	class SMAW: FakeWeapon {};
	//class PKT_2: FakeWeapon {};
	class PKT_3: FakeWeapon {};
	class SidewinderLaucher_AH64: FakeWeapon {};
	class M230: FakeWeapon {};
	
	//class BAF_L2A1: FakeWeapon {};
	//class BAF_M240_veh: FakeWeapon {};
	//class BAF_L7A2: FakeWeapon {};
	//class BAF_L94A1: FakeWeapon {};
	//class BAF_static_GMG: FakeWeapon {};
	//class BAF_GMG: FakeWeapon {};
	
	class CTWS: FakeWeapon {};
	class CRV7_PG: FakeWeapon {};
	class CRV7_HEPD: FakeWeapon {};
	class CRV7_FAT: FakeWeapon {};
	class M621: FakeWeapon {};
	class BAF_AS50_scoped: FakeWeapon {}; //old .50cal
	class BAF_AS50_scoped_Large: FakeWeapon {};
	class BAF_AS50_TWS: FakeWeapon {};
	class BAF_LRR_scoped: FakeWeapon {}; 
	class BAF_LRR_scoped_W: FakeWeapon {};
	class BAF_NLAW_Launcher: FakeWeapon {};
	class BAF_L17_40mm: FakeWeapon {};
	//class L85A2_base_BAF: FakeWeapon {};
	//class BAF_L85A2_RIS_Holo: FakeWeapon {};
	class BAF_L85A2_UGL_Holo: FakeWeapon {};
	//class BAF_L85A2_RIS_SUSAT: FakeWeapon {};
	class BAF_L85A2_UGL_SUSAT: FakeWeapon {};
	class BAF_L85A2_RIS_ACOG: FakeWeapon {};
	class BAF_L85A2_UGL_ACOG: FakeWeapon {};
	class BAF_L85A2_RIS_CWS: FakeWeapon {};
	class BAF_L86A2_ACOG: FakeWeapon {};
	class BAF_L110A1: FakeWeapon {};
	//class BAF_L110A1_Aim: FakeWeapon {};
	class BAF_L110A1_Aim_Small: FakeWeapon {};
	class BAF_L7A2_GPMG: FakeWeapon {};
	class BAF_ied_v1: FakeWeapon {};
	class BAF_ied_v2: FakeWeapon {};
	class BAF_ied_v3: FakeWeapon {};
	class BAF_ied_v4: FakeWeapon {};
	class M68: FakeWeapon {};
	class D10: FakeWeapon {};
	class PKTBC: FakeWeapon {};
	class PKTBC_veh: FakeWeapon {};
	class SGMT: FakeWeapon {};
	class HellfireLauncher_AH6: FakeWeapon {};
	class StingerLaucher_4x: FakeWeapon {};
	class CMFlareLauncher: FakeWeapon {};
	//class M242BC: FakeWeapon {};
	//class M240BC_veh: FakeWeapon {};
	class M2BC: FakeWeapon {};
	class MK19BC: FakeWeapon {};
	class M120: FakeWeapon {};
	//class Sa61_EP1: FakeWeapon {};
	//class UZI_EP1: FakeWeapon {};
	class UZI_SD_EP1: FakeWeapon {};
	//class revolver_EP1: FakeWeapon {};
	class revolver_gold_EP1: FakeWeapon {};
	//class glock17_EP1: FakeWeapon {};
	//class M60A4_EP1: FakeWeapon {};
	class M60A4_EP1_Small: FakeWeapon {};
	//class Mk_48_DES_EP1: FakeWeapon {};
	class Mk_48_DES_EP1_Small: FakeWeapon {};
	//class M249_EP1: FakeWeapon {};
	class M249_EP1_Small: FakeWeapon {};
	class M249_TWS_EP1: FakeWeapon {};
	class M249_TWS_EP1_Small: FakeWeapon {};
	class M249_m145_EP1: FakeWeapon {};
	class M249_m145_EP1_Small: FakeWeapon {};
	//class M24_des_EP1: FakeWeapon {};
	//class SVD_des_EP1: FakeWeapon {};
	//class SVD_NSPU_EP1: FakeWeapon {};
	//class Sa58P_EP1: FakeWeapon {};
	//class Sa58V_EP1: FakeWeapon {};
	//class Sa58V_RCO_EP1: FakeWeapon {};
	//class Sa58V_CCO_EP1: FakeWeapon {};
	//class M4A3_CCO_EP1: FakeWeapon {};
	//class M4A3_RCO_GL_EP1: FakeWeapon {};
	//class Binocular_Vector: FakeWeapon {};
	//class AK_74_GL_kobra: FakeWeapon {};
	//class AKS_74: FakeWeapon {};
	class MK_12: FakeWeapon {};
	class AKS_74_NSPU: FakeWeapon {};
	class AKS_74_GOSHAWK: FakeWeapon {};
	//class FN_FAL: FakeWeapon {};
	//class FN_FAL_ANPVS4: FakeWeapon {};
	class G36C_camo: FakeWeapon {};
	class G36_C_SD_camo: FakeWeapon {};
	class G36A_camo: FakeWeapon {};
	class G36K_camo: FakeWeapon {};
	//class G36C: FakeWeapon {};
	//class G36_C_SD_eotech: FakeWeapon {};
	class G36a: FakeWeapon {};
	class G36K: FakeWeapon {};
	class MG36: FakeWeapon {};
	class MG36_camo: FakeWeapon {};
	class MG36_camo_Large: FakeWeapon {};
	class GrenadeLauncher_EP1: FakeWeapon {};
	class M32_EP1: FakeWeapon {};
	class M79_EP1: FakeWeapon {};
	class Mk13_EP1: FakeWeapon {};
	//class LeeEnfield: FakeWeapon {};
	class m107_TWS_EP1: FakeWeapon {};
	class M110_TWS_EP1: FakeWeapon {};
	class M110_NVG_EP1: FakeWeapon {};
	//class M14_EP1: FakeWeapon {};
	//class m240_scoped_EP1: FakeWeapon {};
	class m240_scoped_EP1_Small: FakeWeapon {};
	class M47Launcher_EP1: FakeWeapon {};
	class MAAWS: FakeWeapon {};
	class SCAR_Base: FakeWeapon {};
	class SCAR_L_Base: FakeWeapon {};
	class SCAR_L_CQC: FakeWeapon {};
	class SCAR_L_CQC_Holo: FakeWeapon {};
	class SCAR_L_STD_Mk4CQT: FakeWeapon {};
	class SCAR_L_STD_EGLM_RCO: FakeWeapon {};
	class SCAR_L_CQC_EGLM_Holo: FakeWeapon {};
	class SCAR_L_STD_EGLM_TWS: FakeWeapon {};
	class SCAR_L_STD_HOLO: FakeWeapon {};
	class SCAR_L_CQC_CCO_SD: FakeWeapon {};
	class SCAR_H_Base: FakeWeapon {};
	class SCAR_H_CQC_CCO: FakeWeapon {};
	class SCAR_H_CQC_CCO_SD: FakeWeapon {};
	class SCAR_H_STD_EGLM_Spect: FakeWeapon {};
	class SCAR_H_LNG_Sniper: FakeWeapon {};
	class SCAR_H_LNG_Sniper_SD: FakeWeapon {};
	class SCAR_H_STD_TWS_SD: FakeWeapon {};
	class PKT_high_AI_dispersion: FakeWeapon {};
	class PKT_high_AI_dispersion_tank: FakeWeapon {};
	class AGS30_heli: FakeWeapon {};
	class M32_heli: FakeWeapon {};
	class AA12_PMC: FakeWeapon {};
	class PMC_AS50_scoped: FakeWeapon {};
	class PMC_AS50_scoped_Large: FakeWeapon {};
	class PMC_AS50_TWS: FakeWeapon {};
	class PMC_AS50_TWS_Large: FakeWeapon {};
	class m8_carbine_pmc: FakeWeapon {};
	class m8_compact_pmc: FakeWeapon {};
	class m8_holo_sd: FakeWeapon {};
	class m8_tws_sd: FakeWeapon {};
	class m8_tws: FakeWeapon {};
	class GSh23L_L39: FakeWeapon {};
	
};
