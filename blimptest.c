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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = joaat("blimp");
	iLocal_44 = joaat("s_m_m_pilot_02");
	iLocal_46 = joaat("buzzard");
	if (IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_IN(500);
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_18();
	}
	SET_MAX_WANTED_LEVEL(0);
	func_17();
	func_16();
	func_14();
	func_11();
	while (true)
	{
		SET_TEXT_COLOUR(255, 255, 255, 255);
		SET_TEXT_SCALE(0.75f, 0.9f);
		SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.63f, "PLCHLD_MISS", 0);
		SET_TEXT_COLOUR(255, 255, 255, 255);
		SET_TEXT_SCALE(0.4f, 0.45f);
		SET_TEXT_WRAP(0f, 1f);
		func_10(0.05f, 0.7f, "PLCHLD_PASS", 0);
		func_1();
		WAIT(0);
	}
}

void func_1()
{
	vector3 vVar0;
	
	if (DOES_ENTITY_EXIST(uLocal_40))
	{
		if ((IS_ENTITY_DEAD(uLocal_40, 0) || GET_ENTITY_HEALTH(uLocal_40) <= 0) || GET_VEHICLE_ENGINE_HEALTH(uLocal_40) <= 0f)
		{
			func_9(&uLocal_42);
			if (IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
			{
				STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
			}
			if (iLocal_47 == 1)
			{
				vVar0 = { GET_ENTITY_COORDS(uLocal_40, 0) };
				func_8(vVar0);
			}
			if (iLocal_47 == 1)
			{
				func_7(&uLocal_43);
				func_4(&uLocal_40);
			}
			else
			{
				func_3(&uLocal_43, 1, 0, 1);
				func_2(&uLocal_40);
			}
		}
		else if (IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
		{
			SET_PLAYBACK_SPEED(uLocal_40, 0.25f);
		}
	}
}

void func_2(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		IS_ENTITY_DEAD(*uParam0, 0);
		if (IS_ENTITY_A_MISSION_ENTITY(*uParam0) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_3(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (!IS_PED_INJURED(*uParam0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_4(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_6(*uParam0))
		{
			if (IS_ENTITY_A_MISSION_ENTITY(*uParam0) && DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_5(PLAYER_PED_ID()))
				{
					if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), *uParam0, 0))
					{
						SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_5(PLAYER_PED_ID()))
			{
				if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), *uParam0, 0))
				{
					SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			DELETE_VEHICLE(uParam0);
		}
	}
}

int func_5(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_6(var uParam0)
{
	if (func_5(uParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(var uParam0)
{
	if (DOES_ENTITY_EXIST(*uParam0))
	{
		if (!IS_ENTITY_DEAD(*uParam0, 0))
		{
			SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0, 1);
		}
		if (!IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		DELETE_PED(uParam0);
	}
}

void func_8(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[12];
	
	iVar1 = 12;
	vVar2[0 /*3*/] = { 5f, 0f, 0f };
	vVar2[1 /*3*/] = { 0f, 5f, 0f };
	vVar2[2 /*3*/] = { 0f, 0f, 5f };
	vVar2[3 /*3*/] = { 5f, 5f, 0f };
	vVar2[4 /*3*/] = { 5f, 0f, 5f };
	vVar2[5 /*3*/] = { 0f, 5f, 5f };
	vVar2[6 /*3*/] = { 20f, 0f, 0f };
	vVar2[7 /*3*/] = { 0f, 20f, 0f };
	vVar2[8 /*3*/] = { 0f, 0f, 20f };
	vVar2[9 /*3*/] = { 20f, 20f, 0f };
	vVar2[10 /*3*/] = { 20f, 0f, 20f };
	vVar2[11 /*3*/] = { 0f, 20f, 20f };
	ADD_EXPLOSION(vParam0, 8, 1f, 1, 0, 1065353216, 0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		ADD_EXPLOSION(vParam0 + vVar2[iVar0 /*3*/], 8, 1f, 1, 0, 1065353216, 0);
		iVar0++;
	}
}

void func_9(var uParam0)
{
	if (DOES_BLIP_EXIST(*uParam0))
	{
		SET_BLIP_ROUTE(*uParam0, 0);
		REMOVE_BLIP(uParam0);
	}
}

void func_10(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

void func_11()
{
	func_2(&uLocal_45);
	REQUEST_MODEL(iLocal_46);
	while (!HAS_MODEL_LOADED(iLocal_46))
	{
		WAIT(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_45 = CREATE_VEHICLE(iLocal_46, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_40, 50f, 0f, 15f), 0f, 1, 1, 0);
		SET_HELI_BLADES_FULL_SPEED(uLocal_45);
		func_12(uLocal_45, uLocal_40);
		if (func_5(PLAYER_PED_ID()))
		{
			SET_PED_INTO_VEHICLE(PLAYER_PED_ID(), uLocal_45, -1);
			SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CLEAR_AREA(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 500f, 1, 0, 0, 0);
		}
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
}

void func_12(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = func_13(GET_ENTITY_COORDS(uParam0, 1), GET_ENTITY_COORDS(uParam1, 1), 1);
	SET_ENTITY_HEADING(uParam0, uVar0);
}

float func_13(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

void func_14()
{
	func_9(&uLocal_42);
	if (func_6(uLocal_40))
	{
		uLocal_42 = func_15(uLocal_40, 1, 5);
	}
}

int func_15(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_5(uParam0))
	{
		iVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
		SET_BLIP_AS_FRIENDLY(iVar0, iParam1);
		SET_BLIP_PRIORITY(iVar0, iParam2);
		SET_BLIP_SCALE(iVar0, 1f);
	}
	return iVar0;
}

void func_16()
{
	REQUEST_MODEL(iLocal_44);
	while (!HAS_MODEL_LOADED(iLocal_44))
	{
		WAIT(0);
	}
	if (func_6(uLocal_40))
	{
		uLocal_43 = CREATE_PED_INSIDE_VEHICLE(uLocal_40, 26, iLocal_44, -1, 1, 1);
		if (func_5(uLocal_43))
		{
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43, 1);
			SET_PED_CONFIG_FLAG(uLocal_43, 118, 0);
			SET_PED_CONFIG_FLAG(uLocal_43, 29, 0);
			SET_PED_CONFIG_FLAG(uLocal_43, 116, 0);
		}
	}
	if (func_6(uLocal_40))
	{
		START_PLAYBACK_RECORDED_VEHICLE(uLocal_40, 1, "Blimp_City", 1);
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
}

void func_17()
{
	vector3 vVar0;
	
	if (func_6(uLocal_40) && IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
	{
		STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
	}
	func_9(&uLocal_42);
	func_7(&uLocal_43);
	func_4(&uLocal_40);
	REQUEST_MODEL(iLocal_41);
	REQUEST_VEHICLE_RECORDING(1, "Blimp_City");
	while (!HAS_MODEL_LOADED(iLocal_41) || !HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "Blimp_City"))
	{
		WAIT(0);
	}
	vVar0 = { _0xF0F2103EFAF8CBA7(GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f) };
	uLocal_40 = CREATE_VEHICLE(iLocal_41, _0x92523B76657A517D(GET_VEHICLE_RECORDING_ID(1, "Blimp_City"), 0f), vVar0.z, 1, 1, 0);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
}

void func_18()
{
	if (func_6(uLocal_40) && IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_40))
	{
		STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_40);
	}
	REMOVE_VEHICLE_RECORDING(1, "Blimp_city");
	func_9(&uLocal_42);
	func_3(&uLocal_43, 1, 0, 1);
	func_2(&uLocal_40);
	func_2(&uLocal_45);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_44);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_41);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_46);
	SET_MAX_WANTED_LEVEL(6);
	TERMINATE_THIS_THREAD();
}

