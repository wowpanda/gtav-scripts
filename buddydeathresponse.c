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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
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
	if (HAS_FORCE_CLEANUP_OCCURRED(2) || _IS_INTERIOR_RENDERING_DISABLED())
	{
		TERMINATE_THIS_THREAD();
	}
	func_1();
}

void func_1()
{
	vector3 vVar0;
	var uVar3;
	
	while (!func_8(&uLocal_20))
	{
		WAIT(0);
	}
	if (!IS_PED_INJURED(uLocal_20))
	{
		if (!Global_90207)
		{
			SET_ENTITY_AS_MISSION_ENTITY(uLocal_20, 1, 1);
			if (GET_SCRIPT_TASK_STATUS(uLocal_20, 1435919172) != 7)
			{
				CLEAR_PED_TASKS(uLocal_20);
			}
			vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_20, 1);
			OPEN_SEQUENCE_TASK(&uVar3);
			if (!IS_PED_IN_ANY_VEHICLE(uLocal_20, 0))
			{
				if (!IS_PED_IN_COMBAT(uLocal_20, 0) && !IS_PED_IN_ANY_VEHICLE(uLocal_20, 0))
				{
					TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 6000);
				}
			}
			TASK_LOOK_AT_COORD(0, vVar0, 6000, 0, 2);
			CLOSE_SEQUENCE_TASK(uVar3);
			TASK_PERFORM_SEQUENCE(uLocal_20, uVar3);
		}
		func_2(uLocal_20);
	}
	while (!IS_SCREEN_FADED_OUT())
	{
		WAIT(0);
	}
	if (DOES_ENTITY_EXIST(uLocal_20))
	{
		if (!IS_PED_INJURED(uLocal_20))
		{
			SET_PED_KEEP_TASK(uLocal_20, 1);
		}
		SET_PED_AS_NO_LONGER_NEEDED(&uLocal_20);
	}
	Global_90207 = 0;
	TERMINATE_THIS_THREAD();
}

void func_2(var uParam0)
{
	int iVar0;
	
	iVar0 = GET_GAME_TIMER() + 1000;
	while (GET_GAME_TIMER() < iVar0 && !IS_SCREEN_FADED_OUT())
	{
		WAIT(0);
	}
	if (!IS_PED_INJURED(uParam0))
	{
		if (iLocal_19 == 1)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 2:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "FRANKLIN_NORMAL", 3);
					break;
				
				case 0:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "FRANKLIN_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 2)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 1:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "TREVOR_NORMAL", 3);
					break;
				
				case 0:
					func_3(uParam0, "BUDDY_SEES_MICHAEL_DEATH", "TREVOR_NORMAL", 3);
					break;
			}
		}
		else if (iLocal_19 == 0)
		{
			switch (func_5(PLAYER_PED_ID()))
			{
				case 2:
					func_3(uParam0, "BUDDY_SEES_TREVOR_DEATH", "MICHAEL_NORMAL", 3);
					break;
				
				case 1:
					func_3(uParam0, "BUDDY_SEES_FRANKLIN_DEATH", "MICHAEL_NORMAL", 3);
					break;
				}
			}
	}
}

void func_3(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam0, sParam1, sParam2, func_4(iParam3), 0);
}

int func_4(int iParam0)
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

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_6(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_7(int iParam0)
{
	return iParam0 < 3;
}

int func_8(var uParam0)
{
	var uVar0;
	
	iLocal_18 = 0;
	while (iLocal_18 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_91081[iLocal_18]) && !IS_PED_INJURED(Global_91081[iLocal_18]))
		{
			if (Global_91081[iLocal_18] != PLAYER_PED_ID())
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(Global_91081[iLocal_18]))
				{
					if (IS_PED_IN_ANY_VEHICLE(Global_91081[iLocal_18], 0) || !IS_ENTITY_ATTACHED(Global_91081[iLocal_18]))
					{
						if (GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(Global_91081[iLocal_18], 1), GET_ENTITY_COORDS(PLAYER_PED_ID(), 0), 1) < 10f)
						{
							iLocal_19 = func_5(Global_91081[iLocal_18]);
							if ((iLocal_19 == 0 || iLocal_19 == 2) || iLocal_19 == 1)
							{
								if (iLocal_19 != func_9())
								{
									if (HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Global_91081[iLocal_18], PLAYER_PED_ID(), 17))
									{
										if (IS_PED_IN_ANY_VEHICLE(Global_91081[iLocal_18], 0))
										{
											uVar0 = GET_VEHICLE_PED_IS_IN(Global_91081[iLocal_18], 0);
										}
										if ((DOES_ENTITY_EXIST(uVar0) && IS_VEHICLE_DRIVEABLE(uVar0, 0)) || !DOES_ENTITY_EXIST(uVar0))
										{
											*uParam0 = Global_91081[iLocal_18];
											return 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_18++;
	}
	if (IS_SCREEN_FADED_OUT())
	{
		return 1;
	}
	return 0;
}

int func_9()
{
	func_10();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_10()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_6(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_5(PLAYER_PED_ID());
			if (func_7(iVar0) && (!func_11(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_7(Global_106565.f_2357.f_539.f_4321))
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

bool func_11(int iParam0)
{
	return Global_36425 == iParam0;
}

