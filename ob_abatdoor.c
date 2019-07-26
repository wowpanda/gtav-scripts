#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	var uLocal_3 = 0;
	vector3 vLocal_4 = { 0f, 0f, 0f };
	vector3 vLocal_7 = { 0f, 0f, 0f };
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	
	if (HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_4();
	}
	if (DOES_ENTITY_EXIST(uScriptParam_0))
	{
		FREEZE_ENTITY_POSITION(uScriptParam_0, 1);
		vLocal_4 = { GET_ENTITY_COORDS(uScriptParam_0, 1) };
		vLocal_7 = { GET_ENTITY_ROTATION(uScriptParam_0, 2) };
	}
	while (true)
	{
		WAIT(0);
		if (DOES_ENTITY_EXIST(uScriptParam_0))
		{
			if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(uScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							REQUEST_MODEL(joaat("p_abat_roller_1_col"));
							if (HAS_MODEL_LOADED(joaat("p_abat_roller_1_col")))
							{
								if (!func_3(vLocal_4, 0f, 0f, 0f, 0))
								{
									uLocal_3 = CREATE_OBJECT(joaat("p_abat_roller_1_col"), vLocal_4, 1, 1, 0);
									SET_ENTITY_ROTATION(uLocal_3, vLocal_7, 2, 1);
									iLocal_2 = 1;
								}
							}
						}
						break;
					
					case 1:
						if (DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								REQUEST_ANIM_DICT("map_objects");
								if (HAS_ANIM_DICT_LOADED("map_objects"))
								{
									iLocal_2 = 2;
								}
							}
						}
						break;
					
					case 2:
						if (DOES_ENTITY_HAVE_DRAWABLE(uScriptParam_0))
						{
							if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael2")) > 0)
							{
								if (Global_90143)
								{
									if (HAS_ANIM_DICT_LOADED("map_objects"))
									{
										PLAY_ENTITY_ANIM(uScriptParam_0, "P_Abat_roller_1_open", "map_objects", 1f, 0, 1, 0, 0, 0);
										iLocal_2 = 3;
									}
								}
							}
						}
						break;
					
					case 3:
						fVar9 = 0.35f;
						vVar0 = { vLocal_4 + Vector(3.45f, 0f, 0f) };
						if (DOES_ENTITY_EXIST(uLocal_3))
						{
							vVar3 = { GET_ENTITY_COORDS(uLocal_3, 1) };
							if (!func_2(vVar3, vVar0, 0.1f, 0))
							{
								vVar6 = { vVar0 - vVar3 };
								SET_ENTITY_COORDS(uLocal_3, vVar3 + func_1(vVar6) * FtoV(GET_FRAME_TIME()) * Vector(fVar9, fVar9, fVar9), 1, 0, 0, 1);
							}
							else
							{
								Global_90144 = 1;
								iLocal_2 = 4;
							}
						}
						break;
					
					case 4:
						break;
				}
			}
			else
			{
				func_4();
			}
		}
		else
		{
			func_4();
		}
	}
}

Vector3 func_1(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

int func_2(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (ABSF((vParam0.x - vParam3.x)) <= fParam6)
		{
			if (ABSF((vParam0.y - vParam3.y)) <= fParam6)
			{
				if (ABSF((vParam0.z - vParam3.z)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_3(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_4()
{
	if (DOES_ENTITY_EXIST(uLocal_3))
	{
		DELETE_OBJECT(&uLocal_3);
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_abat_roller_1_col"));
	func_5("ob_abatdoor Terminated >>>>>>>>>>>>>>>>>\n");
	TERMINATE_THIS_THREAD();
}

void func_5(char* sParam0)
{
	func_6(sParam0);
}

void func_6(var uParam0)
{
	if (ARE_STRINGS_EQUAL(uParam0, uParam0))
	{
	}
}

