#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	float fVar0;
	
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_2, 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_2, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_0))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_0, false, 1);
					unk_0x346478B12F69D4E3(iLocal_0, true);
					ENTITY::SET_ENTITY_PROOFS(iLocal_0, true, true, true, true, true, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1, false, 1);
						unk_0x346478B12F69D4E3(iLocal_1, true);
						ENTITY::SET_ENTITY_PROOFS(iLocal_1, true, true, true, true, true, 0, 0, 0);
					}
					MISC::SET_BIT(&iLocal_2, 0);
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_0, 0))
			{
				fVar0 = SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					MISC::SET_BIT(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_0))
				{
					MISC::SET_BIT(&iLocal_2, 1);
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_2, 1);
			}
		}
		SYSTEM::WAIT(0);
	}
	func_1();
}

void func_1()//Position - 0x10B
{
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_0);
	ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

