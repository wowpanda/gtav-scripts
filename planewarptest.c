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
	vector3 vLocal_19[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	float fLocal_26[2] = { 0f, 0f };
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
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	SET_MISSION_FLAG(1);
	REQUEST_MODEL(joaat("cuban800"));
	while (!HAS_MODEL_LOADED(joaat("cuban800")))
	{
		WAIT(0);
	}
	vLocal_19[0 /*3*/] = { 1169.976f, 3592.572f, 32.6481f };
	vLocal_19[1 /*3*/] = { 1215.738f, 3586.608f, 33.5131f };
	fLocal_26[0] = 277.7043f;
	fLocal_26[1] = 77.1113f;
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		SET_ENTITY_COORDS(PLAYER_PED_ID(), 1220.202f, 3596.281f, 33.259f, 1, 0, 0, 1);
	}
	LOAD_SCENE(1220.202f, 3596.281f, 33.259f);
	uLocal_18 = CREATE_VEHICLE(joaat("cuban800"), vLocal_19[0 /*3*/], fLocal_26[0], 1, 1, 0);
	SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_18, 1084227584);
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		SET_PED_INTO_VEHICLE(PLAYER_PED_ID(), uLocal_18, -1);
	}
	while (true)
	{
		func_1();
		WAIT(0);
	}
}

void func_1()
{
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		CLEAR_PED_TASKS_IMMEDIATELY(PLAYER_PED_ID());
	}
	if (DOES_ENTITY_EXIST(uLocal_18))
	{
		DELETE_VEHICLE(&uLocal_18);
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cuban800"));
	TERMINATE_THIS_THREAD();
}

