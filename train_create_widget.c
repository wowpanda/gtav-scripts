#region Local Var
	var uLocal_0 = 0;
	vector3 vLocal_1 = { 0f, 0f, 0f };
	var uLocal_4 = 0;
	float fLocal_5 = 0f;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	bool bLocal_8 = 0;
	int iLocal_9 = 0;
#endregion

void __EntryFunction__()
{
	vLocal_1 = { 613f, 6438f, 31f };
	fLocal_5 = 5f;
	iLocal_6 = 1;
	SET_MISSION_FLAG(1);
	if (HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_1();
	}
	SET_RANDOM_TRAINS(0);
	DELETE_ALL_TRAINS();
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		SET_ENTITY_COORDS(PLAYER_PED_ID(), 626.68f, 6442.31f, 30.88f, 1, 0, 0, 1);
		SET_ENTITY_HEADING(PLAYER_PED_ID(), -177f);
		SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}
	REQUEST_MODEL(joaat("freight"));
	REQUEST_MODEL(joaat("freightcar"));
	REQUEST_MODEL(joaat("freightgrain"));
	REQUEST_MODEL(joaat("freightcont1"));
	REQUEST_MODEL(joaat("freightcont2"));
	REQUEST_MODEL(joaat("tankercar"));
	REQUEST_MODEL(joaat("metrotrain"));
	while ((((((!HAS_MODEL_LOADED(joaat("freight")) || !HAS_MODEL_LOADED(joaat("freightcar"))) || !HAS_MODEL_LOADED(joaat("freightgrain"))) || !HAS_MODEL_LOADED(joaat("freightcont1"))) || !HAS_MODEL_LOADED(joaat("freightcont2"))) || !HAS_MODEL_LOADED(joaat("tankercar"))) || !HAS_MODEL_LOADED(joaat("metrotrain")))
	{
		WAIT(0);
	}
	while (true)
	{
		WAIT(0);
		if (!IS_PED_INJURED(PLAYER_PED_ID()))
		{
			if (iLocal_7)
			{
				if (DOES_ENTITY_EXIST(uLocal_0))
				{
					DELETE_MISSION_TRAIN(&uLocal_0);
				}
				uLocal_0 = CREATE_MISSION_TRAIN(uLocal_4, vLocal_1, iLocal_6);
				iLocal_7 = 0;
			}
			if (iLocal_9)
			{
				vLocal_1 = { _GET_GAMEPLAY_CAM_COORDS() };
				iLocal_9 = 0;
			}
			if (IS_VEHICLE_DRIVEABLE(uLocal_0, 0) && !IS_ENTITY_DEAD(uLocal_0, 0))
			{
				SET_TRAIN_SPEED(uLocal_0, fLocal_5);
				SET_TRAIN_CRUISE_SPEED(uLocal_0, fLocal_5);
			}
			if (bLocal_8)
			{
				func_1();
			}
		}
	}
}

void func_1()
{
	SET_RANDOM_TRAINS(1);
	TERMINATE_THIS_THREAD();
}

