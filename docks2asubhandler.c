#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	uLocal_0 = ScriptParam_0;
	uLocal_1 = ScriptParam_0.f_1;
	while (!IS_BIT_SET(uLocal_2, 1))
	{
		if (!IS_BIT_SET(uLocal_2, 0))
		{
			if (DOES_ENTITY_EXIST(uLocal_0))
			{
				if (IS_VEHICLE_DRIVEABLE(uLocal_0, 0))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uLocal_0, 0, 1);
					FREEZE_ENTITY_POSITION(uLocal_0, 1);
					SET_ENTITY_PROOFS(uLocal_0, 1, 1, 1, 1, 1, 0, 0, 0);
					if (DOES_ENTITY_EXIST(uLocal_1))
					{
						SET_ENTITY_AS_MISSION_ENTITY(uLocal_1, 0, 1);
						FREEZE_ENTITY_POSITION(uLocal_1, 1);
						SET_ENTITY_PROOFS(uLocal_1, 1, 1, 1, 1, 1, 0, 0, 0);
					}
					SET_BIT(&uLocal_2, 0);
				}
			}
		}
		else if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (IS_VEHICLE_DRIVEABLE(uLocal_0, 0))
			{
				fVar0 = VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), GET_ENTITY_COORDS(uLocal_0, 1));
				if (fVar0 > 90000f)
				{
					SET_BIT(&uLocal_2, 1);
				}
				else if (fVar0 > 40000f && !IS_ENTITY_ON_SCREEN(uLocal_0))
				{
					SET_BIT(&uLocal_2, 1);
				}
			}
			else
			{
				SET_BIT(&uLocal_2, 1);
			}
		}
		WAIT(0);
	}
	func_1();
}

void func_1()
{
	SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_0);
	SET_ENTITY_AS_NO_LONGER_NEEDED(&uLocal_1);
	TERMINATE_THIS_THREAD();
}

