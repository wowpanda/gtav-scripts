#region Local Var
	int iLocal_0 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("wp_partyboombox")) > 1)
	{
		TERMINATE_THIS_THREAD();
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		WAIT(0);
		if (!IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			iLocal_0 = 3;
		}
		switch (iLocal_0)
		{
			case 0:
				if (GET_CLOCK_HOURS() >= 22 || GET_CLOCK_HOURS() <= 4)
				{
					iLocal_0 = 1;
				}
				else
				{
					func_1();
				}
				break;
			
			case 1:
				if (!IS_IPL_ACTIVE("ID2_21_G_Night"))
				{
					REQUEST_IPL("ID2_21_G_Night");
					iLocal_0 = 2;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				if (!IS_NEW_LOAD_SCENE_ACTIVE() && !IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					func_1();
				}
				break;
		}
	}
}

void func_1()
{
	if (IS_IPL_ACTIVE("ID2_21_G_Night"))
	{
		REMOVE_IPL("ID2_21_G_Night");
	}
	TERMINATE_THIS_THREAD();
}
