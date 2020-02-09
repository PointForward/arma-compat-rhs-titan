
class CfgAmmo {

    class MissileBase;
    class M_Titan_AT: MissileBase {
        submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "TandemHEAT";
    };

    class ammo_Penetrator_base;
    class ammo_Penetrator_Titan_AT: ammo_Penetrator_base {
        warheadName = "TandemHEAT";
    };
};
