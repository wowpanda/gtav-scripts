#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<5> Local_43 = { 0, 0, 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	bool bLocal_46 = 0;
	bool bLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	char* sLocal_50 = NULL;
	struct<5> Local_51 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_52 = { 0f, 0f, 0f };
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_44 = -1;
	iLocal_45 = -1;
	fLocal_48 = 1.7f;
	fLocal_49 = 0f;
	sLocal_50 = "";
	iLocal_53 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_155();
	}
	Local_43 = { ScriptParam_55 };
	func_154();
	func_153();
	func_148(iLocal_44, 0, 0);
	SYSTEM::SETTIMERA(0);
	func_147();
	func_143();
	while (true)
	{
		SYSTEM::WAIT(0);
		func_142(iLocal_44);
		func_141();
		func_139();
		func_132();
		func_148(iLocal_44, 0, 0);
		func_154();
		func_9();
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
		{
			func_1();
		}
	}
}

void func_1()
{
	if (func_7() || func_6())
	{
		func_5();
		func_2();
	}
}

void func_2()
{
	if ((!func_4() && !func_3()) && Global_2448722)
	{
		Global_4456448.f_126776 = 0;
	}
}

bool func_3()
{
	return Global_2447942.f_579;
}

bool func_4()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_196 != 0;
}

void func_5()
{
	Global_2447942.f_643 = 1;
}

var func_6()
{
	return Global_2447942.f_622;
}

bool func_7()
{
	return MISC::IS_BIT_SET(Global_2447942.f_2, 11);
}

bool func_8()
{
	return MISC::IS_BIT_SET(Global_2448723.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		func_155();
	}
	if (bLocal_46)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_155();
		}
	}
	func_131();
	bVar0 = true;
	switch (vLocal_52.x)
	{
		case 4:
			func_130();
			return;
		
		case 5:
			func_127();
			return;
		
		case 6:
			func_125();
			return;
		
		case 7:
			func_124();
			return;
		
		case 8:
			func_123();
			return;
		
		case 9:
			func_121();
			return;
		
		case 10:
			func_120();
			func_117();
			func_116();
			return;
		
		case 11:
			func_115();
			return;
		
		case 12:
			break;
		
		default:
			bVar0 = false;
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (!vLocal_52.x == 12)
	{
		return;
	}
	switch (vLocal_52.y)
	{
		case 1:
			if (!func_114())
			{
				func_110();
				func_117();
			}
			break;
		
		case 2:
			func_108();
			break;
		
		case 12:
			func_95();
			break;
		
		case 3:
			func_10();
			break;
		
		default:
			break;
	}
}

void func_10()
{
	var uVar0;
	char* sVar1;
	struct<53> Var2;
	int iVar3;
	
	PED::SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	Global_1662299 = 1;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(2500);
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_94(&uVar0, 0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(PLAYER::PLAYER_PED_ID(), 0, 1);
		}
		while ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0)) && NETWORK::_0x422F32CC7E56ABAD(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_84(PLAYER::PLAYER_ID(), 0, 57344);
		Global_2405070.f_2661 = 1;
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			Global_2405070.f_2662 = 1;
		}
		else
		{
			Global_2405070.f_2662 = 0;
		}
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
		}
		if (func_80(1))
		{
			func_67(0);
		}
		func_65(1);
		func_155();
	}
	sVar1 = "";
	Var2.f_3 = 1064514355;
	Var2.f_30 = 1148829696;
	Var2.f_31 = 1148829696;
	Var2.f_52 = 1148829696;
	iVar3 = 7;
	switch (func_60())
	{
		case 0:
			if (func_58() != 2)
			{
				iVar3 = 0;
			}
			else
			{
				iVar3 = 1;
			}
			break;
		
		case 1:
			if (!func_57(126))
			{
				iVar3 = 2;
			}
			else
			{
				iVar3 = 3;
			}
			break;
		
		case 2:
			if (!func_56(4))
			{
				if (func_57(58))
				{
					iVar3 = 4;
				}
				if (func_57(59))
				{
					iVar3 = 5;
				}
				if (iVar3 == 7)
				{
					if (!func_55())
					{
						iVar3 = 4;
					}
					else
					{
						iVar3 = 5;
					}
				}
			}
			else
			{
				iVar3 = 6;
			}
			break;
	}
	switch (iVar3)
	{
		case 0:
			sVar1 = "DWC_MICHAEL_mansion";
			Var2 = "SAVEM_Default@";
			Var2.f_1 = "M_GetOut_R";
			Var2.f_2 = "M_GetOut_R_CAM";
			Var2.f_5 = { -814.181f, 181.1f, 75.74f };
			Var2.f_8 = { 0f, 0f, 21.1994f };
			Var2.f_4 = -1871534317;
			break;
		
		case 1:
			sVar1 = "DWC_MICHAEL_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "M_GetOut_countryside";
			Var2.f_2 = "M_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 2:
			sVar1 = "DWC_FRANKLIN_city";
			Var2 = "SWITCH@FRANKLIN@BED";
			Var2.f_1 = "Sleep_GetUp_RubEyes";
			Var2.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var2.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var2.f_8 = { 0f, 0f, -179.653f };
			Var2.f_4 = -1871534317;
			break;
		
		case 3:
			sVar1 = "DWC_FRANKLIN_hills";
			Var2 = "SAVEBighouse@";
			Var2.f_1 = "F_GetOut_r_bighouse";
			Var2.f_2 = "F_GetOut_r_bighouse_CAM";
			Var2.f_5 = { -1.049f, 524.283f, 170.064f };
			Var2.f_8 = { 0f, 0f, 24f };
			Var2.f_4 = -1871534317;
			break;
		
		case 4:
			sVar1 = "DWC_TREVOR_trailer";
			Var2 = "SAVECountryside@";
			Var2.f_1 = "T_GetOut_countryside";
			Var2.f_2 = "T_GetOut_countryside_CAM";
			Var2.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
		
		case 5:
			sVar1 = "DWC_TREVOR_beach";
			Var2 = "SAVEVeniceB@";
			Var2.f_1 = "T_GetOut_r_veniceB";
			Var2.f_2 = "T_GetOut_r_veniceB_CAM";
			Var2.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var2.f_8 = { 0f, 0f, 36.25f };
			Var2.f_4 = -1871534317;
			break;
		
		case 6:
			sVar1 = "DWC_TREVOR_stripclub";
			Var2 = "SAVECouch@";
			Var2.f_1 = "T_GetOut_couch";
			Var2.f_2 = "T_GetOut_couch_CAM";
			Var2.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var2.f_8 = { 0f, 0f, 29.7938f };
			Var2.f_4 = -1871534317;
			break;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		ENTITY::SET_ENTITY_COORDS(Local_43.f_1, Var2.f_5, 1, false, 0, 1);
	}
	SYSTEM::WAIT(500);
	StringCopy(&(Var2.f_11), "", 16);
	Var2.f_15 = -1f;
	func_12(sVar1, &Var2, "");
	func_11(126, 1);
	func_155();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51709[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51709[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_51709[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar10;
	int iVar11;
	char* sVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	float fVar21;
	vector3 vVar22;
	vector3 vVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	vector3 vVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	vector3 vVar31;
	vector3 vVar32;
	float fVar33;
	int iVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	float fVar38;
	float fVar39;
	float fVar40;
	vector3 vVar41;
	vector3 vVar42;
	float fVar43;
	int iVar44;
	bool bVar45;
	bool bVar46;
	int iVar47;
	
	fVar0 = 0f;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
	}
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	MISC::CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, false);
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uParam1->f_5, 1, false, 0, 1);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
	SYSTEM::WAIT(0);
	MISC::SET_GAME_PAUSED(true);
	STREAMING::REQUEST_ANIM_DICT(*uParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_50(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = MISC::GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
		STREAMING::REQUEST_ANIM_DICT(*uParam1);
		if (!STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			STREAMING::REQUEST_ANIM_DICT(uParam1->f_16);
			if (!STREAMING::HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		SYSTEM::WAIT(0);
	}
	func_47();
	if (!func_46(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, false, 1);
		MISC::CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, false, 0);
		MISC::CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (SYSTEM::VMAG(uParam1->f_22) + 25f), 1, 0, 0, false);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	MISC::SET_GAME_PAUSED(false);
	MISC::CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, false);
	PED::_0x4759CC730F947C81();
	VEHICLE::_0x48ADC8A773564670();
	func_44();
	while (func_43())
	{
		SYSTEM::WAIT(0);
	}
	if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
	{
		CAM::DO_SCREEN_FADE_IN(250);
	}
	MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar4 = PED::CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, false);
		PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iVar4, false);
		iVar5 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", true);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_41(PLAYER::PLAYER_PED_ID(), uParam1->f_18);
		BRAIN::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		PED::_0x129466ED55140F8D(PLAYER::PLAYER_PED_ID(), 1);
		PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
		bVar3 = PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, true);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iVar5, iVar4, uParam1->f_2, *uParam1);
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			BRAIN::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_40(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar10 = func_60();
		iVar11 = -1;
		sVar12 = "";
		switch (iVar10)
		{
			case 0:
				iVar11 = 0;
				sVar12 = "MICHAEL";
				break;
			
			case 1:
				iVar11 = 1;
				sVar12 = "FRANKLIN";
				break;
			
			case 2:
				iVar11 = 2;
				sVar12 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_39(&uVar9, iVar11, PLAYER::PLAYER_PED_ID(), sVar12, 0, 1);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar13 = "WalkInterruptible";
		sVar14 = "ForceBlendout";
		while (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!bVar8)
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						GRAPHICS::_START_SCREEN_EFFECT(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, false);
							bVar8 = true;
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, false);
							bVar8 = true;
						}
					}
				}
			}
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::CLEAR_REMINDER_MESSAGE();
			func_35(0);
			iVar15 = MISC::GET_GAME_TIMER();
			if (iVar15 >= (Global_36456 - 500))
			{
				func_34(4000);
			}
			fVar16 = -1f;
			fVar17 = -1f;
			fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
			{
				if (!bVar7)
				{
					if (fVar0 >= uParam1->f_15)
					{
						if (func_22(&uVar9, "PRSAUD", &(uParam1->f_11), 3, 0, 0, 0))
						{
							bVar7 = true;
						}
					}
				}
			}
			iVar18 = 0;
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar13)))
			{
				iVar19 = (PAD::GET_CONTROL_VALUE(2, 195) - 128);
				iVar20 = (PAD::GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar19 < 64 && iVar19 > -64) && iVar20 < 64) && iVar20 > -64)
				{
				}
				else
				{
					iVar18 = 1;
				}
			}
			else
			{
				fVar16 = -1f;
				fVar17 = -1f;
				iVar18 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar16 = fVar16;
				fVar17 = fVar17;
			}
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar21 = 1.5f;
						vVar22 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar23 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar22, vVar23, true);
						fVar21 = func_21(fVar21, 0.001f, (fVar24 - 0.75f));
						if (fVar21 < 0f)
						{
							fVar21 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER::PLAYER_PED_ID(), func_60(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = MISC::GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar27 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
							fVar28 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
							fVar29 = vVar27.z;
							fVar30 = fVar28;
							uParam1->f_57 = (fVar29 - fVar30);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						fVar25 = uParam1->f_56;
						fVar26 = uParam1->f_57;
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar25, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar26);
						CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(fVar25);
						CAM::_SET_GAMEPLAY_CAM_RAW_YAW(fVar26);
						vVar31 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						vVar32 = { CAM::GET_GAMEPLAY_CAM_COORD() };
						fVar33 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar31, vVar32, true);
						iVar34 = SYSTEM::ROUND((fVar33 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						CAM::_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY(sVar14)) || iVar18)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
				{
					BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, true, 0, 0);
							CAM::_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							break;
						
						case -668482597:
							PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, true, 0, 0);
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 500, 0f, 1, 0);
							if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar37 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
									fVar38 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar39 = vVar37.z;
									fVar40 = fVar38;
									uParam1->f_31 = (fVar39 - fVar40);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								fVar35 = uParam1->f_30;
								fVar36 = uParam1->f_31;
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar35, 1065353216);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar36);
								vVar41 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
								vVar42 = { CAM::GET_GAMEPLAY_CAM_COORD() };
								fVar43 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar41, vVar42, true);
								iVar44 = SYSTEM::ROUND((fVar43 * 1000f));
								CAM::RENDER_SCRIPT_CAMS(false, true, iVar44, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			SYSTEM::WAIT(0);
		}
	}
	if (!func_46(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, true);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		BRAIN::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	bVar45 = CAM::_0x3044240D2E0FA842();
	bVar46 = false;
	if (uParam1->f_32)
	{
		CAM::_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar46 = true;
		}
	}
	if (bVar45 || bVar46)
	{
		while ((bVar45 || bVar46) && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar45)
			{
			}
			if (bVar46)
			{
			}
			iVar47 = 2;
			func_15(1, 26, &iVar47);
			func_15(1, 79, &iVar47);
			func_15(1, 1, &iVar47);
			func_15(1, 2, &iVar47);
			func_15(0, 22, &iVar47);
			func_15(0, 36, &iVar47);
			func_15(0, 142, &iVar47);
			func_15(0, 141, &iVar47);
			func_15(0, 140, &iVar47);
			func_15(0, 263, &iVar47);
			func_15(0, 264, &iVar47);
			SYSTEM::WAIT(0);
			bVar45 = CAM::_0x3044240D2E0FA842();
			bVar46 = false;
			if (uParam1->f_32)
			{
				CAM::_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar46 = true;
				}
			}
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		STREAMING::REMOVE_ANIM_DICT(uParam1->f_16);
	}
	STREAMING::REMOVE_ANIM_DICT(*uParam1);
	CAM::DESTROY_CAM(iVar5, 0);
	func_13(&(uParam1->f_34));
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 77, bVar3);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	}
	sParam0 = sParam0;
}

void func_13(var uParam0)
{
	func_14(uParam0);
	*uParam0 = 0;
	uParam0->f_9 = { 0f, 0f, 0f };
}

void func_14(var uParam0)
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_2))
	{
		CAM::DESTROY_CAM(uParam0->f_2, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_3))
	{
		CAM::DESTROY_CAM(uParam0->f_3, 0);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_4))
	{
		CAM::DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	PAD::DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	float fVar7;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
				if (bParam1)
				{
					vVar0 = { vVar0 + ENTITY::GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar2 = { CAM::_GET_GAMEPLAY_CAM_ROT(2) };
				vVar3 = { vVar2 + uParam0->f_9 };
				vVar4 = { vVar3 - ENTITY::GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar5 = { (-SYSTEM::SIN(vVar3.z) * SYSTEM::COS(vVar3.x)), (SYSTEM::COS(vVar3.z) * SYSTEM::COS(vVar3.x)), SYSTEM::SIN(vVar3.x) };
				vVar6 = { (-SYSTEM::SIN(vVar4.z) * SYSTEM::COS(vVar4.x)), (SYSTEM::COS(vVar4.z) * SYSTEM::COS(vVar4.x)), SYSTEM::SIN(vVar4.x) };
				fVar7 = CAM::_0x80EC114669DAEFF4();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar1, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				CAM::SET_CAM_ROT(uParam0->f_1, vVar2, 2);
				CAM::SET_CAM_FOV(uParam0->f_1, fVar7);
				uParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_2, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				CAM::SET_CAM_ROT(uParam0->f_2, vVar2, 2);
				CAM::SET_CAM_FOV(uParam0->f_2, fVar7);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar1 + vVar6 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(uParam0->f_4, vVar0 + vVar5 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					CAM::SET_CAM_ROT(uParam0->f_4, vVar2, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, fVar7);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					CAM::_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					CAM::_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(uParam0->f_3, true);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
				uParam0->f_7 = MISC::GET_GAME_TIMER();
				uParam0->f_8 = 0;
				*uParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			func_17();
			if (bParam3)
			{
				if (!uParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::_START_SCREEN_EFFECT("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						uParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

void func_17()
{
	RECORDING::_0xEB2D525B57F42B40();
	func_18();
}

void func_18()
{
	Global_17206.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = iParam7;
	uParam0->f_13 = iParam8;
}

float func_21(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_33(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_32();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_30();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			MISC::CLEAR_BIT(&Global_2363, 20);
			MISC::CLEAR_BIT(&Global_2364, 17);
			MISC::CLEAR_BIT(&Global_2365, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_26())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2363, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_24();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_32();
	}
	return 0;
}

void func_24()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15800 = 1;
}

void func_25()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	MISC::CLEAR_BIT(&Global_2364, 16);
}

int func_26()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_28()
{
	if (func_29(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_60();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

bool func_29(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1363073.f_1048, iParam0);
}

void func_32()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16811 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15800 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = uParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

void func_34(int iParam0)
{
	Global_36456 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_35(int iParam0)
{
	if (!Global_14493.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		MISC::SET_BIT(&Global_2364, 2);
	}
}

void func_36(int iParam0)
{
	if (Global_14659)
	{
		func_37(0, 0);
	}
	if (Global_14493.f_1 == 10 || Global_14493.f_1 == 9)
	{
		MISC::SET_BIT(&Global_2364, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_15800 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2363, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2363, 30);
	}
	if (!func_26())
	{
		Global_14493.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14659 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_14430);
			}
			Global_14421 = { Global_14439[Global_14438 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
	else if (Global_14659 == 1)
	{
		Global_14659 = 0;
		Global_14421 = { Global_14446[Global_14438 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14430);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_14421);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2363, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_39(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_40(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_41(int iParam0, var uParam1)
{
	if (func_42(uParam1, 1))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_42(uParam1, 2))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_42(uParam1, 4))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_42(uParam1, 8))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_42(uParam1, 16))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_42(uParam1, 32))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_42(uParam1, 64))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_42(uParam1, 128))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_42(uParam1, 256))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_42(uParam1, 512))
	{
		PED::APPLY_PED_DAMAGE_PACK(iParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_42(uParam1, 0))
	{
	}
}

bool func_42(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_43()
{
	if (((Global_92955 == 13 || Global_92955 == 10) || Global_92955 == 11) || Global_92955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90033[iVar0 /*17*/] && !Global_90033[iVar0 /*17*/].f_1)
		{
			if (Global_90033[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90033[iVar0 /*17*/].f_5 != 88 && Global_90033[iVar0 /*17*/].f_5 != 89) && Global_90033[iVar0 /*17*/].f_5 != 92)
				{
					func_45(Global_90033[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_45(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87085[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87085[iParam0 /*2*/] = 0;
	}
}

bool func_46(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_47()
{
	func_48();
	func_65(1);
}

void func_48()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_36844[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_148(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_36818[iVar2 /*5*/] == 0)
		{
			func_49(iVar2);
		}
		iVar2++;
	}
}

void func_49(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_36818[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_36818[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_37055 = 0;
		}
	}
	Global_36818[iParam0 /*5*/] = 13;
	Global_36818[iParam0 /*5*/].f_1 = 0;
	Global_36818[iParam0 /*5*/].f_2 = 0;
	Global_36818[iParam0 /*5*/].f_3 = 0;
	Global_36818[iParam0 /*5*/].f_4 = 0;
	Global_36817 = (Global_36817 - 1);
	if (Global_36817 < 0)
	{
		Global_36817 = 0;
	}
}

int func_50(vector3 vParam0, float fParam1, int iParam2, int iParam3)
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		func_54(0);
		MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		SYSTEM::WAIT(0);
		MISC::CLEAR_AREA(vParam0, 5000f, 1, 0, 0, false);
		MISC::CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		GRAPHICS::REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_53();
		func_52();
		SYSTEM::SETTIMERA(0);
		func_54(1);
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!STREAMING::NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				SYSTEM::WAIT(0);
				if (SYSTEM::TIMERA() > 2000)
				{
					MISC::SET_GAME_PAUSED(false);
					return 0;
				}
			}
		}
		SYSTEM::SETTIMERA(0);
		while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			SYSTEM::WAIT(0);
			if (SYSTEM::TIMERA() > 20000)
			{
				MISC::SET_GAME_PAUSED(false);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				MISC::SET_GAME_PAUSED(false);
				SYSTEM::SETTIMERA(0);
				PED::_0x4759CC730F947C81();
				if (iParam3 == 1)
				{
					VEHICLE::_0x48ADC8A773564670();
				}
				else
				{
					SYSTEM::SETTIMERA(5000);
				}
				MISC::POPULATE_NOW();
			}
		}
		while ((!VEHICLE::_0x91D6DD290888CBAB() && !func_51()) && SYSTEM::TIMERA() < 1500)
		{
			SYSTEM::WAIT(0);
		}
		if (SYSTEM::TIMERA() > 1500)
		{
			if (iParam3 == 1)
			{
			}
		}
		if (iParam2 == 1)
		{
			MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), 0, 0);
			MISC::CLEAR_AREA(vParam0, 5f, 1, 0, 0, false);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vParam0, 1, false, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam1);
				}
			}
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_54(0);
		return 1;
	}
	func_54(0);
	return 0;
}

bool func_51()
{
	return !Global_69800.f_553;
}

void func_52()
{
	Global_69800.f_553 = 1;
	Global_69800.f_554 = 0;
}

void func_53()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_69800[iVar0] = 0;
		iVar0++;
	}
}

void func_54(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(Global_92955.f_20, 2))
			{
				MISC::SET_GAME_PAUSED(true);
				MISC::SET_BIT(&(Global_92955.f_20), 2);
			}
		}
		else if (MISC::IS_BIT_SET(Global_92955.f_20, 2))
		{
			MISC::SET_GAME_PAUSED(false);
			MISC::CLEAR_BIT(&(Global_92955.f_20), 2);
		}
	}
}

int func_55()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_56(int iParam0)
{
	return MISC::IS_BIT_SET(Global_105220.f_7200[iParam0], 0);
}

int func_57(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_99.f_58[iParam0];
}

int func_58()
{
	if (Global_33270[11] == 1)
	{
		return 4;
	}
	if (!func_59(21))
	{
		return 0;
	}
	if (!func_57(130))
	{
		return 1;
	}
	if (!func_57(131))
	{
		return 2;
	}
	if (!func_59(22))
	{
		return 1;
	}
	if (!func_59(49))
	{
		return 3;
	}
	if (!func_59(28))
	{
		return 1;
	}
	return 3;
}

int func_59(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_105220.f_9056.f_330[iParam0 /*6*/];
}

int func_60()
{
	func_61();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_61()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_64(Global_105220.f_2354.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_63(PLAYER::PLAYER_PED_ID());
			if (func_62(iVar0) && (!func_29(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_62(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_62(int iParam0)
{
	return iParam0 < 3;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_64(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_64(int iParam0)
{
	if (func_62(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_65(bool bParam0)
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_37035))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_37035))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_37035);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_37024))
	{
		if (CAM::IS_CAM_SHAKING(Global_37024))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_37024, 0f);
			CAM::STOP_CAM_SHAKING(Global_37024, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::_0x459FD2C8D0AB78BC() != -1)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_37030 = 0f;
	StringCopy(&Global_37031, "", 16);
	StringCopy(&Global_37035, "", 64);
	StringCopy(&Global_37051, "", 16);
	func_66();
}

void func_66()
{
	Global_37023 = 0;
	Global_37024 = 0;
	Global_37025 = 0;
	Global_37026 = 30000;
	Global_37027 = 0f;
	Global_37029 = 0f;
	Global_37028 = 0f;
	Global_37030 = 0f;
	StringCopy(&Global_37031, "", 16);
}

void func_67(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17063;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17053;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17064;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17056;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17052;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17067;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17068;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17071;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17072;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17065;
			break;
		
		case 25:
			iVar0 = Global_262145.f_17953;
			break;
		
		case 26:
			iVar0 = Global_262145.f_17952;
			break;
	}
	if (iVar0 != 0)
	{
		STATS::_0x501478855A6074CE(func_78(func_79()), func_76(func_79()), func_75(), func_74(), iParam0, iVar0);
	}
	func_73(iVar0);
	func_68(iVar0);
}

void func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = func_72(3964, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11.f_449 = iVar0;
	func_69(3964, iVar0, -1, 1, 0);
}

void func_69(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_70(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_70(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_71();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_71()
{
	return Global_1312736;
}

int func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_70(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1624079[iVar0 /*558*/].f_11.f_448 = (Global_1624079[iVar0 /*558*/].f_11.f_448 + iParam0);
	if (Global_1624079[iVar0 /*558*/].f_11.f_448 < -9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
	else if (Global_1624079[iVar0 /*558*/].f_11.f_448 > 9999)
	{
		Global_1624079[iVar0 /*558*/].f_11.f_448 = 9999;
	}
}

int func_74()
{
	if (Global_1665352.f_3 != 0)
	{
		return Global_1665352.f_3;
	}
	return -1;
}

int func_75()
{
	if (Global_1665352.f_2 != 0)
	{
		return Global_1665352.f_2;
	}
	return -1;
}

int func_76(int iParam0)
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[1];
}

int func_77()
{
	return -1;
}

int func_78(int iParam0)
{
	if (iParam0 == func_77())
	{
		return -1;
	}
	return Global_1624079[iParam0 /*558*/].f_11.f_8[0];
}

int func_79()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11;
}

bool func_80(bool bParam0)
{
	return func_81(PLAYER::PLAYER_ID(), bParam0);
}

int func_81(int iParam0, bool bParam1)
{
	return func_82(iParam0, bParam1, 1);
}

int func_82(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_77())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_83(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_77() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam0 != func_77())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_77())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_84(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (SCRIPT::_GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = iParam2 & 2 != false;
		bVar2 = iParam2 & 4 != false;
		bVar3 = iParam2 & 8 != false;
		bVar4 = iParam2 & 16 != false;
		bVar5 = iParam2 & 32 != false;
		bVar6 = iParam2 & 64 != false;
		bVar7 = iParam2 & 128 != false;
		bVar8 = iParam2 & 256 != false;
		bVar9 = iParam2 & 512 != false;
		bVar10 = iParam2 & 1024 != false;
		bVar11 = iParam2 & 2048 != false;
		bVar12 = iParam2 & 4096 != false;
		bVar13 = iParam2 & 8192 != false;
		bVar14 = iParam2 & 16384 != false;
		bVar15 = iParam2 & 32768 != false;
		bVar16 = iParam2 & 65536 != false;
		bVar17 = iParam2 & 131072 != false;
		bVar18 = iParam2 & 262144 != false;
		bVar19 = iParam2 & 524288 != false;
		bVar20 = iParam2 & 1048576 != false;
		bVar21 = iParam2 & 2097152 != false;
		bVar22 = iParam2 & 4194304 != false;
		bVar23 = iParam2 & 8388608 != false;
		if (!func_92())
		{
			bVar24 = false;
			if (bParam1 == 1)
			{
				bVar24 = true;
			}
			if (bVar15 == 0 && !bVar20)
			{
				bVar24 = true;
			}
			if (bVar9 == 1)
			{
				bVar24 = true;
			}
			if (bVar24)
			{
				return;
			}
		}
		if (bVar17)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			iVar25 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_90(PLAYER::PLAYER_ID(), 0) && !func_89()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2423644[iParam0 /*406*/].f_240 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_88(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, true, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
				{
					if (!bVar20)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
					}
					ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
				}
				else if (!bVar20)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar25, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar25) && PED::_0x7350823473013C02(iVar25))
				{
					PED::_0x4668D80430D6C299(iVar25);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar25, 1);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_87();
					func_86();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2423644[iParam0 /*406*/].f_241 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
			}
			else
			{
				if (!func_88(iVar25) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar25))
				{
					if (!bVar21)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar25, !bVar14, 0);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar25))
					{
						if (!bVar20)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar25, bVar15);
						}
						if (!bVar15)
						{
							ENTITY::_SET_ENTITY_SOMETHING(iVar25, true);
						}
					}
					if (func_85(Global_4456448.f_148478))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar25, true);
					}
				}
				if (Global_1312831)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar25, bVar16);
				if (bVar2)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar25) && !PED::IS_PED_IN_ANY_VEHICLE(iVar25, 0))
					{
						BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iVar25);
					}
				}
			}
			iVar26 = 0;
			if (bVar1)
			{
				iVar26 |= 2;
			}
			if (bVar2)
			{
				iVar26 |= 4;
			}
			if (bVar3)
			{
				iVar26 |= 8;
			}
			if (bVar4)
			{
				iVar26 |= 16;
			}
			if (bVar5)
			{
				iVar26 |= 32;
			}
			if (bVar6)
			{
				iVar26 |= 64;
			}
			if (bVar7)
			{
				iVar26 |= 128;
			}
			if (bVar8)
			{
				iVar26 |= 256;
			}
			if (bVar9)
			{
				iVar26 |= 512;
			}
			if (bVar10)
			{
				iVar26 |= 1024;
			}
			if (bVar11)
			{
				iVar26 |= 2048;
			}
			if (bVar12)
			{
				iVar26 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_85(int iParam0)
{
	return iParam0 == 17;
}

void func_86()
{
	vector3 vVar0;
	
	Global_2436641.f_1228 = 0;
	Global_2436641.f_1229 = 0;
	Global_2436641.f_1230 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2436641.f_1235 = -1;
	Global_2436641.f_1236 = 0;
	Global_2405070.f_2671 = { vVar0 };
}

void func_87()
{
	Global_2405070.f_690 = 0;
	Global_2405070.f_2714 = 0;
	Global_2405070.f_508 = 0;
	Global_2405070.f_596 = 0;
	Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_203 = 0;
	Global_2405070.f_2670 = 0;
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_89()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_90(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_91(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_92()
{
	if (func_93() == 0)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	return Global_1312466.f_18;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_95()
{
	int iVar0;
	
	if (bLocal_46)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_96(Global_36844[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_52.x = 5;
	Local_51.f_2 = (SYSTEM::TIMERA() + iVar0);
}

int func_96(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_107();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_103(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_36844[iLocal_54 /*5*/].f_3 < 3 && Global_36844[iLocal_54 /*5*/].f_3 != 0) && Global_36844[iLocal_54 /*5*/].f_3 > Global_36844[iLocal_54 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_36844[iLocal_54 /*5*/].f_4 < 9 && Global_36844[iLocal_54 /*5*/].f_4 != 0) && Global_36844[iLocal_54 /*5*/].f_4 > Global_36844[iLocal_54 /*5*/].f_3)
	{
		return 0;
	}
	sVar1 = func_102(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return 0;
	}
	if (func_103(Local_43.f_1))
	{
		return 0;
	}
	STREAMING::REQUEST_CLIP_SET(sVar1);
	if (func_99(Local_43.f_1))
	{
		sVar2 = "MOVE_M@DRUNK@TRANSITIONS";
		sVar3 = "";
		switch (iParam0)
		{
			case 0:
				sVar3 = "";
				break;
			
			case 2:
				sVar3 = "VERY_TO_MODERATE";
				break;
			
			case 1:
				sVar3 = "MODERATE_TO_SLIGHTLY";
				break;
			
			default:
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			STREAMING::REQUEST_ANIM_DICT(sVar2);
			while (!STREAMING::HAS_ANIM_DICT_LOADED(sVar2))
			{
				SYSTEM::WAIT(0);
			}
			if (!PED::IS_PED_INJURED(Local_43.f_1))
			{
				BRAIN::TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_50 = sVar3;
			}
		}
	}
	if (!STREAMING::HAS_CLIP_SET_LOADED(sVar1))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	PED::SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, sVar1, 0.75f);
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		PED::SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, sVar1, "idle", 2f, 1);
	vLocal_52.z = sVar1;
	bLocal_47 = true;
	iVar4 = 0;
	switch (func_63(Local_43.f_1))
	{
		case 0:
			iVar4 = "FACIALS@P_M_ZERO@BASE";
			break;
		
		case 1:
			iVar4 = "FACIALS@P_M_ONE@BASE";
			break;
		
		case 2:
			iVar4 = "FACIALS@P_M_TWO@BASE";
			break;
		
		default:
			if (PED::IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_97())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (PED::IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, true);
	PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, true);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, true);
	AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 1);
	return 1;
}

bool func_97()
{
	return func_98(PLAYER::PLAYER_ID());
}

int func_98(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_99(int iParam0)
{
	vector3 vVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1) || PED::IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (func_101())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID())
	{
		if (!PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
		if (func_100())
		{
			return 0;
		}
	}
	vVar0 = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	if (SYSTEM::VMAG2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_100()
{
	return Global_93007.f_322 > 0;
}

bool func_101()
{
	return MISC::GET_GAME_TIMER() <= Global_17345.f_5745 + 100;
}

char* func_102(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "move_m@drunk@verydrunk";
			break;
		
		case 1:
			return "move_m@drunk@slightlydrunk";
			break;
		
		case 2:
			return "move_m@drunk@moderatedrunk";
			break;
	}
	return "";
}

bool func_103(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = func_104(iParam0);
	sVar1 = func_102(iVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(vLocal_52.z))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return MISC::ARE_STRINGS_EQUAL(vLocal_52.z, sVar1);
}

int func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_105(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_36844[iVar1 /*5*/].f_2;
}

int func_105(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36844[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_106(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36844[iVar0 /*5*/].f_1)
		{
			return Global_36844[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_107()
{
	int iVar0;
	
	if (Local_51 == -2)
	{
		return -2;
	}
	if (Local_51 == -1)
	{
		return -1;
	}
	iVar0 = (Local_51 - SYSTEM::TIMERA());
	if (iVar0 < 0)
	{
		return -2;
	}
	if (iVar0 > 65534)
	{
		iVar0 = 65534;
	}
	return iVar0;
}

void func_108()
{
	if (bLocal_46)
	{
		return;
	}
	if (!func_109())
	{
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 5000;
		return;
	}
	vLocal_52.x = 6;
}

bool func_109()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	return fVar2 < 7f;
}

void func_110()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		if (PED::GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_36844[iLocal_54 /*5*/].f_2 == 0 || Global_36844[iLocal_54 /*5*/].f_2 == 2)
			{
				PED::SET_PED_STEALTH_MOVEMENT(Local_43.f_1, 0, 0);
			}
		}
		if (PED::IS_PED_DUCKING(Local_43.f_1))
		{
			PED::SET_PED_DUCKING(Local_43.f_1, 0);
		}
	}
	if (Local_51 != -2)
	{
		if (Local_51 == -1)
		{
			if (Global_36844[iLocal_54 /*5*/].f_2 != 0)
			{
				Global_36844[iLocal_54 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_51 - SYSTEM::TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_36844[iLocal_54 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_36844[iLocal_54 /*5*/].f_2 = 2;
					if (!func_96(2))
					{
						Global_36844[iLocal_54 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_36844[iLocal_54 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_36844[iLocal_54 /*5*/].f_2 = 1;
					if (!func_96(2))
					{
						Global_36844[iLocal_54 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_36844[iLocal_54 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_50))
	{
		if (!func_99(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_50, 3))
			{
				BRAIN::STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_50, -4f);
			}
			sLocal_50 = "";
			return;
		}
	}
	if (Global_36844[iLocal_54 /*5*/].f_3 >= 10 || Global_36844[iLocal_54 /*5*/].f_4 >= 15)
	{
		if (BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1)
		{
			return;
		}
		if (AUDIO::IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 1))
		{
			if (Global_36844[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER::PLAYER_PED_ID()) && func_111(PLAYER::PLAYER_ID())) && Global_262145.f_23177)
		{
			if (Global_36844[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_54 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_52.y = 3;
		return;
	}
	if (!bLocal_47)
	{
		return;
	}
	if (!func_103(Local_43.f_1))
	{
		return;
	}
}

int func_111(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_113(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_112(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
	}
	return -1;
}

int func_113(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_114()
{
	int iVar0;
	
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_52.x = 7;
	return 1;
}

void func_115()
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
}

void func_116()
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	if (!bLocal_46)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	vVar3 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar4 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(vVar3, vVar4) && !PED::IS_COP_PED_IN_AREA_3D(vVar3, vVar4))
	{
		return;
	}
	PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	func_11(73, 1);
}

void func_117()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_49 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_4)
	{
		func_119(iVar0, fLocal_49);
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 2000;
	}
	else
	{
		Local_51.f_4 = SYSTEM::TIMERA() + 1000;
	}
	fVar3 = ENTITY::GET_ENTITY_SPEED(iVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_49 = 0f;
		func_119(iVar0, 0f);
		return;
	}
	if (Local_51.f_1 == -1)
	{
		fLocal_49 = func_118(iVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_51.f_1 - SYSTEM::TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_49 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_49 = func_118(iVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_49 = func_118(iVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_49 = func_118(iVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_49 = func_118(iVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_49 = func_118(iVar0, 0.13f, 0.06f);
		}
	}
	func_119(iVar0, fLocal_49);
}

float func_118(int iParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (BRAIN::IS_PED_SPRINTING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			fVar0 = (fVar0 * 4.5f);
		}
		else
		{
			fVar0 = (fVar0 * 3f);
		}
	}
	else
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(iVar2))
		{
			fVar0 = (fVar0 * 1.5f);
		}
		else
		{
			fVar0 = (fVar0 * 0.5f);
		}
	}
	fVar0 = func_21(fVar0, -1f, 1f);
	return fVar0;
}

void func_119(int iParam0, float fParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		PED::_0x288DF530C92DAD6F(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		VEHICLE::SET_VEHICLE_STEER_BIAS(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), fParam1);
	}
}

void func_120()
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_36844[iLocal_54 /*5*/].f_3 >= 10 || Global_36844[iLocal_54 /*5*/].f_4 >= 15)
		{
			if (Global_36844[iLocal_54 /*5*/].f_3 >= 10)
			{
				Global_36844[iLocal_54 /*5*/].f_3 = 9;
			}
			if (Global_36844[iLocal_54 /*5*/].f_4 >= 15)
			{
				Global_36844[iLocal_54 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_46)
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_52.x = 11;
		return;
	}
}

void func_121()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (SYSTEM::TIMERA() <= Local_51.f_3)
	{
		return;
	}
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 4;
		Local_51.f_3 = -2;
		return;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_122();
		Local_51.f_3 = -2;
		return;
	}
	BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar1, 0);
	vLocal_52.x = 9;
	Local_51.f_3 = SYSTEM::TIMERA() + 1000;
}

void func_122()
{
	if (vLocal_52.x == 10)
	{
		return;
	}
	vLocal_52.x = 10;
	if (iLocal_44 == -1)
	{
		return;
	}
	func_148(iLocal_44, 2, 5);
	Local_51.f_4 = SYSTEM::TIMERA();
	fLocal_49 = 0f;
}

void func_123()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_52.x = 10;
		return;
	}
	if (SYSTEM::TIMERA() < Local_51.f_3)
	{
		return;
	}
	vLocal_52.x = 4;
	Local_51.f_3 = -2;
}

void func_124()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_46)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_46)
		{
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_46)
			{
			}
			if (!bLocal_46)
			{
				if (!bLocal_46)
				{
				}
				BRAIN::TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_52.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_46)
			{
			}
			func_122();
			return;
		}
		if (!bLocal_46)
		{
			if (!bLocal_46)
			{
			}
			func_122();
			return;
		}
		if (!bLocal_46)
		{
		}
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_122();
			return;
		}
		BRAIN::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_52.x = 9;
		Local_51.f_3 = SYSTEM::TIMERA() + 1000;
		return;
	}
	if (!func_109())
	{
		BRAIN::CLEAR_PED_TASKS(Local_43.f_1);
		vLocal_52.x = 4;
		return;
	}
	if (!bLocal_46)
	{
		iVar3 = BRAIN::GET_SCRIPT_TASK_STATUS(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
			{
				BRAIN::CLEAR_PED_TASKS(Local_43.f_1);
				vLocal_52.x = 4;
				return;
			}
		}
	}
}

void func_125()
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (bLocal_46)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_52.x = 4;
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_52.x = 4;
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_1, true) };
	vVar1 = { ENTITY::GET_ENTITY_COORDS(Local_43.f_4, true) };
	fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, true);
	if (fVar2 > 3f)
	{
		if (!func_96(Global_36844[iLocal_54 /*5*/].f_2))
		{
			vLocal_52.x = 12;
			return;
		}
		vLocal_52.x = 5;
		Local_51.f_2 = SYSTEM::TIMERA() + 2000;
		return;
	}
	iVar3 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar4 = 0;
	bVar5 = true;
	iVar4 = 1;
	while (bVar5)
	{
		if (iVar4 < iVar3)
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar4, 0))
			{
				bVar5 = false;
			}
			else
			{
				iVar4++;
			}
		}
		else
		{
			bVar5 = false;
			iVar4 = -1;
		}
	}
	if (iVar4 == -1)
	{
		if (iVar4 == -1)
		{
			vLocal_52.x = 4;
			return;
		}
	}
	func_126();
	BRAIN::TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar4, 2f, 1, 0);
	vLocal_52.x = 7;
}

void func_126()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(Local_43.f_1))
	{
		PED::RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
		PED::RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -1056964608);
		vLocal_52.z = "";
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 200, false);
		PED::SET_PED_RESET_FLAG(Local_43.f_1, 46, false);
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, false);
		AUDIO::SET_PED_IS_DRUNK(Local_43.f_1, 0);
	}
	if (!bLocal_47)
	{
		return;
	}
	bLocal_47 = false;
}

void func_127()
{
	if (SYSTEM::TIMERA() < Local_51.f_2)
	{
		func_110();
		return;
	}
	func_128();
	Local_51.f_2 = -2;
	vLocal_52.x = 12;
}

int func_128()
{
	if (!func_103(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_47)
	{
		return 0;
	}
	func_129(Local_43.f_1);
	vLocal_52.z = "";
	Global_2519572.f_4526 = 1;
	return 1;
}

void func_129(int iParam0)
{
	PED::RESET_PED_MOVEMENT_CLIPSET(iParam0, 1048576000);
	PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iParam0, 0, -1056964608);
	PED::SET_PED_RESET_FLAG(iParam0, 200, false);
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 262144, false);
	AUDIO::SET_PED_IS_DRUNK(iParam0, 0);
}

void func_130()
{
	int iVar0;
	
	if (Local_51 == -1)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_54 /*5*/].f_3 < 3 && Global_36844[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_52.x = 10;
		return;
	}
	if (func_103(Local_43.f_1))
	{
		vLocal_52.x = 12;
		return;
	}
	if (Local_51 == -2)
	{
		return;
	}
	if (!func_96(Global_36844[iLocal_54 /*5*/].f_2))
	{
		return;
	}
	vLocal_52.x = 12;
}

void func_131()
{
}

void func_132()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_36925[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_36925[iVar1 /*6*/].f_1 == iLocal_44)
			{
				func_134(iVar1);
				func_133(iVar1);
			}
			else if (Global_36925[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_45 == -1)
				{
					if (iLocal_45 == Global_36925[iVar1 /*6*/])
					{
						func_134(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_133(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_36925[iParam0 /*6*/] = -1;
	Global_36925[iParam0 /*6*/].f_1 = -1;
	Global_36925[iParam0 /*6*/].f_2 = 6;
	Global_36925[iParam0 /*6*/].f_3 = 0;
	Global_36925[iParam0 /*6*/].f_4 = 0;
}

void func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_36925[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_155();
			break;
		
		case 2:
			func_138(Global_36925[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_137(Global_36925[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_136();
			break;
		
		case 5:
			func_135();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_135()
{
	vLocal_52.y = 2;
}

void func_136()
{
	int iVar0;
	
	Global_36844[iLocal_54 /*5*/].f_4++;
	if (Local_51 == -1)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_54 /*5*/].f_4 < 9 && Global_36844[iLocal_54 /*5*/].f_4 != 0)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_36844[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_137(int iParam0)
{
	int iVar0;
	
	Global_36844[iLocal_54 /*5*/].f_3 = (Global_36844[iLocal_54 /*5*/].f_3 + iParam0);
	if (Local_51 == -1)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_54 /*5*/].f_3 < 3 && Global_36844[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_51 - SYSTEM::TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 1;
		}
		if (!func_103(Local_43.f_1))
		{
			func_96(Global_36844[iLocal_54 /*5*/].f_2);
		}
	}
}

void func_138(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_51.f_1 = (Local_51.f_1 + iParam0);
	Local_51 = (Local_51 + iParam0);
}

void func_139()
{
	int iVar0;
	
	if (!bLocal_46)
	{
		iLocal_53 = -1;
		return;
	}
	if (iLocal_53 < 0)
	{
		iLocal_53 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	if (iVar0 != iLocal_53)
	{
		if (iVar0 > iLocal_53)
		{
			func_140();
		}
		iLocal_53 = iVar0;
		return;
	}
}

void func_140()
{
}

void func_141()
{
	if (!Local_51 == -1)
	{
		if (!Local_51 == -2)
		{
			if (SYSTEM::TIMERA() >= Local_51)
			{
				func_126();
				Local_51 = -2;
				vLocal_52.x = 12;
			}
		}
		if (SYSTEM::TIMERA() > Local_51.f_1)
		{
			func_155();
		}
	}
}

void func_142(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_36925[iVar0 /*6*/])
		{
			func_133(iVar0);
		}
		iVar0++;
	}
}

void func_143()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_52.x = 4;
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_52.x = 10;
		}
	}
	if (bLocal_46)
	{
		func_146();
		func_11(71, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_72(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_144(iVar1);
			}
			func_69(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STATS::STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STATS::STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STATS::STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_144(iVar6);
			}
			switch (func_60())
			{
				case 0:
					STATS::STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STATS::STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STATS::STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_52.y = 1;
		return;
	}
	vLocal_52.y = 12;
	if (Local_51 == -1)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
	}
	else if (Global_36844[iLocal_54 /*5*/].f_3 < 3 && Global_36844[iLocal_54 /*5*/].f_3 != 0)
	{
		Global_36844[iLocal_54 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_51 - SYSTEM::TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_36844[iLocal_54 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_36844[iLocal_54 /*5*/].f_2 = 1;
		}
	}
}

void func_144(int iParam0)
{
	int iVar0;
	
	iVar0 = func_145(81);
	Global_2414147[iVar0 /*83*/] = 81;
	Global_2414147[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414147[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_145(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414147[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414147[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_146()
{
}

void func_147()
{
	Local_51 = Local_43.f_2;
	Local_51.f_1 = Local_43.f_3;
	Local_51.f_2 = -2;
	Local_51.f_3 = -2;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	func_149(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_151(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_150();
	if (iVar0 == -1)
	{
		return;
	}
	Global_36925[iVar0 /*6*/] = iParam0;
	Global_36925[iVar0 /*6*/].f_1 = iParam1;
	Global_36925[iVar0 /*6*/].f_2 = iParam2;
	Global_36925[iVar0 /*6*/].f_3 = iParam3;
	Global_36925[iVar0 /*6*/].f_4 = iParam4;
	Global_36925[iVar0 /*6*/].f_5 = iParam5;
}

int func_150()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_36925[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2)
{
	if (func_152(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_152(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_36925[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_36925[iVar0 /*6*/])
			{
				if (iParam1 == Global_36925[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_153()
{
	int iVar0;
	
	bLocal_46 = false;
	if (Local_43.f_1 == PLAYER::PLAYER_PED_ID())
	{
		bLocal_46 = true;
		Global_37056 = 1;
		Global_37058++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		iVar0 = func_63(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_154()
{
	if (!iLocal_44 == -1)
	{
		return;
	}
	iLocal_44 = func_106(Local_43.f_1);
	if (iLocal_44 == -1)
	{
		return;
	}
	iLocal_54 = func_105(iLocal_44);
}

void func_155()
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
		{
			iVar0 = func_63(Local_43.f_1);
			if (Global_36844[iLocal_54 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_157(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					AUDIO::SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_126();
	if (bLocal_46)
	{
		Global_37056 = 0;
	}
	func_156();
	STREAMING::REMOVE_ANIM_DICT(func_102(0));
	STREAMING::REMOVE_ANIM_DICT(func_102(2));
	STREAMING::REMOVE_ANIM_DICT(func_102(1));
	Global_1662299 = 0;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_156()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		return;
	}
	iVar0 = Local_43.f_1;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		iVar0 = iVar1;
	}
	else if (!CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER::PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_49 = 0f;
	func_119(iVar0, 0f);
}

void func_157(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_158(iParam2), 1);
}

int func_158(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

