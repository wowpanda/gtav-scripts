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
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	bool bLocal_50 = 0;
	bool bLocal_51 = 0;
	float fLocal_52 = 0f;
	float fLocal_53 = 0f;
	char* sLocal_54 = NULL;
	struct<5> Local_55 = { 0, 0, 0, 0, 0 } ;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
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
	iLocal_48 = -1;
	iLocal_49 = -1;
	fLocal_52 = 1.7f;
	fLocal_53 = 0f;
	sLocal_54 = "";
	iLocal_63 = -1;
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_164();
	}
	Local_43 = { ScriptParam_0 };
	func_163();
	func_162();
	func_157(iLocal_48, 0, 0);
	SETTIMERA(0);
	func_156();
	func_152();
	while (true)
	{
		WAIT(0);
		func_151(iLocal_48);
		func_150();
		func_148();
		func_141();
		func_157(iLocal_48, 0, 0);
		func_163();
		func_9();
		if ((NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_IS_ACTIVITY_SESSION()) && !func_8())
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
	if ((!func_4() && !func_3()) && Global_2449537)
	{
		Global_4456448.f_138474 = 0;
	}
}

bool func_3()
{
	return Global_2448756.f_579;
}

bool func_4()
{
	return Global_1589819[PLAYER_ID() /*818*/].f_196 != 0;
}

void func_5()
{
	Global_2448756.f_644 = 1;
}

var func_6()
{
	return Global_2448756.f_623;
}

var func_7()
{
	return IS_BIT_SET(Global_2448756.f_2, 11);
}

bool func_8()
{
	return IS_BIT_SET(Global_2449538.f_1.f_2810, 3);
}

void func_9()
{
	bool bVar0;
	
	if (IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		func_164();
	}
	if (bLocal_50)
	{
		if (!IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			func_164();
		}
	}
	func_140();
	bVar0 = true;
	switch (vLocal_60.x)
	{
		case 4:
			func_139();
			return;
		
		case 5:
			func_136();
			return;
		
		case 6:
			func_134();
			return;
		
		case 7:
			func_133();
			return;
		
		case 8:
			func_132();
			return;
		
		case 9:
			func_130();
			return;
		
		case 10:
			func_129();
			func_126();
			func_125();
			return;
		
		case 11:
			func_124();
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
	if (!vLocal_60.x == 12)
	{
		return;
	}
	switch (vLocal_60.y)
	{
		case 1:
			if (!func_123())
			{
				func_112();
				func_126();
			}
			break;
		
		case 2:
			func_110();
			break;
		
		case 12:
			func_97();
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
	char* sVar2;
	struct<53> Var3;
	int iVar61;
	
	if (!IS_BIT_SET(Global_1671295.f_3, 27))
	{
		SET_PED_TO_RAGDOLL(Local_43.f_1, 3000, 3500, 0, 1, 1, 0);
	}
	Global_1666256 = 1;
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(2500);
		while (IS_SCREEN_FADING_OUT())
		{
			WAIT(0);
		}
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_96(&uVar0, 0, 0);
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			NETWORK_FADE_OUT_ENTITY(PLAYER_PED_ID(), 0, 1);
		}
		while ((DOES_ENTITY_EXIST(PLAYER_PED_ID()) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0)) && _0x422F32CC7E56ABAD(PLAYER_PED_ID()))
		{
			WAIT(0);
		}
		CLEAR_BIT(&(Global_1671295.f_3), 27);
		func_85(PLAYER_ID(), 0, 57344, 0);
		Global_2405071.f_2668 = 1;
		if (IS_BIT_SET(Global_1671295, 15))
		{
			CLEAR_BIT(&Global_1671295, 15);
		}
		if (IS_BIT_SET(Global_1671295.f_2, 6))
		{
			CLEAR_BIT(&(Global_1671295.f_2), 6);
		}
		if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
		{
			Global_2405071.f_2669 = 1;
		}
		else
		{
			Global_2405071.f_2669 = 0;
		}
		if (IS_SCRIPT_GLOBAL_SHAKING())
		{
			STOP_SCRIPT_GLOBAL_SHAKING(0);
		}
		if (func_81(1))
		{
			func_68(0);
		}
		func_66(1);
		func_164();
	}
	sVar2 = "";
	Var3.f_3 = 1064514355;
	Var3.f_30 = 1148829696;
	Var3.f_31 = 1148829696;
	Var3.f_52 = 1148829696;
	iVar61 = 7;
	switch (func_61())
	{
		case 0:
			if (func_59() != 2)
			{
				iVar61 = 0;
			}
			else
			{
				iVar61 = 1;
			}
			break;
		
		case 1:
			if (!func_58(126))
			{
				iVar61 = 2;
			}
			else
			{
				iVar61 = 3;
			}
			break;
		
		case 2:
			if (!func_57(4))
			{
				if (func_58(58))
				{
					iVar61 = 4;
				}
				if (func_58(59))
				{
					iVar61 = 5;
				}
				if (iVar61 == 7)
				{
					if (!func_56())
					{
						iVar61 = 4;
					}
					else
					{
						iVar61 = 5;
					}
				}
			}
			else
			{
				iVar61 = 6;
			}
			break;
	}
	switch (iVar61)
	{
		case 0:
			sVar2 = "DWC_MICHAEL_mansion";
			Var3 = "SAVEM_Default@";
			Var3.f_1 = "M_GetOut_R";
			Var3.f_2 = "M_GetOut_R_CAM";
			Var3.f_5 = { -814.181f, 181.1f, 75.74f };
			Var3.f_8 = { 0f, 0f, 21.1994f };
			Var3.f_4 = -1871534317;
			break;
		
		case 1:
			sVar2 = "DWC_MICHAEL_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "M_GetOut_countryside";
			Var3.f_2 = "M_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
		
		case 2:
			sVar2 = "DWC_FRANKLIN_city";
			Var3 = "SWITCH@FRANKLIN@BED";
			Var3.f_1 = "Sleep_GetUp_RubEyes";
			Var3.f_2 = "Sleep_GetUp_RubEyes_CAM";
			Var3.f_5 = { -17.2168f, -1441.224f, 30.1015f };
			Var3.f_8 = { 0f, 0f, -179.653f };
			Var3.f_4 = -1871534317;
			break;
		
		case 3:
			sVar2 = "DWC_FRANKLIN_hills";
			Var3 = "SAVEBighouse@";
			Var3.f_1 = "F_GetOut_r_bighouse";
			Var3.f_2 = "F_GetOut_r_bighouse_CAM";
			Var3.f_5 = { -1.049f, 524.283f, 170.064f };
			Var3.f_8 = { 0f, 0f, 24f };
			Var3.f_4 = -1871534317;
			break;
		
		case 4:
			sVar2 = "DWC_TREVOR_trailer";
			Var3 = "SAVECountryside@";
			Var3.f_1 = "T_GetOut_countryside";
			Var3.f_2 = "T_GetOut_countryside_CAM";
			Var3.f_5 = { 1968.14f, 3816.79f, 32.4287f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
		
		case 5:
			sVar2 = "DWC_TREVOR_beach";
			Var3 = "SAVEVeniceB@";
			Var3.f_1 = "T_GetOut_r_veniceB";
			Var3.f_2 = "T_GetOut_r_veniceB_CAM";
			Var3.f_5 = { -1148.438f, -1512.246f, 9.689f };
			Var3.f_8 = { 0f, 0f, 36.25f };
			Var3.f_4 = -1871534317;
			break;
		
		case 6:
			sVar2 = "DWC_TREVOR_stripclub";
			Var3 = "SAVECouch@";
			Var3.f_1 = "T_GetOut_couch";
			Var3.f_2 = "T_GetOut_couch_CAM";
			Var3.f_5 = { 94.53f, -1289.86f, 28.27f };
			Var3.f_8 = { 0f, 0f, 29.7938f };
			Var3.f_4 = -1871534317;
			break;
	}
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		SET_ENTITY_COORDS(Local_43.f_1, Var3.f_5, 1, 0, 0, 1);
	}
	WAIT(500);
	StringCopy(&(Var3.f_11), "", 16);
	Var3.f_15 = -1f;
	func_12(sVar2, &Var3, "");
	func_11(126, 1);
	func_164();
}

void func_11(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_12(char* sParam0, var uParam1, char* sParam2)
{
	float fVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	int iVar174;
	int iVar175;
	char* sVar176;
	char* sVar177;
	char* sVar178;
	int iVar179;
	float fVar180;
	float fVar181;
	int iVar182;
	int iVar183;
	int iVar184;
	float fVar185;
	vector3 vVar186;
	vector3 vVar189;
	float fVar192;
	var uVar193;
	var uVar194;
	vector3 vVar195;
	var uVar198;
	float fVar199;
	float fVar200;
	vector3 vVar201;
	vector3 vVar204;
	float fVar207;
	var uVar208;
	var uVar209;
	var uVar210;
	vector3 vVar211;
	var uVar214;
	float fVar215;
	float fVar216;
	vector3 vVar217;
	vector3 vVar220;
	float fVar223;
	var uVar224;
	bool bVar225;
	bool bVar226;
	int iVar227;
	
	fVar0 = 0f;
	SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 1);
	}
	REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_5, 4500f);
	REMOVE_DECALS_IN_RANGE(uParam1->f_5, 4500f);
	CLEAR_AREA(uParam1->f_5, 5f, 1, 0, 0, 0);
	SET_ENTITY_COORDS(PLAYER_PED_ID(), uParam1->f_5, 1, 0, 0, 1);
	FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 1);
	WAIT(0);
	SET_GAME_PAUSED(1);
	REQUEST_ANIM_DICT(*uParam1);
	if (IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
	}
	else
	{
		REQUEST_ANIM_DICT(uParam1->f_16);
	}
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	func_51(uParam1->f_5, uParam1->f_8.f_2, 0, 1);
	if (!IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_OUT(0);
	}
	iVar1 = GET_GAME_TIMER() + 20000;
	bVar2 = false;
	uParam1->f_33 = 0;
	while (!bVar2 && iVar1 > GET_GAME_TIMER())
	{
		bVar2 = true;
		REQUEST_ANIM_DICT(*uParam1);
		if (!HAS_ANIM_DICT_LOADED(*uParam1))
		{
			bVar2 = false;
		}
		if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
		{
			REQUEST_ANIM_DICT(uParam1->f_16);
			if (!HAS_ANIM_DICT_LOADED(uParam1->f_16))
			{
				bVar2 = false;
			}
		}
		if (!IS_SCREEN_FADED_OUT())
		{
			DO_SCREEN_FADE_OUT(0);
		}
		WAIT(0);
	}
	func_48();
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		SET_ROADS_IN_AREA(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 0, 1);
		CLEAR_AREA_OF_VEHICLES(uParam1->f_5 + uParam1->f_19, (VMAG(uParam1->f_22) + 25f), 0, 0, 0, 0, 0, 0);
		CLEAR_AREA(uParam1->f_5 + uParam1->f_19, (VMAG(uParam1->f_22) + 25f), 1, 0, 0, 0);
	}
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		CLEAR_PLAYER_WANTED_LEVEL(PLAYER_ID());
		SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
	}
	FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
	SET_GAME_PAUSED(0);
	CLEAR_AREA(uParam1->f_5, 15f, 1, 0, 0, 0);
	_0x4759CC730F947C81();
	_0x48ADC8A773564670();
	func_45();
	while (func_44())
	{
		WAIT(0);
	}
	if (!IS_SCREEN_FADED_IN() && !IS_SCREEN_FADING_IN())
	{
		DO_SCREEN_FADE_IN(250);
	}
	SET_FADE_IN_AFTER_DEATH_ARREST(1);
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		iVar4 = CREATE_SYNCHRONIZED_SCENE(uParam1->f_5, uParam1->f_8, 2);
		SET_SYNCHRONIZED_SCENE_LOOPED(iVar4, 0);
		_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iVar4, 0);
		uVar5 = CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		iVar6 = 4;
		if (uParam1->f_4 != -1871534317)
		{
			iVar6 |= 2;
		}
		func_42(PLAYER_PED_ID(), uParam1->f_18);
		TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), iVar4, *uParam1, uParam1->f_1, 1000f, -1.5f, iVar6, 0, 1148846080, 0);
		_0x129466ED55140F8D(PLAYER_PED_ID(), 1);
		SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER_ID(), 1);
		uVar3 = GET_PED_RESET_FLAG(PLAYER_PED_ID(), 77);
		SET_PED_RESET_FLAG(PLAYER_PED_ID(), 77, 1);
		PLAY_SYNCHRONIZED_CAM_ANIM(uVar5, iVar4, uParam1->f_2, *uParam1);
		RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16) && !IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
		{
			TASK_PLAY_ANIM(PLAYER_PED_ID(), uParam1->f_16, uParam1->f_17, 1000f, -1.5f, 10000, 33, 0, 0, 0, 0);
		}
	}
	else
	{
		iVar4 = -1;
	}
	if (!uParam1->f_25)
	{
		if (!IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_41(sParam2, -1);
			uParam1->f_25 = 1;
		}
	}
	bVar7 = false;
	bVar8 = false;
	uVar9 = 16;
	if (!IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
	{
		iVar174 = func_61();
		iVar175 = -1;
		sVar176 = "";
		switch (iVar174)
		{
			case 0:
				iVar175 = 0;
				sVar176 = "MICHAEL";
				break;
			
			case 1:
				iVar175 = 1;
				sVar176 = "FRANKLIN";
				break;
			
			case 2:
				iVar175 = 2;
				sVar176 = "TREVOR";
				break;
			
			default:
				break;
		}
		func_40(&uVar9, iVar175, PLAYER_PED_ID(), sVar176, 0, 1);
	}
	if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
	{
		sVar177 = "WalkInterruptible";
		sVar178 = "ForceBlendout";
		while (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (!bVar8)
			{
				if (!IS_SCREEN_FADED_OUT())
				{
					if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_26))
					{
						_START_SCREEN_EFFECT(uParam1->f_26, 0, 0);
						bVar8 = true;
					}
					if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_27))
					{
						if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_28))
						{
							PLAY_SOUND_FRONTEND(-1, uParam1->f_28, uParam1->f_27, 0);
							bVar8 = true;
						}
						if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_29))
						{
							PLAY_SOUND_FRONTEND(-1, uParam1->f_29, uParam1->f_27, 0);
							bVar8 = true;
						}
					}
				}
			}
			HIDE_HUD_AND_RADAR_THIS_FRAME();
			HIDE_HUD_COMPONENT_THIS_FRAME(18);
			CLEAR_REMINDER_MESSAGE();
			func_35(0);
			iVar179 = GET_GAME_TIMER();
			if (iVar179 >= (Global_36976 - 500))
			{
				func_34(4000);
			}
			fVar180 = -1f;
			fVar181 = -1f;
			fVar0 = GET_SYNCHRONIZED_SCENE_PHASE(iVar4);
			if (!IS_STRING_NULL_OR_EMPTY(&(uParam1->f_11)))
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
			iVar182 = 0;
			if (HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), GET_HASH_KEY(sVar177)))
			{
				iVar183 = (GET_CONTROL_VALUE(2, 195) - 128);
				iVar184 = (GET_CONTROL_VALUE(2, 196) - 128);
				if (((iVar183 < 64 && iVar183 > -64) && iVar184 < 64) && iVar184 > -64)
				{
				}
				else
				{
					iVar182 = 1;
				}
			}
			else
			{
				fVar180 = -1f;
				fVar181 = -1f;
				iVar182 = 0;
				uParam1->f_3 = uParam1->f_3;
				fVar180 = fVar180;
				fVar181 = fVar181;
			}
			if (GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 && uParam1->f_52 > 0f)
			{
				if (fVar0 >= uParam1->f_52)
				{
					if (!uParam1->f_32)
					{
						fVar185 = 1.5f;
						vVar186 = { _GET_GAMEPLAY_CAM_COORDS() };
						vVar189 = { GET_PED_BONE_COORDS(PLAYER_PED_ID(), 31086, 0f, 0f, 0f) };
						fVar192 = GET_DISTANCE_BETWEEN_COORDS(vVar186, vVar189, 1);
						fVar185 = func_21(fVar185, 0.001f, (fVar192 - 0.75f));
						if (fVar185 < 0f)
						{
							fVar185 = 0.001f;
						}
						func_20(&(uParam1->f_34), PLAYER_PED_ID(), func_61(), 1E-06f, 300, 300, 0, 0, 1045220557);
						func_19(&(uParam1->f_34), uParam1->f_53);
						if (!uParam1->f_33)
						{
							uParam1->f_34 = 1;
							uParam1->f_34.f_7 = GET_GAME_TIMER();
							uParam1->f_34.f_8 = 0;
							uParam1->f_33 = 1;
						}
						if (uParam1->f_57 == 999f)
						{
							uParam1->f_56 = 0f;
						}
						if (uParam1->f_57 == 999f)
						{
							vVar195 = { _GET_GAMEPLAY_CAM_ROT_2(2) };
							uVar198 = GET_ENTITY_HEADING(PLAYER_PED_ID());
							fVar199 = vVar195.z;
							fVar200 = uVar198;
							uParam1->f_57 = (fVar199 - fVar200);
							if (uParam1->f_57 < 360f)
							{
								uParam1->f_57 = (uParam1->f_57 + 360f);
							}
							if (uParam1->f_57 > 360f)
							{
								uParam1->f_57 = (uParam1->f_57 - 360f);
							}
						}
						uVar193 = uParam1->f_56;
						uVar194 = uParam1->f_57;
						SET_GAMEPLAY_CAM_RELATIVE_PITCH(uVar193, 1065353216);
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(uVar194);
						_0x469F2ECDEC046337(uVar193);
						_SET_GAMEPLAY_CAM_RAW_PITCH(uVar194);
						vVar201 = { _GET_GAMEPLAY_CAM_COORDS() };
						vVar204 = { GET_GAMEPLAY_CAM_COORD() };
						fVar207 = GET_DISTANCE_BETWEEN_COORDS(vVar201, vVar204, 1);
						uVar208 = ROUND((fVar207 * 1000f));
						uParam1->f_32 = 1;
					}
					if (uParam1->f_32)
					{
						_0x59424BD75174C9B1();
						if (func_16(&(uParam1->f_34), 1, 1, 1, 0, 0, 0))
						{
						}
					}
				}
			}
			if (HAS_ANIM_EVENT_FIRED(PLAYER_PED_ID(), GET_HASH_KEY(sVar178)) || iVar182)
			{
				if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
				{
					CLEAR_PED_TASKS(PLAYER_PED_ID());
					switch (uParam1->f_4)
					{
						case -1871534317:
							FORCE_PED_MOTION_STATE(PLAYER_PED_ID(), -1871534317, 1, 0, 0);
							_RENDER_FIRST_PERSON_CAM(0, 0, 3, 0);
							break;
						
						case -668482597:
							FORCE_PED_MOTION_STATE(PLAYER_PED_ID(), -668482597, 1, 0, 0);
							SIMULATE_PLAYER_INPUT_GAIT(PLAYER_ID(), 1f, 500, 0, 1, 0);
							if (GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
							{
								if (uParam1->f_31 == 999f)
								{
									uParam1->f_30 = 0f;
								}
								if (uParam1->f_31 == 999f)
								{
									vVar211 = { _GET_GAMEPLAY_CAM_ROT_2(2) };
									uVar214 = GET_ENTITY_HEADING(PLAYER_PED_ID());
									fVar215 = vVar211.z;
									fVar216 = uVar214;
									uParam1->f_31 = (fVar215 - fVar216);
									if (uParam1->f_31 < 360f)
									{
										uParam1->f_31 = (uParam1->f_31 + 360f);
									}
									if (uParam1->f_31 > 360f)
									{
										uParam1->f_31 = (uParam1->f_31 - 360f);
									}
								}
								uVar209 = uParam1->f_30;
								uVar210 = uParam1->f_31;
								SET_GAMEPLAY_CAM_RELATIVE_PITCH(uVar209, 1065353216);
								SET_GAMEPLAY_CAM_RELATIVE_HEADING(uVar210);
								vVar217 = { _GET_GAMEPLAY_CAM_COORDS() };
								vVar220 = { GET_GAMEPLAY_CAM_COORD() };
								fVar223 = GET_DISTANCE_BETWEEN_COORDS(vVar217, vVar220, 1);
								uVar224 = ROUND((fVar223 * 1000f));
								RENDER_SCRIPT_CAMS(0, 1, uVar224, 0, 0, 0);
							}
							break;
						
						default:
							break;
					}
					if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar4))
					{
						DETACH_SYNCHRONIZED_SCENE(iVar4);
						iVar4 = -1;
					}
				}
			}
			WAIT(0);
		}
	}
	if (!func_47(uParam1->f_22, 0f, 0f, 0f, 0))
	{
		SET_ROADS_BACK_TO_ORIGINAL(uParam1->f_5 + uParam1->f_19 - uParam1->f_22, uParam1->f_5 + uParam1->f_19 + uParam1->f_22, 1);
	}
	SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		CLEAR_PED_TASKS(PLAYER_PED_ID());
	}
	bVar225 = _0x3044240D2E0FA842();
	bVar226 = false;
	if (uParam1->f_32)
	{
		_0x59424BD75174C9B1();
		if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
		{
			bVar226 = true;
		}
	}
	if (bVar225 || bVar226)
	{
		while ((bVar225 || bVar226) && !IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (bVar225)
			{
			}
			if (bVar226)
			{
			}
			iVar227 = 2;
			func_15(1, 26, &iVar227);
			func_15(1, 79, &iVar227);
			func_15(1, 1, &iVar227);
			func_15(1, 2, &iVar227);
			func_15(0, 22, &iVar227);
			func_15(0, 36, &iVar227);
			func_15(0, 142, &iVar227);
			func_15(0, 141, &iVar227);
			func_15(0, 140, &iVar227);
			func_15(0, 263, &iVar227);
			func_15(0, 264, &iVar227);
			WAIT(0);
			bVar225 = _0x3044240D2E0FA842();
			bVar226 = false;
			if (uParam1->f_32)
			{
				_0x59424BD75174C9B1();
				if (!func_16(&(uParam1->f_34), 1, 1, 1, 0, 1, 0))
				{
					bVar226 = true;
				}
			}
		}
	}
	if (!IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
	{
		REMOVE_ANIM_DICT(uParam1->f_16);
	}
	REMOVE_ANIM_DICT(*uParam1);
	DESTROY_CAM(uVar5, 0);
	func_13(&(uParam1->f_34));
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		SET_PED_RESET_FLAG(PLAYER_PED_ID(), 77, uVar3);
		SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
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
	if (DOES_CAM_EXIST(uParam0->f_1))
	{
		DESTROY_CAM(uParam0->f_1, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_2))
	{
		DESTROY_CAM(uParam0->f_2, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_3))
	{
		DESTROY_CAM(uParam0->f_3, 0);
	}
	if (DOES_CAM_EXIST(uParam0->f_4))
	{
		DESTROY_CAM(uParam0->f_4, 0);
	}
}

void func_15(int iParam0, int iParam1, int iParam2)
{
	DISABLE_CONTROL_ACTION(iParam0, iParam1, 1);
	*iParam2++;
}

int func_16(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	var uVar21;
	
	switch (*uParam0)
	{
		case 0:
			func_17();
			if (!IS_ENTITY_DEAD(uParam0->f_5, 0))
			{
				func_14(uParam0);
				vVar0 = { _GET_GAMEPLAY_CAM_COORDS() };
				if (bParam1)
				{
					vVar0 = { vVar0 + GET_ENTITY_VELOCITY(uParam0->f_5) * FtoV(GET_FRAME_TIME()) };
				}
				vVar3 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_5, vVar0) };
				vVar6 = { _GET_GAMEPLAY_CAM_ROT_2(2) };
				vVar9 = { vVar6 + uParam0->f_9 };
				vVar12 = { vVar9 - GET_ENTITY_ROTATION(uParam0->f_5, 2) };
				vVar15 = { (-SIN(vVar9.z) * COS(vVar9.x)), (COS(vVar9.z) * COS(vVar9.x)), SIN(vVar9.x) };
				vVar18 = { (-SIN(vVar12.z) * COS(vVar12.x)), (COS(vVar12.z) * COS(vVar12.x)), SIN(vVar12.x) };
				uVar21 = _0x80EC114669DAEFF4();
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					uParam0->f_3 = CREATE_CAMERA(1775630800, 0);
				}
				uParam0->f_1 = CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					ATTACH_CAM_TO_ENTITY(uParam0->f_1, uParam0->f_5, vVar3, 1);
				}
				else
				{
					SET_CAM_COORD(uParam0->f_1, vVar0);
				}
				SET_CAM_ROT(uParam0->f_1, vVar6, 2);
				SET_CAM_FOV(uParam0->f_1, uVar21);
				uParam0->f_2 = CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					ATTACH_CAM_TO_ENTITY(uParam0->f_2, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12), 1);
				}
				else
				{
					SET_CAM_COORD(uParam0->f_2, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12));
				}
				SET_CAM_ROT(uParam0->f_2, vVar6, 2);
				SET_CAM_FOV(uParam0->f_2, uVar21);
				if (uParam0->f_17 > 0 && iParam6 == 0)
				{
					uParam0->f_4 = CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						ATTACH_CAM_TO_ENTITY(uParam0->f_4, uParam0->f_5, vVar3 + vVar18 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13), 1);
					}
					else
					{
						SET_CAM_COORD(uParam0->f_4, vVar0 + vVar15 * Vector(uParam0->f_12, uParam0->f_12, uParam0->f_12) * Vector(uParam0->f_13, uParam0->f_13, uParam0->f_13));
					}
					SET_CAM_ROT(uParam0->f_4, vVar6, 2);
					SET_CAM_FOV(uParam0->f_4, uVar21);
				}
				if (uParam0->f_17 > 0 || iParam6 != 0)
				{
					_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_4, uParam0->f_17, 2);
					}
					_0x0FB82563989CF4FB(uParam0->f_3, uParam0->f_2, (uParam0->f_14 - uParam0->f_17), 2);
					_0xD1B0F412F109EA5D(uParam0->f_3, iParam6);
					SET_CAM_ACTIVE(uParam0->f_3, 1);
				}
				else
				{
					SET_CAM_ACTIVE_WITH_INTERP(uParam0->f_2, uParam0->f_1, uParam0->f_14, 2, 2);
				}
				RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				uParam0->f_7 = GET_GAME_TIMER();
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
					if (GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_16))
					{
						if (bParam5)
						{
							switch (uParam0->f_6)
							{
								case 1:
									_START_SCREEN_EFFECT("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									_START_SCREEN_EFFECT("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									_START_SCREEN_EFFECT("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
						}
						PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						uParam0->f_8 = 1;
					}
				}
			}
			if (GET_GAME_TIMER() >= (uParam0->f_7 + uParam0->f_15))
			{
				if (bParam2)
				{
					func_14(uParam0);
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
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
	_STOP_RECORDING_THIS_FRAME();
	func_18();
}

void func_18()
{
	Global_17272.f_134 = 1;
}

void func_19(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_20(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	uParam0->f_5 = uParam1;
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
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 0;
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
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
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_31(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_30();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_28();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_27())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(PLAYER_ID()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
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
				switch (Global_14553.f_1)
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
				if (IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_25();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_24();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
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
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(0);
	Global_15866 = 1;
}

void func_25()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	CLEAR_BIT(&Global_2424, 16);
}

int func_26()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (GET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 78, 1))
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
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_61();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

bool func_29(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_30()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_31(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

void func_32()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_33(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

void func_34(int iParam0)
{
	Global_36976 = (GET_GAME_TIMER() + iParam0);
}

void func_35(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_38(0))
		{
			func_36(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_36(int iParam0)
{
	if (func_39())
	{
		return;
	}
	if (Global_14725)
	{
		func_37(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_26())
	{
		Global_14553.f_1 = 3;
	}
}

void func_37(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_38(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_38(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_39()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_40(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

void func_41(var uParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_42(var uParam0, var uParam1)
{
	if (func_43(uParam1, 1))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_0", 0f, 1f);
	}
	if (func_43(uParam1, 2))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_1", 0f, 1f);
	}
	if (func_43(uParam1, 4))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_2", 0f, 1f);
	}
	if (func_43(uParam1, 8))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_3", 0f, 1f);
	}
	if (func_43(uParam1, 16))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_4", 0f, 1f);
	}
	if (func_43(uParam1, 32))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_5", 0f, 1f);
	}
	if (func_43(uParam1, 64))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_6", 0f, 1f);
	}
	if (func_43(uParam1, 128))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_7", 0f, 1f);
	}
	if (func_43(uParam1, 256))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_8", 0f, 1f);
	}
	if (func_43(uParam1, 512))
	{
		APPLY_PED_DAMAGE_PACK(uParam0, "HOSPITAL_9", 0f, 1f);
	}
	if (func_43(uParam1, 0))
	{
	}
}

bool func_43(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_44()
{
	if (((Global_93682 == 13 || Global_93682 == 10) || Global_93682 == 11) || Global_93682 == 12)
	{
		return 0;
	}
	return 1;
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

bool func_47(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_48()
{
	func_49();
	func_66(1);
}

void func_49()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		iVar1 = Global_37371[iVar0 /*5*/];
		if (!iVar1 == -1)
		{
			func_157(1, iVar1, 1);
		}
		iVar0++;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_37345[iVar2 /*5*/] == 0)
		{
			func_50(iVar2);
		}
		iVar2++;
	}
}

void func_50(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_37345[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_37345[iParam0 /*5*/].f_1 == PLAYER_PED_ID())
		{
			Global_37582 = 0;
		}
	}
	Global_37345[iParam0 /*5*/] = 13;
	Global_37345[iParam0 /*5*/].f_1 = 0;
	Global_37345[iParam0 /*5*/].f_2 = 0;
	Global_37345[iParam0 /*5*/].f_3 = 0;
	Global_37345[iParam0 /*5*/].f_4 = 0;
	Global_37343 = (Global_37343 - 1);
	if (Global_37343 < 0)
	{
		Global_37343 = 0;
	}
}

int func_51(vector3 vParam0, var uParam3, int iParam4, int iParam5)
{
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		func_55(0);
		CLEAR_AREA(vParam0, 5f, 1, 0, 0, 0);
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				SET_ENTITY_COORDS(PLAYER_PED_ID(), vParam0, 1, 0, 0, 1);
				SET_ENTITY_HEADING(PLAYER_PED_ID(), uParam3);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0);
		WAIT(0);
		CLEAR_AREA(vParam0, 5000f, 1, 0, 0, 0);
		CLEAR_AREA_OF_OBJECTS(vParam0, 5000f, 0);
		REMOVE_PARTICLE_FX_IN_RANGE(vParam0, 5000f);
		REMOVE_DECALS_IN_RANGE(vParam0, 5000f);
		func_54();
		func_53();
		SETTIMERA(0);
		func_55(1);
		if (!IS_NEW_LOAD_SCENE_ACTIVE())
		{
			while (!NEW_LOAD_SCENE_START_SPHERE(vParam0, 4500f, 0))
			{
				WAIT(0);
				if (TIMERA() > 2000)
				{
					SET_GAME_PAUSED(0);
					return 0;
				}
			}
		}
		SETTIMERA(0);
		while (!IS_NEW_LOAD_SCENE_LOADED())
		{
			WAIT(0);
			if (TIMERA() > 20000)
			{
				SET_GAME_PAUSED(0);
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
					NEW_LOAD_SCENE_STOP();
				}
				return 0;
			}
		}
		if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
					NEW_LOAD_SCENE_STOP();
				}
				SET_GAME_PAUSED(0);
				SETTIMERA(0);
				_0x4759CC730F947C81();
				if (iParam5 == 1)
				{
					_0x48ADC8A773564670();
				}
				else
				{
					SETTIMERA(5000);
				}
				POPULATE_NOW();
			}
		}
		while ((!_0x91D6DD290888CBAB() && !func_52()) && TIMERA() < 1500)
		{
			WAIT(0);
		}
		if (TIMERA() > 1500)
		{
			if (iParam5 == 1)
			{
			}
		}
		if (iParam4 == 1)
		{
			GET_GROUND_Z_FOR_3D_COORD(vParam0, &(vParam0.f_2), 0, 0);
			CLEAR_AREA(vParam0, 5f, 1, 0, 0, 0);
			if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
			{
				if (!IS_PED_INJURED(PLAYER_PED_ID()))
				{
					SET_ENTITY_COORDS(PLAYER_PED_ID(), vParam0, 1, 0, 0, 1);
					SET_ENTITY_HEADING(PLAYER_PED_ID(), uParam3);
				}
			}
		}
		SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		func_55(0);
		return 1;
	}
	func_55(0);
	return 0;
}

bool func_52()
{
	return !Global_70409.f_553;
}

void func_53()
{
	Global_70409.f_553 = 1;
	Global_70409.f_554 = 0;
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		Global_70409[iVar0] = 0;
		iVar0++;
	}
}

void func_55(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(Global_93682.f_20, 2))
			{
				SET_GAME_PAUSED(1);
				SET_BIT(&(Global_93682.f_20), 2);
			}
		}
		else if (IS_BIT_SET(Global_93682.f_20, 2))
		{
			SET_GAME_PAUSED(0);
			CLEAR_BIT(&(Global_93682.f_20), 2);
		}
	}
}

int func_56()
{
	if (IS_BIT_SET(GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

bool func_57(int iParam0)
{
	return IS_BIT_SET(Global_106565.f_7223[iParam0], 0);
}

int func_58(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

int func_59()
{
	if (Global_33790[11] == 1)
	{
		return 4;
	}
	if (!func_60(21))
	{
		return 0;
	}
	if (!func_58(130))
	{
		return 1;
	}
	if (!func_58(131))
	{
		return 2;
	}
	if (!func_60(22))
	{
		return 1;
	}
	if (!func_60(49))
	{
		return 3;
	}
	if (!func_60(28))
	{
		return 1;
	}
	return 3;
}

int func_60(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_330[iParam0 /*6*/];
}

int func_61()
{
	func_62();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_62()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_65(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_64(PLAYER_PED_ID());
			if (func_63(iVar0) && (!func_29(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_63(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_63(int iParam0)
{
	return iParam0 < 3;
}

int func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_65(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_65(int iParam0)
{
	if (func_63(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_66(bool bParam0)
{
	CUSTOM_MENU_COORDINATES(0f);
	_0x0225778816FDC28C(0f);
	SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	STOP_GAMEPLAY_CAM_SHAKING(1);
	SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	STOP_CINEMATIC_CAM_SHAKING(1);
	_0x12561FCBB62D5B9C(0);
	if (IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!IS_STRING_NULL_OR_EMPTY(&Global_37562))
	{
		if (IS_AUDIO_SCENE_ACTIVE(&Global_37562))
		{
			STOP_AUDIO_SCENE(&Global_37562);
		}
	}
	if (DOES_CAM_EXIST(Global_37551))
	{
		if (IS_CAM_SHAKING(Global_37551))
		{
			SET_CAM_SHAKE_AMPLITUDE(Global_37551, 0f);
			STOP_CAM_SHAKING(Global_37551, 1);
		}
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GET_TIMECYCLE_MODIFIER_INDEX() != -1 || _0x459FD2C8D0AB78BC() != -1)
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
	StringCopy(&Global_37562, "", 64);
	StringCopy(&Global_37578, "", 16);
	func_67();
}

void func_67()
{
	Global_37550 = 0;
	Global_37551 = 0;
	Global_37552 = 0;
	Global_37553 = 30000;
	Global_37554 = 0f;
	Global_37556 = 0f;
	Global_37555 = 0f;
	Global_37557 = 0f;
	StringCopy(&Global_37558, "", 16);
}

void func_68(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_262145.f_17567;
			break;
		
		case 1:
			iVar0 = Global_262145.f_17557;
			break;
		
		case 2:
			iVar0 = Global_262145.f_17568;
			break;
		
		case 3:
			iVar0 = Global_262145.f_17560;
			break;
		
		case 4:
			iVar0 = Global_262145.f_17556;
			break;
		
		case 6:
			iVar0 = 3;
			break;
		
		case 7:
			iVar0 = Global_262145.f_17571;
			break;
		
		case 8:
			iVar0 = Global_262145.f_17572;
			break;
		
		case 9:
			iVar0 = Global_262145.f_17575;
			break;
		
		case 22:
			iVar0 = Global_262145.f_17576;
			break;
		
		case 23:
			iVar0 = Global_262145.f_17569;
			break;
		
		case 25:
			iVar0 = Global_262145.f_18457;
			break;
		
		case 26:
			iVar0 = Global_262145.f_18456;
			break;
	}
	if (iVar0 != 0)
	{
		_0x501478855A6074CE(func_79(func_80()), func_77(func_80()), func_76(), func_75(), iParam0, iVar0);
	}
	func_74(iVar0);
	func_69(iVar0);
}

void func_69(int iParam0)
{
	int iVar0;
	
	iVar0 = func_73(3968, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1626536[PLAYER_ID() /*603*/].f_11.f_487 = iVar0;
	func_70(3968, iVar0, -1, 1, 0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_72();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

int func_72()
{
	return Global_1312745;
}

int func_73(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_71(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = PLAYER_ID();
	Global_1626536[iVar0 /*603*/].f_11.f_486 = (Global_1626536[iVar0 /*603*/].f_11.f_486 + iParam0);
	if (Global_1626536[iVar0 /*603*/].f_11.f_486 < -9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
	else if (Global_1626536[iVar0 /*603*/].f_11.f_486 > 9999)
	{
		Global_1626536[iVar0 /*603*/].f_11.f_486 = 9999;
	}
}

int func_75()
{
	if (Global_1669366.f_3 != 0)
	{
		return Global_1669366.f_3;
	}
	return -1;
}

int func_76()
{
	if (Global_1669366.f_2 != 0)
	{
		return Global_1669366.f_2;
	}
	return -1;
}

int func_77(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[1];
}

int func_78()
{
	return -1;
}

int func_79(int iParam0)
{
	if (iParam0 == func_78())
	{
		return -1;
	}
	return Global_1626536[iParam0 /*603*/].f_11.f_8[0];
}

int func_80()
{
	return Global_1626536[PLAYER_ID() /*603*/].f_11;
}

bool func_81(bool bParam0)
{
	return func_82(PLAYER_ID(), bParam0);
}

int func_82(int iParam0, bool bParam1)
{
	return func_83(iParam0, bParam1, 1);
}

int func_83(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_78())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_84(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1626536[iParam0 /*603*/].f_11;
	if (iVar0 != func_78() && Global_1626536[iVar0 /*603*/].f_11.f_447 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1)
{
	if (iParam0 != func_78())
	{
		if (Global_1626536[iParam0 /*603*/].f_11 != func_78())
		{
			if (Global_1626536[iParam0 /*603*/].f_11 == iParam0 && Global_1626536[iParam0 /*603*/].f_11.f_447 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_85(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
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
	var uVar25;
	int iVar26;
	
	if (bParam1)
	{
		if (_GET_NO_LOADING_SCREEN())
		{
			SET_NO_LOADING_SCREEN(0);
		}
	}
	if (func_95())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = iParam2;
		SET_PLAYER_CONTROL(iParam0, bParam1, uVar0);
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
		if (!func_93())
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
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0) && (IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && IS_ENTITY_DEAD(GET_PLAYER_PED(iParam0), 0))
			{
				return;
			}
			uVar25 = GET_PLAYER_PED(iParam0);
			if (!bVar19)
			{
				if ((bVar18 && bParam1 == 0) && NETWORK_IS_GAME_IN_PROGRESS())
				{
					FADE_OUT_LOCAL_PLAYER(1);
				}
				else if (bVar13 || (!func_91(PLAYER_ID(), 0) && !func_90()))
				{
					SET_ENTITY_VISIBLE(uVar25, !bVar13, 0);
				}
				if (!bVar13)
				{
					if (NETWORK_IS_GAME_IN_PROGRESS() && !bVar18)
					{
						FADE_OUT_LOCAL_PLAYER(0);
					}
					Global_2424047[iParam0 /*416*/].f_244 = 0;
				}
			}
			if (bParam1)
			{
				if (!func_89(uVar25) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(uVar25, 1, 0);
					}
				}
				if (!IS_ENTITY_ATTACHED(uVar25))
				{
					if (!bVar20)
					{
						FREEZE_ENTITY_POSITION(uVar25, 0);
					}
					_SET_ENTITY_SOMETHING(uVar25, 1);
				}
				else if (!bVar20)
				{
					FREEZE_ENTITY_POSITION(uVar25, 0);
				}
				SET_PED_CAN_BE_TARGETTED(uVar25, 1);
				SET_PLAYER_INVINCIBLE(iParam0, 0);
				_0x6BC97F4F4BB3C04B(iParam0, 0);
				if (HAS_PED_HEAD_BLEND_FINISHED(uVar25) && _0x7350823473013C02(uVar25))
				{
					_0x4668D80430D6C299(uVar25);
				}
				SET_PED_CAN_RAGDOLL(uVar25, 1);
				if (IS_PLAYER_CONTROL_ON(PLAYER_ID()) == 0)
				{
					func_88();
					func_87();
				}
				if (IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar22)
					{
					}
				}
				if (IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2424047[iParam0 /*416*/].f_245 = 0;
				if (!bVar23)
				{
					bVar2 = true;
				}
				if (Global_2405071.f_2668)
				{
					Global_2405071.f_2668 = 0;
				}
			}
			else
			{
				if (!func_89(uVar25) && !IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(uVar25))
				{
					if (!bVar21)
					{
						SET_ENTITY_COLLISION(uVar25, !bVar14, 0);
					}
					if (!IS_ENTITY_ATTACHED(uVar25))
					{
						if (!bVar20)
						{
							FREEZE_ENTITY_POSITION(uVar25, bVar15);
						}
						if (!bVar15)
						{
							_SET_ENTITY_SOMETHING(uVar25, 1);
						}
					}
					if (func_86(Global_4456448.f_161209))
					{
						FREEZE_ENTITY_POSITION(uVar25, 1);
					}
				}
				if (Global_1312844)
				{
					bVar9 = false;
				}
				if (bVar9)
				{
					SET_PLAYER_INVINCIBLE(iParam0, 0);
				}
				else
				{
					SET_PLAYER_INVINCIBLE(iParam0, 1);
				}
				SET_PED_CAN_BE_TARGETTED(uVar25, bVar16);
				if (bVar2)
				{
					if (!IS_PED_FATALLY_INJURED(uVar25) && !IS_PED_IN_ANY_VEHICLE(uVar25, 0))
					{
						CLEAR_PED_TASKS_IMMEDIATELY(uVar25);
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
			SET_PLAYER_CONTROL(iParam0, bParam1, iVar26);
		}
	}
}

bool func_86(int iParam0)
{
	return iParam0 == 17;
}

void func_87()
{
	vector3 vVar0;
	
	Global_2437364.f_1232 = 0;
	Global_2437364.f_1233 = 0;
	Global_2437364.f_1234 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2437364.f_1239 = -1;
	Global_2437364.f_1240 = 0;
	Global_2405071.f_2679 = { vVar0 };
}

void func_88()
{
	Global_2405071.f_692 = 0;
	Global_2405071.f_2722 = 0;
	Global_2405071.f_510 = 0;
	Global_2405071.f_598 = 0;
	Global_2424047[PLAYER_ID() /*416*/].f_207 = 0;
	Global_2405071.f_2677 = 0;
}

int func_89(var uParam0)
{
	int iVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(uParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = GET_SCRIPT_TASK_STATUS(uParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_90()
{
	return IS_BIT_SET(Global_2359302, 3);
}

bool func_91(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_92(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_92(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_72();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_93()
{
	if (func_94() == 0)
	{
		return 1;
	}
	return 0;
}

int func_94()
{
	return Global_1312467.f_18;
}

int func_95()
{
	if (Global_1589819[PLAYER_ID() /*818*/].f_35 && !Global_2449538.f_2846.f_214 == -1)
	{
		return 1;
	}
	return 0;
}

void func_96(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_97()
{
	int iVar0;
	
	if (bLocal_50)
	{
		return;
	}
	Local_43.f_4 = 0;
	if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	iVar0 = GET_RANDOM_INT_IN_RANGE(500, 3000);
	vLocal_60.x = 5;
	Local_55.f_2 = (TIMERA() + iVar0);
}

int func_98(int iParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	
	iVar0 = func_109();
	if (iVar0 == -2)
	{
		return 0;
	}
	if (IS_PED_INJURED(Local_43.f_1))
	{
		if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0) || IS_PED_GETTING_INTO_A_VEHICLE(Local_43.f_1))
		{
			return 0;
		}
		if (IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Local_43.f_1))
		{
			return 0;
		}
		if (func_105(Local_43.f_1))
		{
			return 0;
		}
	}
	if ((Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0) && Global_37371[iLocal_64 /*5*/].f_3 > Global_37371[iLocal_64 /*5*/].f_4)
	{
		return 0;
	}
	if ((Global_37371[iLocal_64 /*5*/].f_4 < 9 && Global_37371[iLocal_64 /*5*/].f_4 != 0) && Global_37371[iLocal_64 /*5*/].f_4 > Global_37371[iLocal_64 /*5*/].f_3)
	{
		return 0;
	}
	uVar1 = func_104(iParam0);
	if (IS_STRING_NULL_OR_EMPTY(uVar1))
	{
		return 0;
	}
	if (func_105(Local_43.f_1))
	{
		return 0;
	}
	REQUEST_CLIP_SET(uVar1);
	if (func_101(Local_43.f_1))
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
		if (!IS_STRING_NULL_OR_EMPTY(sVar2) && !IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			REQUEST_ANIM_DICT(sVar2);
			while (!HAS_ANIM_DICT_LOADED(sVar2))
			{
				WAIT(0);
			}
			if (!IS_PED_INJURED(Local_43.f_1))
			{
				TASK_PLAY_ANIM(Local_43.f_1, sVar2, sVar3, 1.5f, -1.5f, -1, 48, 0, 0, 0, 0);
				sLocal_54 = sVar3;
			}
		}
	}
	if (!HAS_CLIP_SET_LOADED(uVar1))
	{
		return 0;
	}
	if (IS_PED_INJURED(Local_43.f_1))
	{
		return 0;
	}
	SET_PED_MOVEMENT_CLIPSET(Local_43.f_1, uVar1, 0.75f);
	if (GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		SET_PED_STRAFE_CLIPSET(Local_43.f_1, "move_ped_strafing_firstperson@drunk");
	}
	SET_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, uVar1, "idle", 2f, 1);
	vLocal_60.z = uVar1;
	bLocal_51 = true;
	iVar4 = 0;
	switch (func_64(Local_43.f_1))
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
			if (IS_PED_A_PLAYER(Local_43.f_1))
			{
				if (!func_99())
				{
					iVar4 = "FACIALS@GEN_MALE@BASE";
				}
				else
				{
					iVar4 = "FACIALS@GEN_FEMALE@BASE";
				}
			}
			else if (IS_PED_MALE(Local_43.f_1))
			{
				iVar4 = "FACIALS@GEN_MALE@BASE";
			}
			else
			{
				iVar4 = "FACIALS@GEN_FEMALE@BASE";
			}
			break;
	}
	SET_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1, "mood_drunk_1", iVar4);
	SET_PED_RESET_FLAG(Local_43.f_1, 200, 1);
	SET_PED_RESET_FLAG(Local_43.f_1, 46, 1);
	SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 0);
	SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, 1);
	SET_PED_IS_DRUNK(Local_43.f_1, 1);
	return 1;
}

bool func_99()
{
	return func_100(PLAYER_ID());
}

int func_100(var uParam0)
{
	if (GET_ENTITY_MODEL(GET_PLAYER_PED(uParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_101(int iParam0)
{
	vector3 vVar0;
	
	if (IS_PED_IN_ANY_VEHICLE(iParam0, 1) || IS_PED_GETTING_INTO_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 7)
	{
		return 0;
	}
	if (GET_SCRIPT_TASK_STATUS(iParam0, 1785177548) != 7)
	{
		return 0;
	}
	if (IS_PED_SHOOTING(iParam0))
	{
		return 0;
	}
	if (IS_ENTITY_IN_AIR(iParam0))
	{
		return 0;
	}
	if (IS_PED_RAGDOLL(iParam0))
	{
		return 0;
	}
	if (IS_PED_CLIMBING(iParam0))
	{
		return 0;
	}
	if (Global_68807)
	{
		return 0;
	}
	if (func_103())
	{
		return 0;
	}
	if (iParam0 == PLAYER_PED_ID())
	{
		if (!IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER_ID()))
		{
			return 0;
		}
		if (!IS_PLAYER_CONTROL_ON(PLAYER_ID()))
		{
			return 0;
		}
		if (IS_PLAYER_FREE_AIMING(PLAYER_ID()) || IS_PLAYER_TARGETTING_ANYTHING(PLAYER_ID()))
		{
			return 0;
		}
		if (func_102())
		{
			return 0;
		}
	}
	vVar0 = { GET_ENTITY_VELOCITY(iParam0) };
	if (VMAG2(vVar0) >= (1f * 1f))
	{
		return 0;
	}
	return 1;
}

bool func_102()
{
	return Global_93734.f_340 > 0;
}

bool func_103()
{
	return GET_GAME_TIMER() <= Global_17411.f_5878 + 100;
}

char* func_104(int iParam0)
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

int func_105(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_106(iParam0);
	uVar1 = func_104(iVar0);
	if (IS_STRING_NULL_OR_EMPTY(vLocal_60.z))
	{
		if (IS_STRING_NULL_OR_EMPTY(uVar1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return ARE_STRINGS_EQUAL(vLocal_60.z, uVar1);
}

int func_106(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_107(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_37371[iVar1 /*5*/].f_2;
}

int func_107(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37371[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0)
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
		if (iParam0 == Global_37371[iVar0 /*5*/].f_1)
		{
			return Global_37371[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_109()
{
	int iVar0;
	
	if (Local_55 == -2)
	{
		return -2;
	}
	if (Local_55 == -1)
	{
		return -1;
	}
	iVar0 = (Local_55 - TIMERA());
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

void func_110()
{
	if (bLocal_50)
	{
		return;
	}
	if (!func_111())
	{
		vLocal_60.x = 5;
		Local_55.f_2 = TIMERA() + 5000;
		return;
	}
	vLocal_60.x = 6;
}

bool func_111()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	
	if (Local_43.f_4 == 0)
	{
		return 0;
	}
	if (IS_ENTITY_DEAD(Local_43.f_4, 0))
	{
		return 0;
	}
	vVar0 = { GET_ENTITY_COORDS(Local_43.f_1, 1) };
	vVar3 = { GET_ENTITY_COORDS(Local_43.f_4, 1) };
	fVar6 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, 1);
	return fVar6 < 7f;
}

void func_112()
{
	int iVar0;
	char* sVar1;
	
	if (Local_43.f_1 == PLAYER_PED_ID())
	{
		DISABLE_CONTROL_ACTION(0, 36, 1);
		if (GET_PED_STEALTH_MOVEMENT(Local_43.f_1))
		{
			if (Global_37371[iLocal_64 /*5*/].f_2 == 0 || Global_37371[iLocal_64 /*5*/].f_2 == 2)
			{
				SET_PED_STEALTH_MOVEMENT(Local_43.f_1, 0, 0);
			}
		}
		if (IS_PED_DUCKING(Local_43.f_1))
		{
			SET_PED_DUCKING(Local_43.f_1, 0);
		}
	}
	if (Local_55 != -2)
	{
		if (Local_55 == -1)
		{
			if (Global_37371[iLocal_64 /*5*/].f_2 != 0)
			{
				Global_37371[iLocal_64 /*5*/].f_2 = 0;
			}
		}
		else
		{
			iVar0 = (Local_55 - TIMERA());
			if (iVar0 <= 0)
			{
				iVar0 = 0;
			}
			iVar0 = (iVar0 / 1000) + 1;
			if (Global_37371[iLocal_64 /*5*/].f_2 == 0)
			{
				if (iVar0 < 30)
				{
					Global_37371[iLocal_64 /*5*/].f_2 = 2;
					if (!func_98(2))
					{
						Global_37371[iLocal_64 /*5*/].f_2 = 0;
						return;
					}
				}
			}
			if (Global_37371[iLocal_64 /*5*/].f_2 == 2)
			{
				if (iVar0 < 10)
				{
					Global_37371[iLocal_64 /*5*/].f_2 = 1;
					if (!func_98(2))
					{
						Global_37371[iLocal_64 /*5*/].f_2 = 2;
						return;
					}
				}
			}
			if (Global_37371[iLocal_64 /*5*/].f_2 == 1)
			{
			}
		}
	}
	else
	{
		return;
	}
	if (!IS_STRING_NULL_OR_EMPTY(sLocal_54))
	{
		if (!func_101(Local_43.f_1))
		{
			sVar1 = "MOVE_M@DRUNK@TRANSITIONS";
			if (IS_ENTITY_PLAYING_ANIM(Local_43.f_1, sVar1, sLocal_54, 3))
			{
				STOP_ANIM_TASK(Local_43.f_1, sVar1, sLocal_54, -4f);
			}
			sLocal_54 = "";
			return;
		}
	}
	if (Global_37371[iLocal_64 /*5*/].f_3 >= 10 || Global_37371[iLocal_64 /*5*/].f_4 >= 15)
	{
		if (GET_SCRIPT_TASK_STATUS(Local_43.f_1, 1785177548) == 1 && !IS_BIT_SET(Global_1671295.f_3, 27))
		{
			return;
		}
		if (IS_ANY_SPEECH_PLAYING(Local_43.f_1))
		{
			return;
		}
		if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 1))
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && func_122(PLAYER_ID())) && Global_262145.f_23709)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && func_121())
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && func_120(PLAYER_ID())) && Global_262145.f_26005)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && func_117(PLAYER_ID())) && Global_262145.f_26038)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if ((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && func_113(PLAYER_ID()) == 15)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		if (((NETWORK_IS_GAME_IN_PROGRESS() && Local_43.f_1 == PLAYER_PED_ID()) && Global_68807) && !Global_37344)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
			return;
		}
		vLocal_60.y = 3;
		return;
	}
	if (!bLocal_51)
	{
		return;
	}
	if (!func_105(Local_43.f_1))
	{
		return;
	}
}

int func_113(int iParam0)
{
	if (func_116(iParam0) == 243)
	{
		return func_114(iParam0);
	}
	return -1;
}

int func_114(int iParam0)
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_181;
	}
	return -1;
}

int func_115(int iParam0, int iParam1)
{
	if (Global_1626536[iParam0 /*603*/].f_11.f_33 != -1 || (iParam1 && Global_1626536[iParam0 /*603*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_116(int iParam0)
{
	if (func_115(iParam0, 0))
	{
		return Global_1626536[iParam0 /*603*/].f_11.f_33;
	}
	return -1;
}

int func_117(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 15;
			}
		}
	}
	return 0;
}

int func_118(int iParam0)
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
		case 126:
		case 127:
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
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
	}
	return -1;
}

int func_119(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 14;
			}
		}
	}
	return 0;
}

var func_121()
{
	return Global_2506066;
}

int func_122(int iParam0)
{
	if (iParam0 != func_78())
	{
		if (func_119(iParam0, 1, 1))
		{
			if (Global_2424047[iParam0 /*416*/].f_309.f_5 != -1)
			{
				return func_118(Global_2424047[iParam0 /*416*/].f_309.f_5) == 11;
			}
		}
	}
	return 0;
}

int func_123()
{
	int iVar0;
	
	if (!IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		return 0;
	}
	iVar0 = 0;
	iVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	if (!GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) == Local_43.f_1)
	{
		return 0;
	}
	Local_43.f_4 = iVar0;
	vLocal_60.x = 7;
	return 1;
}

void func_124()
{
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
}

void func_125()
{
	var uVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	if (!bLocal_50)
	{
		return;
	}
	if (!IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		return;
	}
	if (!IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()))
	{
		return;
	}
	if (IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER_ID(), 0))
	{
		return;
	}
	uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
	fVar1 = GET_ENTITY_SPEED(uVar0);
	if (fVar1 < 5f)
	{
		return;
	}
	vVar2 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
	vVar5 = { vVar2 - Vector(3f, 30f, 30f) };
	vVar8 = { vVar2 + Vector(3f, 30f, 30f) };
	if (!IS_COP_VEHICLE_IN_AREA_3D(vVar5, vVar8) && !IS_COP_PED_IN_AREA_3D(vVar5, vVar8))
	{
		return;
	}
	SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER_ID(), 1, 0);
	SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
	func_11(73, 1);
}

void func_126()
{
	var uVar0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	uVar0 = Local_43.f_1;
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		uVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);
		if (!iVar2 == Local_43.f_1)
		{
			return;
		}
		if (NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_HAS_CONTROL_OF_ENTITY(uVar1))
		{
			return;
		}
		uVar0 = uVar1;
	}
	else if (!PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	else if (!GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		fLocal_53 = 0f;
		func_128(uVar0, 0f);
		return;
	}
	if (TIMERA() < Local_55.f_4)
	{
		func_128(uVar0, fLocal_53);
		return;
	}
	if (IS_ENTITY_A_PED(uVar0))
	{
		Local_55.f_4 = TIMERA() + 2000;
	}
	else
	{
		Local_55.f_4 = TIMERA() + 1000;
	}
	fVar3 = GET_ENTITY_SPEED(uVar0);
	if (fVar3 < 0.04f)
	{
		fLocal_53 = 0f;
		func_128(uVar0, 0f);
		return;
	}
	if (Local_55.f_1 == -1)
	{
		fLocal_53 = func_127(uVar0, 0.13f, 0.06f);
	}
	else
	{
		iVar4 = (Local_55.f_1 - TIMERA());
		if (iVar4 < 5000)
		{
			fLocal_53 = 0f;
		}
		else if (iVar4 < 15000)
		{
			fLocal_53 = func_127(uVar0, 0.05f, 0.02f);
		}
		else if (iVar4 < 30000)
		{
			fLocal_53 = func_127(uVar0, 0.07f, 0.03f);
		}
		else if (iVar4 < 45000)
		{
			fLocal_53 = func_127(uVar0, 0.09f, 0.04f);
		}
		else if (iVar4 < 600000)
		{
			fLocal_53 = func_127(uVar0, 0.1f, 0.05f);
		}
		else
		{
			fLocal_53 = func_127(uVar0, 0.13f, 0.06f);
		}
	}
	func_128(uVar0, fLocal_53);
}

float func_127(var uParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	var uVar2;
	
	fVar0 = GET_RANDOM_FLOAT_IN_RANGE(-fParam1, fParam1);
	fVar1 = GET_RANDOM_FLOAT_IN_RANGE(0f, fParam2);
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 - fVar1);
	}
	else
	{
		fVar0 = (fVar0 + fVar1);
	}
	if (IS_ENTITY_A_PED(uParam0))
	{
		if (IS_PED_SPRINTING(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0)))
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
		uVar2 = GET_ENTITY_MODEL(uParam0);
		if (IS_THIS_MODEL_A_BIKE(uVar2))
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

void func_128(var uParam0, float fParam1)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
	{
		return;
	}
	if (IS_ENTITY_A_PED(uParam0))
	{
		_0x288DF530C92DAD6F(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0), fParam1);
	}
	else if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_VEHICLE_STEER_BIAS(GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0), fParam1);
	}
}

void func_129()
{
	var uVar0;
	
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_37371[iLocal_64 /*5*/].f_3 >= 10 || Global_37371[iLocal_64 /*5*/].f_4 >= 15)
		{
			if (Global_37371[iLocal_64 /*5*/].f_3 >= 10)
			{
				Global_37371[iLocal_64 /*5*/].f_3 = 9;
			}
			if (Global_37371[iLocal_64 /*5*/].f_4 >= 15)
			{
				Global_37371[iLocal_64 /*5*/].f_4 = 14;
			}
		}
	}
	if (bLocal_50)
	{
		return;
	}
	uVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	if (!IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
		vLocal_60.x = 11;
		return;
	}
}

void func_130()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (TIMERA() <= Local_55.f_3)
	{
		return;
	}
	iVar0 = GET_SCRIPT_TASK_STATUS(PLAYER_PED_ID(), 355471868);
	if (!iVar0 == 7)
	{
		Local_55.f_3 = TIMERA() + 1000;
		return;
	}
	if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 4;
		Local_55.f_3 = -2;
		return;
	}
	uVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
	iVar2 = GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);
	if (iVar2 == Local_43.f_1)
	{
		func_131();
		Local_55.f_3 = -2;
		return;
	}
	TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, uVar1, 0);
	vLocal_60.x = 9;
	Local_55.f_3 = TIMERA() + 1000;
}

void func_131()
{
	if (vLocal_60.x == 10)
	{
		return;
	}
	vLocal_60.x = 10;
	if (iLocal_48 == -1)
	{
		return;
	}
	func_157(iLocal_48, 2, 5);
	Local_55.f_4 = TIMERA();
	fLocal_53 = 0f;
}

void func_132()
{
	if (IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		vLocal_60.x = 10;
		return;
	}
	if (TIMERA() < Local_55.f_3)
	{
		return;
	}
	vLocal_60.x = 4;
	Local_55.f_3 = -2;
}

void func_133()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (!bLocal_50)
	{
	}
	iVar0 = 0;
	bVar1 = false;
	if (bVar1 || IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
	{
		if (!bLocal_50)
		{
		}
		iVar0 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		if (!iVar0 == Local_43.f_4)
		{
			if (!bLocal_50)
			{
			}
			if (!bLocal_50)
			{
				if (!bLocal_50)
				{
				}
				TASK_LEAVE_ANY_VEHICLE(Local_43.f_1, 0, 0);
				vLocal_60.x = 11;
				return;
			}
			Local_43.f_4 = iVar0;
		}
		if (bVar1)
		{
			if (!bLocal_50)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_50)
		{
			if (!bLocal_50)
			{
			}
			func_131();
			return;
		}
		if (!bLocal_50)
		{
		}
		iVar2 = GET_PED_IN_VEHICLE_SEAT(Local_43.f_4, -1, 0);
		if (iVar2 == Local_43.f_1)
		{
			func_131();
			return;
		}
		TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Local_43.f_1, iVar0, 0);
		vLocal_60.x = 9;
		Local_55.f_3 = TIMERA() + 1000;
		return;
	}
	if (!func_111())
	{
		CLEAR_PED_TASKS(Local_43.f_1);
		vLocal_60.x = 4;
		return;
	}
	if (!bLocal_50)
	{
		iVar3 = GET_SCRIPT_TASK_STATUS(Local_43.f_1, -1794415470);
		if (iVar3 == 7)
		{
			if (!IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
			{
				CLEAR_PED_TASKS(Local_43.f_1);
				vLocal_60.x = 4;
				return;
			}
		}
	}
}

void func_134()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	
	if (bLocal_50)
	{
		return;
	}
	if (Local_43.f_4 == 0)
	{
		vLocal_60.x = 4;
		return;
	}
	if (!IS_VEHICLE_DRIVEABLE(Local_43.f_4, 0))
	{
		Local_43.f_4 = 0;
		vLocal_60.x = 4;
		return;
	}
	vVar0 = { GET_ENTITY_COORDS(Local_43.f_1, 1) };
	vVar3 = { GET_ENTITY_COORDS(Local_43.f_4, 1) };
	fVar6 = GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, 1);
	if (fVar6 > 3f)
	{
		if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
		{
			vLocal_60.x = 12;
			return;
		}
		vLocal_60.x = 5;
		Local_55.f_2 = TIMERA() + 2000;
		return;
	}
	iVar7 = GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Local_43.f_4);
	iVar8 = 0;
	bVar9 = true;
	iVar8 = 1;
	while (bVar9)
	{
		if (iVar8 < iVar7)
		{
			if (IS_VEHICLE_SEAT_FREE(Local_43.f_4, iVar8, 0))
			{
				bVar9 = false;
			}
			else
			{
				iVar8++;
			}
		}
		else
		{
			bVar9 = false;
			iVar8 = -1;
		}
	}
	if (iVar8 == -1)
	{
		if (iVar8 == -1)
		{
			vLocal_60.x = 4;
			return;
		}
	}
	func_135();
	TASK_ENTER_VEHICLE(Local_43.f_1, Local_43.f_4, -1, iVar8, 1073741824, 1, 0);
	vLocal_60.x = 7;
}

void func_135()
{
	if (!DOES_ENTITY_EXIST(Local_43.f_1))
	{
		return;
	}
	if (!IS_PED_INJURED(Local_43.f_1))
	{
		RESET_PED_MOVEMENT_CLIPSET(Local_43.f_1, 1048576000);
		RESET_PED_STRAFE_CLIPSET(Local_43.f_1);
		CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Local_43.f_1, 0, -1056964608);
		vLocal_60.z = "";
		CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Local_43.f_1);
		SET_PED_RESET_FLAG(Local_43.f_1, 200, 0);
		SET_PED_RESET_FLAG(Local_43.f_1, 46, 0);
		SET_PED_CAN_PLAY_AMBIENT_ANIMS(Local_43.f_1, 1);
		SET_PED_FLEE_ATTRIBUTES(Local_43.f_1, 262144, 0);
		SET_PED_IS_DRUNK(Local_43.f_1, 0);
	}
	if (!bLocal_51)
	{
		return;
	}
	bLocal_51 = false;
}

void func_136()
{
	if (TIMERA() < Local_55.f_2)
	{
		func_112();
		return;
	}
	func_137();
	Local_55.f_2 = -2;
	vLocal_60.x = 12;
}

int func_137()
{
	if (!func_105(Local_43.f_1))
	{
		return 0;
	}
	if (!bLocal_51)
	{
		return 0;
	}
	func_138(Local_43.f_1);
	vLocal_60.z = "";
	Global_2528542.f_4531 = 1;
	return 1;
}

void func_138(var uParam0)
{
	RESET_PED_MOVEMENT_CLIPSET(uParam0, 1048576000);
	CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uParam0, 0, -1056964608);
	SET_PED_RESET_FLAG(uParam0, 200, 0);
	SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0, 1);
	SET_PED_FLEE_ATTRIBUTES(uParam0, 262144, 0);
	SET_PED_IS_DRUNK(uParam0, 0);
}

void func_139()
{
	int iVar0;
	
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
	}
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		vLocal_60.x = 10;
		return;
	}
	if (func_105(Local_43.f_1))
	{
		vLocal_60.x = 12;
		return;
	}
	if (Local_55 == -2)
	{
		return;
	}
	if (!func_98(Global_37371[iLocal_64 /*5*/].f_2))
	{
		return;
	}
	vLocal_60.x = 12;
}

void func_140()
{
}

void func_141()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 6;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 16)
	{
		iVar0 = Global_37452[iVar1 /*6*/].f_2;
		if (!iVar0 == 6)
		{
			if (Global_37452[iVar1 /*6*/].f_1 == iLocal_48)
			{
				func_143(iVar1);
				func_142(iVar1);
			}
			else if (Global_37452[iVar1 /*6*/].f_1 == 2)
			{
				if (!iLocal_49 == -1)
				{
					if (iLocal_49 == Global_37452[iVar1 /*6*/])
					{
						func_143(iVar1);
					}
				}
			}
		}
		iVar1++;
	}
}

void func_142(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 16)
	{
		return;
	}
	Global_37452[iParam0 /*6*/] = -1;
	Global_37452[iParam0 /*6*/].f_1 = -1;
	Global_37452[iParam0 /*6*/].f_2 = 6;
	Global_37452[iParam0 /*6*/].f_3 = 0;
	Global_37452[iParam0 /*6*/].f_4 = 0;
}

void func_143(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_37452[iParam0 /*6*/].f_2;
	switch (iVar0)
	{
		case 1:
			func_164();
			break;
		
		case 2:
			func_147(Global_37452[iParam0 /*6*/].f_4);
			break;
		
		case 3:
			func_146(Global_37452[iParam0 /*6*/].f_5);
			break;
		
		case 4:
			func_145();
			break;
		
		case 5:
			func_144();
			break;
		
		case 0:
			break;
		
		case 6:
			break;
		
		default:
			break;
	}
}

void func_144()
{
	vLocal_60.y = 2;
}

void func_145()
{
	int iVar0;
	
	Global_37371[iLocal_64 /*5*/].f_4++;
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_4 < 9 && Global_37371[iLocal_64 /*5*/].f_4 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_146(int iParam0)
{
	int iVar0;
	
	Global_37371[iLocal_64 /*5*/].f_3 = (Global_37371[iLocal_64 /*5*/].f_3 + iParam0);
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar0 = (Local_55 - TIMERA());
		if (iVar0 <= 0)
		{
			iVar0 = 0;
		}
		iVar0 = (iVar0 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar0 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar0 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
		if (!func_105(Local_43.f_1))
		{
			func_98(Global_37371[iLocal_64 /*5*/].f_2);
		}
	}
}

void func_147(int iParam0)
{
	Local_43.f_3 = (Local_43.f_3 + iParam0);
	Local_43.f_2 = (Local_43.f_2 + iParam0);
	Local_55.f_1 = (Local_55.f_1 + iParam0);
	Local_55 = (Local_55 + iParam0);
}

void func_148()
{
	int iVar0;
	
	if (!bLocal_50)
	{
		iLocal_63 = -1;
		return;
	}
	if (iLocal_63 < 0)
	{
		iLocal_63 = GET_PLAYER_WANTED_LEVEL(PLAYER_ID());
		return;
	}
	iVar0 = GET_PLAYER_WANTED_LEVEL(PLAYER_ID());
	if (iVar0 != iLocal_63)
	{
		if (iVar0 > iLocal_63)
		{
			func_149();
		}
		iLocal_63 = iVar0;
		return;
	}
}

void func_149()
{
}

void func_150()
{
	if (!Local_55 == -1)
	{
		if (!Local_55 == -2)
		{
			if (TIMERA() >= Local_55)
			{
				func_135();
				Local_55 = -2;
				vLocal_60.x = 12;
			}
		}
		if (TIMERA() > Local_55.f_1)
		{
			func_164();
		}
	}
}

void func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_37452[iVar0 /*6*/])
		{
			func_142(iVar0);
		}
		iVar0++;
	}
}

void func_152()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vLocal_60.x = 4;
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		if (IS_PED_SITTING_IN_ANY_VEHICLE(Local_43.f_1))
		{
			vLocal_60.x = 10;
		}
	}
	if (bLocal_50)
	{
		func_155();
		func_11(71, 1);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = func_73(2057, -1, 0);
			iVar1 = (iVar0 / 10) + 1 * 10;
			if (iVar0 + 1 >= iVar1)
			{
				func_153(iVar1);
			}
			func_70(2057, iVar0 + 1, -1, 1, 0);
		}
		else
		{
			iVar2 = 0;
			iVar3 = 0;
			iVar4 = 0;
			STAT_GET_INT(joaat("sp0_sp_num_times_drunk"), &iVar2, -1);
			STAT_GET_INT(joaat("sp1_sp_num_times_drunk"), &iVar3, -1);
			STAT_GET_INT(joaat("sp2_sp_num_times_drunk"), &iVar4, -1);
			iVar5 = ((iVar2 + iVar3) + iVar4);
			iVar6 = (iVar5 / 10) + 1 * 10;
			if (iVar5 + 1 >= iVar6)
			{
				func_153(iVar6);
			}
			switch (func_61())
			{
				case 0:
					STAT_SET_INT(joaat("sp0_sp_num_times_drunk"), iVar2 + 1, 1);
					break;
				
				case 1:
					STAT_SET_INT(joaat("sp1_sp_num_times_drunk"), iVar3 + 1, 1);
					break;
				
				case 2:
					STAT_SET_INT(joaat("sp2_sp_num_times_drunk"), iVar4 + 1, 1);
					break;
				}
		}
		vLocal_60.y = 1;
		return;
	}
	vLocal_60.y = 12;
	if (Local_55 == -1)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
	}
	else if (Global_37371[iLocal_64 /*5*/].f_3 < 3 && Global_37371[iLocal_64 /*5*/].f_3 != 0)
	{
		Global_37371[iLocal_64 /*5*/].f_2 = -1;
	}
	else
	{
		iVar7 = (Local_55 - TIMERA());
		if (iVar7 <= 0)
		{
			iVar7 = 0;
		}
		iVar7 = (iVar7 / 1000) + 1;
		Global_37371[iLocal_64 /*5*/].f_2 = 0;
		if (iVar7 < 30)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 2;
		}
		if (iVar7 < 10)
		{
			Global_37371[iLocal_64 /*5*/].f_2 = 1;
		}
	}
}

void func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = func_154(81);
	Global_2414402[iVar0 /*83*/] = 81;
	Global_2414402[iVar0 /*83*/].f_17 = iParam0;
	StringCopy(&(Global_2414402[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414402[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414402[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_155()
{
}

void func_156()
{
	Local_55 = Local_43.f_2;
	Local_55.f_1 = Local_43.f_3;
	Local_55.f_2 = -2;
	Local_55.f_3 = -2;
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	func_158(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_158(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
	if (func_160(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_159();
	if (iVar0 == -1)
	{
		return;
	}
	Global_37452[iVar0 /*6*/] = iParam0;
	Global_37452[iVar0 /*6*/].f_1 = iParam1;
	Global_37452[iVar0 /*6*/].f_2 = iParam2;
	Global_37452[iVar0 /*6*/].f_3 = iParam3;
	Global_37452[iVar0 /*6*/].f_4 = iParam4;
	Global_37452[iVar0 /*6*/].f_5 = iParam5;
}

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_37452[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_160(int iParam0, int iParam1, int iParam2)
{
	if (func_161(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_37452[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_37452[iVar0 /*6*/])
			{
				if (iParam1 == Global_37452[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_162()
{
	int iVar0;
	
	bLocal_50 = false;
	if (Local_43.f_1 == PLAYER_PED_ID())
	{
		bLocal_50 = true;
		Global_37583 = 1;
		Global_37585++;
	}
	if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		iVar0 = func_64(Local_43.f_1);
		switch (iVar0)
		{
			case 17:
				SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_DRUNK");
				break;
			
			case 19:
				SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_DRUNK");
				break;
			}
	}
}

void func_163()
{
	if (!iLocal_48 == -1)
	{
		return;
	}
	iLocal_48 = func_108(Local_43.f_1);
	if (iLocal_48 == -1)
	{
		return;
	}
	iLocal_64 = func_107(iLocal_48);
}

void func_164()
{
	int iVar0;
	
	if (!func_29(0) && !func_29(3))
	{
		if (!IS_ENTITY_DEAD(Local_43.f_1, 0))
		{
			iVar0 = func_64(Local_43.f_1);
			if (Global_37371[iLocal_64 /*5*/].f_4 > 0)
			{
				switch (iVar0)
				{
					case 0:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 1:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					
					case 2:
						func_166(Local_43.f_1, "POST_STONED", 24);
						break;
					}
			}
			switch (iVar0)
			{
				case 17:
					SET_AMBIENT_VOICE_NAME(Local_43.f_1, "AMANDA_NORMAL");
					break;
				
				case 19:
					SET_AMBIENT_VOICE_NAME(Local_43.f_1, "LAMAR_NORMAL");
					break;
				}
			}
	}
	func_135();
	if (bLocal_50)
	{
		Global_37583 = 0;
	}
	func_165();
	REMOVE_ANIM_DICT(func_104(0));
	REMOVE_ANIM_DICT(func_104(2));
	REMOVE_ANIM_DICT(func_104(1));
	Global_1666256 = 0;
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
	{
		func_36(0);
	}
	TERMINATE_THIS_THREAD();
}

void func_165()
{
	var uVar0;
	var uVar1;
	int iVar2;
	
	if (IS_ENTITY_DEAD(Local_43.f_1, 0))
	{
		return;
	}
	uVar0 = Local_43.f_1;
	if (IS_PED_IN_ANY_VEHICLE(Local_43.f_1, 0))
	{
		uVar1 = GET_VEHICLE_PED_IS_IN(Local_43.f_1, 0);
		iVar2 = GET_PED_IN_VEHICLE_SEAT(uVar1, -1, 0);
		if (!Local_43.f_1 == iVar2)
		{
			return;
		}
		uVar0 = uVar1;
	}
	else if (!GET_FOLLOW_PED_CAM_VIEW_MODE() == 4 || !PLAYER_PED_ID() == Local_43.f_1)
	{
		return;
	}
	fLocal_53 = 0f;
	func_128(uVar0, 0f);
}

void func_166(var uParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_167(iParam2), 1);
}

int func_167(int iParam0)
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

