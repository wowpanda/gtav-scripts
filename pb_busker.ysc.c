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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	vector3 vLocal_45 = { 0f, 0f, 0f };
	vector3 vLocal_46 = { 0f, 0f, 0f };
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<2> Local_51 = { 0, 5 } ;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 5;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
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
	iLocal_17 = 4294967295;
	sLocal_20 = "NULL";
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
	vLocal_45 = { ScriptParam_51.f_1[0 /*3*/] };
	func_22();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			if (func_3(3))
			{
				switch (iLocal_43)
				{
					case 0:
						if (iLocal_44 == 1)
						{
							iLocal_43 = 1;
						}
						else
						{
							func_2();
						}
						break;
					
					case 1:
						if (iLocal_47 == 0)
						{
							func_1();
						}
						break;
				}
			}
			else
			{
				func_22();
			}
		}
		else
		{
			func_22();
		}
	}
}

void func_1()//Position - 0xE7
{
	if (SYSTEM::TIMERB() > 7000)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_45, 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_45, 3f, 3f, 3f, false, true, 0))
		{
			SYSTEM::SETTIMERB(0);
			vLocal_46 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_50);
			BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_46, 0);
			BRAIN::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_B", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_50);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, 0))
			{
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			}
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_45, 3f, 3f, 3f, false, true, 0))
		{
			vLocal_46 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
			SYSTEM::SETTIMERB(0);
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_50);
			BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_46, 0);
			BRAIN::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_50);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, 0))
			{
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			}
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
	}
}

void func_2()//Position - 0x1FD
{
	iLocal_47 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vLocal_45, 50f, 50f, 50f, false, true, 0))
	{
		STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
		STREAMING::REQUEST_MODEL(joaat("g_m_y_mexgoon_02"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_mexgoon_02")))
		{
			SYSTEM::WAIT(0);
		}
		STREAMING::REQUEST_ANIM_DICT("amb@BUSKER");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("amb@BUSKER"))
		{
			SYSTEM::WAIT(0);
		}
		vLocal_46.z = (vLocal_45.z - 1f);
		iLocal_48 = PED::CREATE_PED(19, joaat("g_m_y_mexgoon_02"), vLocal_45.x, vLocal_45.y, vLocal_46.z, 0f, 1, true);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_48, 0))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&iLocal_50);
			BRAIN::TASK_TURN_PED_TO_FACE_COORD(0, vLocal_46, 0);
			BRAIN::TASK_PLAY_ANIM(0, "amb@BUSKER", "SAX_loop_A", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
			CUTSCENE::_0x8D9DF6ECA8768583(iLocal_50);
			BRAIN::TASK_PERFORM_SEQUENCE(iLocal_48, iLocal_50);
			BRAIN::CLEAR_SEQUENCE_TASK(&iLocal_50);
		}
		if (iLocal_47 == 1)
		{
			vLocal_46 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_48, 3.8f, 0.8f, 0f) };
			iLocal_49 = PED::CREATE_PED(5, joaat("a_f_m_bevhills_02"), vLocal_46, 0f, 1, true);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_49, 0))
			{
				BRAIN::TASK_TURN_PED_TO_FACE_COORD(iLocal_49, vLocal_45, 0);
			}
		}
		iLocal_44 = 1;
	}
}

int func_3(int iParam0)//Position - 0x331
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (func_21(6) || func_21(7))
			{
				return 1;
			}
			else
			{
				return func_3(3);
			}
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			if (func_19(5))
			{
				if (func_4(4))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_4(int iParam0)//Position - 0x3A3
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_15();
				if (!func_14(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_13()) || Global_19A9D) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_10()) || func_9()) || func_8()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_13()) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_13()) || Global_19A9D) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_8()) || func_10()) || func_9()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_13()) || Global_19A9D) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_10()) || func_9()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_13() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_11(8, 4294967295)) || func_7()) || func_6()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_11(8, 4294967295) || func_10()) || func_9()) || func_6()) || func_5())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_13()) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_9()) || func_8()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_13()) || func_9()) || Global_19A9D) || Global_6375) || func_12()) || Global_9197) || func_11(8, 4294967295)) || func_8()) || func_6()) || func_7()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_13()) || Global_19A9D) || Global_6375) || func_12()) || func_11(8, 4294967295)) || func_8()) || func_6()) || func_10()) || func_9()) || func_7())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_5()//Position - 0xAC0
{
	return Global_16C57.f_1;
}

int func_6()//Position - 0xACE
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_7()//Position - 0xAF4
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_8()//Position - 0xB0E
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_9()//Position - 0xB38
{
	return Global_16C64.f_148 > 0;
}

bool func_10()//Position - 0xB49
{
	return Global_16C64.f_147 > 0;
}

bool func_11(int iParam0, int iParam1)//Position - 0xB5A
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

var func_12()//Position - 0xB95
{
	return Global_140859;
}

int func_13()//Position - 0xBA1
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

bool func_14(int iParam0)//Position - 0xBBD
{
	return iParam0 < 3;
}

var func_15()//Position - 0xBC9
{
	func_16();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_16()//Position - 0xBE2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_18(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_17(AUDIO::_0x0626A247D2405330());
			if (func_14(iVar0) && (!func_21(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_14(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

int func_17(int iParam0)//Position - 0xCDF
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_18(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_18(int iParam0)//Position - 0xD1C
{
	if (func_14(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_19(int iParam0)//Position - 0xD46
{
	return func_20(iParam0, Global_8D15);
}

int func_20(int iParam0, int iParam1)//Position - 0xD57
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_21(int iParam0)//Position - 0xF38
{
	return Global_8D15 == iParam0;
}

void func_22()//Position - 0xF46
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

