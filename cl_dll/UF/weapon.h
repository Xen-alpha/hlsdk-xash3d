#pragma once

//#include <cl_dll.h>

extern vec3_t g_vecZero;

#define MAX_WEAPON_SLOTS 5

#define WEAPON_NOCLIP -1

#define ROCKET_MAX_CLIP 4
#define SMG_MAX_CLIP 25
#define SHOTGUN_MAX_CLIP 6
#define STICKY_MAX_CLIP 8
#define GRENADE_MAX_CLIP 4
#define SCATTERGUN_MAX_CLIP 6
#define PISTOL_MAX_CLIP 12
#define REVOLVER_MAX_CLIP 6
#define SYRINGE_MAX_CLIP 40

#define _SNIPER_MAX_CARRY 25
#define _ROCKET_MAX_CARRY 20
#define _SMG_MAX_CARRY 75
#define _SHOTGUN_MAX_CARRY 32
#define _STICKY_MAX_CARRY 24
#define _GRENADE_MAX_CARRY 16
#define _SCATTERGUN_MAX_CARRY 32
#define _PISTOL_MAX_CARRY 36
#define _PISTOL_MAX_CARRY_ENG 200
#define _MINIGUN_MAX_CARRY 200
#define _FLAME_MAX_CARRY 200
#define _REVOLVER_MAX_CARRY 24
#define _SYRINGE_MAX_CARRY 150

#define ITEM_FLAG_SELECTONEMPTY 1
#define ITEM_FLAG_NOAUTORELOAD 2
#define ITEM_FLAG_NOAUTOSWITCHEMPTY 4
#define ITEM_FLAG_LIMITINWORLD 8
#define ITEM_FLAG_EXHAUSTIBLE 16

#define WEAPON_SLOT_PRIMARY 1
#define WEAPON_SLOT_SECONDARY 2//ckf
#define WEAPON_SLOT_MELEE 3

#define WEAPONSTATE_CHARGING (1<<3)


#include <ckfvars.h>

typedef CKFClientWeapon CClientWeapon;
typedef CKFClientPlayer CClientPlayer;

class CClientScattergun : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
	void Reloaded(void);
};

class CClientPistol : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
public:
	BOOL m_bForEngineer;
};

class CClientBat : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
};

class CClientRocketLauncher : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
	void Reloaded(void);
public:
};

class CClientShotgun : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
	void Reloaded(void);
public:
	BOOL m_bIsPrimary;
};

class CClientShovel : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
};

class CClientMinigun : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL CanHolster(void);
	void Holster(void);
	BOOL Deploy(void);
	void WeaponIdle(void);
	float GetMaxSpeed(void);
	void ItemPostFrame(void);
public:
	int m_iSpin;
	float m_fSpin;
};

class CClientFist : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
};

class CClientFlamethrower : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	void Holster(void);
	BOOL Deploy(void);
	void WeaponIdle(void);
public:
	int m_iState;
	float m_flState;
	int m_iAmmoConsumption;
};

class CClientFireaxe : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
public:
};

class CClientGrenadeLauncher : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
	void Reloaded(void);
public:
};

class CClientStickyLauncher : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Reload(void);
	void Reloaded(void);
	void WeaponIdle(void);
	void StopCharge(void);
	void ItemPostFrame(void);
	void StickyLauncherFire(void);
public:
	float m_fCharge;
	float m_fChargeTimer;
	int m_iStickyNum;
	int m_iMaxDeploy;
};

class CClientBottle : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
public:
	int m_bBroken;
};

class CClientSniperifle : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack(void);
	void SecondaryAttack(void);
	BOOL Deploy(void);
	void WeaponIdle(void);
	BOOL CanHolster(void);
	void Holster(void);
	void ItemPostFrame(void);
	void StartZoom(void);
	void StopZoom(void);
	float GetMaxSpeed(void);
public:
	int m_iResumeZoom;
	int m_fSpotActive;
	float m_fCharge;
	float m_fChargeTimer;
};

class CClientSMG : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
};

class CClientKukri : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
public:
};

class CClientSyringegun : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
public:
};

class CClientMedigun : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void WeaponIdle(void);
public:
	int m_iHealTarget;
};

class CClientBonesaw : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
public:
};

class CClientWrench : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
public:
};

class CClientBuildPDA : public CClientWeapon
{
public:
	void Precache(void);
	void SecondaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	BOOL CanHolster(void);
	void WeaponIdle(void);
public:
};

class CClientDestroyPDA : public CClientWeapon
{
public:
	void Precache(void);
	BOOL Deploy(void);
	void Holster(void);
	BOOL CanHolster(void);
	void WeaponIdle(void);
public:
};

class CClientRevolver : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Reload(void);
	void WeaponIdle(void);
};

class CClientButterfly : public CClientWeapon
{
public:
	void Precache(void);
	void PrimaryAttack( void );
	BOOL Deploy(void);
	void Holster(void);
	void Swing(void);
	void ItemPostFrame(void);
public:

};

class CClientSapper : public CClientWeapon
{
public:
	void Precache(void);
	BOOL Deploy(void);
	void ItemPostFrame(void);
public:
};

class CClientDisguiseKit : public CClientWeapon
{
public:
	void Precache(void);
	BOOL Deploy(void);
	void Holster(void);
	void WeaponIdle(void);
public:
};
#define MAX_WEAPONS		32	
extern CClientPlayer g_Player;
extern CClientWeapon *g_pClientWeapon[MAX_WEAPON_SLOTS];
extern CClientWeapon *g_pWeapons[MAX_WEAPONS];

float UTIL_WeaponTimeBase(void);
void HUD_PlaybackEvent(int flags, const edict_t *pInvoker, unsigned short eventindex, float delay, float *origin, float *angles, float fparam1, float fparam2, int iparam1, int iparam2, int bparam1, int bparam2 );
#define PLAYBACK_EVENT_FULL HUD_PlaybackEvent
#define PRECACHE_EVENT gEngfuncs.pfnPrecacheEvent

extern local_state_t *g_finalstate;
extern int g_runfuncs;

#define REGISTER_WEAPON(name, id) {g_pWeapons[id] = (CClientWeapon *)(&g_##name);g_##name.Precache();}

typedef	enum
{
	BULLET_NONE = 0,
	BULLET_PLAYER_MINIGUN,
	BULLET_PLAYER_SHOTGUN,
	BULLET_PLAYER_TF2,
	BULLET_PLAYER_SNIPERIFLE
}ev_bullet_t;

enum scattergun_e
{
	SCATTERGUN_IDLE1,
	SCATTERGUN_START_RELOAD,
	SCATTERGUN_RELOAD,
	SCATTERGUN_AFTER_RELOAD,
	SCATTERGUN_DRAW,
	SCATTERGUN_SHOOT
};

enum pistol_e
{
	PISTOL_IDLE1,
	PISTOL_RELOAD,
	PISTOL_DRAW,
	PISTOL_FIRE
};

enum bat_e
{
	BAT_IDLE,
	BAT_IDLE1,
	BAT_IDLE2,
	BAT_DRAW,
	BAT_IDLE3,
	BAT_IDLE4,
	BAT_SLASH1,
	BAT_SLASH2
};

enum rocketlauncher_e
{
	ROCKETLAUNCHER_IDLE,
	ROCKETLAUNCHER_START_RELOAD,
	ROCKETLAUNCHER_RELOAD,
	ROCKETLAUNCHER_AFTER_RELOAD,
	ROCKETLAUNCHER_DRAW,
	ROCKETLAUNCHER_SHOOT
};

enum shotgun_e
{
	SHOTGUN_IDLE1,
	SHOTGUN_START_RELOAD,
	SHOTGUN_RELOAD,
	SHOTGUN_AFTER_RELOAD,
	SHOTGUN_DRAW,
	SHOTGUN_SHOOT
};

enum shovel_e
{
	SHOVEL_IDLE,
	SHOVEL_IDLE1,
	SHOVEL_IDLE2,
	SHOVEL_DRAW,
	SHOVEL_IDLE3,
	SHOVEL_IDLE4,
	SHOVEL_SLASH1,
	SHOVEL_SLASH2
};

enum minigun_e
{
	MINIGUN_IDLE1,
	MINIGUN_SPIN_SHOOT,
	MINIGUN_DRAW,
	MINIGUN_WIND_UP,
	MINIGUN_WIND_DOWN,
	MINIGUN_SPIN_IDLE1
};

enum fist_e
{
	FIST_IDLE,
	FIST_IDLE1,
	FIST_IDLE2,
	FIST_DRAW,
	FIST_IDLE3,
	FIST_IDLE4,
	FIST_SLASH1,
	FIST_SLASH2
};

enum flamethrower_e
{
	FLAMETHROWER_IDLE,
	FLAMETHROWER_FIRE,
	FLAMETHROWER_AIRBLAST,
	FLAMETHROWER_DRAW
};

enum fireaxe_e
{
	FIREAXE_IDLE,
	FIREAXE_IDLE1,
	FIREAXE_IDLE2,
	FIREAXE_DRAW,
	FIREAXE_IDLE3,
	FIREAXE_IDLE4,
	FIREAXE_SLASH1,
	FIREAXE_SLASH2,
	FIREAXE_STAB
};

enum grenadelauncher_e
{
	GRENADELAUNCHER_IDLE,
	GRENADELAUNCHER_START_RELOAD,
	GRENADELAUNCHER_RELOAD,
	GRENADELAUNCHER_AFTER_RELOAD,
	GRENADELAUNCHER_DRAW,
	GRENADELAUNCHER_SHOOT
};

enum stickylauncher_e
{
	STICKYLAUNCHER_IDLE,
	STICKYLAUNCHER_START_RELOAD,
	STICKYLAUNCHER_RELOAD,
	STICKYLAUNCHER_AFTER_RELOAD,
	STICKYLAUNCHER_DRAW,
	STICKYLAUNCHER_SHOOT
};

enum bottle_e
{
	BOTTLE_IDLE,
	BOTTLE_SLASH1_BREAK,
	BOTTLE_SLASH2_BREAK,
	BOTTLE_DRAW,
	BOTTLE_SLASH1_BROKEN,
	BOTTLE_SLASH2_BROKEN,
	BOTTLE_SLASH1,
	BOTTLE_SLASH2,
	BOTTLE_IDLE_BROKEN,
	BOTTLE_DRAW_BROKEN
};

enum sniperifle_e
{
	SNIPERIFLE_IDLE1,
	SNIPERIFLE_IDLE2,
	SNIPERIFLE_DRAW,
	SNIPERIFLE_FIRE
};

enum smg_e
{
	SMG_IDLE1,
	SMG_RELOAD,
	SMG_DRAW,
	SMG_FIRE
};

enum kukri_e
{
	KUKRI_IDLE,
	KUKRI_IDLE1,
	KUKRI_IDLE2,
	KUKRI_DRAW,
	KUKRI_IDLE3,
	KUKRI_IDLE4,
	KUKRI_SLASH1,
	KUKRI_SLASH2,
	KUKRI_STAB
};

enum syringegun_e
{
	SYRINGEGUN_IDLE,
	SYRINGEGUN_RELOAD,
	SYRINGEGUN_DRAW,
	SYRINGEGUN_SHOOT
};

enum medigun_e
{
	MEDIGUN_IDLE1,
	MEDIGUN_DRAW,
	MEDIGUN_HEAL,
	MEDIGUN_UBER
};

enum bonesaw_e
{
	BONESAW_IDLE,
	BONESAW_IDLE1,
	BONESAW_IDLE2,
	BONESAW_DRAW,
	BONESAW_IDLE3,
	BONESAW_IDLE4,
	BONESAW_SLASH1,
	BONESAW_SLASH2,
	BONESAW_STAB
};

enum wrench_e
{
	WRENCH_IDLE,
	WRENCH_IDLE1,
	WRENCH_IDLE2,
	WRENCH_DRAW,
	WRENCH_IDLE3,
	WRENCH_IDLE4,
	WRENCH_SLASH1,
	WRENCH_SLASH2,
	WRENCH_STAB
};

enum buildpda_e
{
	BUILDPDA_IDLE1,
	BUILDPDA_DRAW
};

enum destroypda_e
{
	DESTROYPDA_IDLE1,
	DESTROYPDA_DRAW
};

enum revolver_e
{
	REVOLVER_IDLE1,
	REVOLVER_RELOAD,
	REVOLVER_DRAW,
	REVOLVER_FIRE
};

enum butterfly_e
{
	BUTTERFLY_IDLE,
	BUTTERFLY_HANDUP,
	BUTTERFLY_HANDIDLE,
	BUTTERFLY_DRAW,
	BUTTERFLY_IDLE2,
	BUTTERFLY_IDLE3,
	BUTTERFLY_SLASH1,
	BUTTERFLY_SLASH2,
	BUTTERFLY_HANDDOWN,
	BUTTERFLY_STAB
};

enum sapper_e
{
	SAPPER_IDLE1,
	SAPPER_DRAW,
	SAPPER_DRAW2
};

enum disguisekit_e
{
	DISGUISEKIT_IDLE1,
	DISGUISEKIT_DRAW
};

enum minigun_state_e
{
	STATE_MINIGUN_NONE,
	STATE_MINIGUN_WINDUP,
	STATE_MINIGUN_SPIN,
	STATE_MINIGUN_FIRE,
	STATE_MINIGUN_FIRECRIT,
	STATE_MINIGUN_WINDDOWN
};

enum flamethrower_state_e
{
	STATE_FLAMETHROWER_IDLE,
	STATE_FLAMETHROWER_START,
	STATE_FLAMETHROWER_LOOP,
	STATE_FLAMETHROWER_LOOP_CRIT,
	STATE_FLAMETHROWER_AIRBLAST
};