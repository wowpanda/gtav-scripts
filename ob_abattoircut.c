#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (DOES_ENTITY_EXIST(uScriptParam_0))
	{
		FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
	}
	while (true)
	{
		WAIT(0);
		if (DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0) && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
			{
				switch (iLocal_2)
				{
					case 0:
						if (DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							REQUEST_ANIM_DICT("MISSMIC2");
							if (HAS_ANIM_DICT_LOADED("MISSMIC2"))
							{
								PLAY_ENTITY_ANIM(uScriptParam_0, "beefsplitter_loop", "MISSMIC2", 1f, 1, 0, 0, 0, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
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
	func_2("ob_abattoir Terminated >>>>>>>>>>>>>>>>>\n");
	REMOVE_ANIM_DICT("MISSMIC2");
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

