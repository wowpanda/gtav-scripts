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
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_20[2] = { 0f, 0f };
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	MISC::SET_MISSION_FLAG(1);
	STREAMING::REQUEST_MODEL(joaat("CUBAN800"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("CUBAN800")))
	{
		SYSTEM::WAIT(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_20[0] = 277.7043f;
	fLocal_20[1] = 77.1113f;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), 1220.202f, 3596.281f, 33.259f, 1, false, 0, 1);
	}
	STREAMING::LOAD_SCENE(1220.202f, 3596.281f, 33.259f);
	iLocal_18 = VEHICLE::CREATE_VEHICLE(joaat("CUBAN800"), vLocal_19[0 /*3*/], fLocal_20[0], true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_18, 1084227584);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CUBAN800"));
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_18, 4294967295);
	}
	while (true)
	{
		func_1();
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x136
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_18))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_18);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CUBAN800"));
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

