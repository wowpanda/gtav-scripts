#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	while (true)
	{
		WAIT(0);
		if (DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0) && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finalec1")) == 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (!IS_PED_INJURED(PLAYER_PED_ID()))
						{
							uVar0 = GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID());
							if (IS_VALID_INTERIOR(uVar0))
							{
								if (IS_INTERIOR_READY(uVar0))
								{
									if (IS_INTERIOR_SCENE())
									{
										REQUEST_PTFX_ASSET();
										iLocal_2 = 1;
									}
								}
							}
						}
						break;
					
					case 1:
						if (HAS_PTFX_ASSET_LOADED())
						{
							if (!IS_PED_INJURED(PLAYER_PED_ID()))
							{
								if (!DOES_ENTITY_EXIST(uLocal_4))
								{
									uLocal_4 = GET_CLOSEST_OBJECT_OF_TYPE(1090f, -1996f, 39f, 100f, joaat("v_ilev_found_cranebucket"), 1, 0, 1);
								}
								if (!DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3))
								{
									if (DOES_ENTITY_EXIST(uLocal_4))
									{
										uVar0 = GET_INTERIOR_FROM_ENTITY(PLAYER_PED_ID());
										if (IS_VALID_INTERIOR(uVar0))
										{
											if (IS_INTERIOR_READY(uVar0))
											{
												if (IS_INTERIOR_SCENE())
												{
													uLocal_3 = START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_obfoundry_cauldron_steam", uLocal_4, 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	if (DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_3))
	{
		STOP_PARTICLE_FX_LOOPED(uLocal_3, 0);
	}
	if (DOES_ENTITY_EXIST(uLocal_4))
	{
		SET_OBJECT_AS_NO_LONGER_NEEDED(&uLocal_4);
	}
	func_2("ob_foundry_cauldron Terminated >>>>>>>>>>>>>>>>>\n");
	TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(var uParam0)
{
	if (ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

